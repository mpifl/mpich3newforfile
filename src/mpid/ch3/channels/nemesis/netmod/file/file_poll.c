#include "file_impl.h"

extern int MPID_nem_file_myrank;
extern int MPID_nem_file_nranks;
extern fileopt_t *MPID_nem_file_opt;
extern char *mpid_nem_file_rev_buff;
extern int FILE_REV_BUF_MAX_SIZE;
int *get_filefd()
{
	int i;
	char file_name[128];
	int *rev_fd;
	rev_fd = (int *)malloc(sizeof(int)*MPID_nem_file_nranks);
	memset(rev_fd,-1,sizeof(int)*MPID_nem_file_nranks);
	for(i=0;i < MPID_nem_file_nranks;i++)
	{
		if(i == MPID_nem_file_myrank)
			continue;
		sprintf(file_name,"%dto%d",i,MPID_nem_file_myrank);
		rev_fd[i] = open(/*"0to1"*/file_name,O_CREAT|O_APPEND,0777);
		if(rev_fd[i] < 0)
			return NULL;
	}
	return rev_fd;
}
int vertify_closefile_exist(int rank)
{
	char file_name[128];
	sprintf(file_name,"%dto%dclose",MPID_nem_file_myrank,rank);
	if(access(file_name,0)==0)
		return 1;
	else return 0;
}
int remove_closefile(int rank)
{
	char file_name[128];
	sprintf(file_name,"%dto%dclose",MPID_nem_file_myrank,rank);
	if(remove(file_name)){
		return 0;	
	}
	return 1;
}
static int MPID_nem_file_recv_handler(int fd,fileopt_t *fo)
{
	int mpi_errno = MPI_SUCCESS;
	MPIDI_VC_t *fo_vc = fo->vc;
	int bytes_recvd;
	MPIDI_STATE_DECL(MPID_STATE_MPID_NEM_FILE_RECV_HANDLER);

    MPIDI_FUNC_ENTER(MPID_STATE_MPID_NEM_FILE_RECV_HANDLER);
	/*if(fo_vc->ch.recv_active == NULL)
	{
		MPIU_DBG_MSG(CH3_CHANNEL, VERBOSE, "CH RECV ACTIVE");
	}else{
        MPIDI_CH3I_VC *const fo_vc_ch = &fo_vc->ch;
        MPID_Request *const rreq = fo_vc_ch->recv_active;
        MPID_IOV *iov = &rreq->dev.iov[rreq->dev.iov_offset];
        //int (*reqFn) (MPIDI_VC_t *, MPID_Request *, int *);

        MPIU_Assert(rreq->dev.iov_count > 0);
        MPIU_Assert(rreq->dev.iov_offset >= 0);
        MPIU_Assert(rreq->dev.iov_count + rreq->dev.iov_offset <= MPID_IOV_LIMIT);

        bytes_recvd = file_readv(fd, iov,rreq->dev.iov_count);
        MPIU_ERR_CHKANDJUMP1(bytes_recvd <= 0, mpi_errno, MPI_ERR_OTHER,
                             "**scif_readv", "**scif_scif_readv %s", MPIU_Strerror(errno));

        MPIU_DBG_MSG_D(CH3_CHANNEL, VERBOSE, "Cont recv %ld", bytes_recvd);

        for (iov = &rreq->dev.iov[rreq->dev.iov_offset];
             iov < &rreq->dev.iov[rreq->dev.iov_offset + rreq->dev.iov_count]; ++iov) {
            if (bytes_recvd < iov->MPID_IOV_LEN) {
                iov->MPID_IOV_BUF = (char *) iov->MPID_IOV_BUF + bytes_recvd;
                iov->MPID_IOV_LEN -= bytes_recvd;
                rreq->dev.iov_count =
                    &rreq->dev.iov[rreq->dev.iov_offset + rreq->dev.iov_count] - iov;
                rreq->dev.iov_offset = iov - rreq->dev.iov;
                MPIU_DBG_MSG_D(CH3_CHANNEL, VERBOSE, "bytes_recvd = %ld", (long int) bytes_recvd);
                MPIU_DBG_MSG_D(CH3_CHANNEL, VERBOSE, "iov len = %ld", (long int) iov->MPID_IOV_LEN);
                MPIU_DBG_MSG_D(CH3_CHANNEL, VERBOSE, "iov_offset = %d", rreq->dev.iov_offset);
                goto fn_exit;
            }
            bytes_recvd -= iov->MPID_IOV_LEN;
        }
	}*/
	bytes_recvd = read(fd,mpid_nem_file_rev_buff,FILE_REV_BUF_MAX_SIZE);
	if(bytes_recvd <= 0)
		goto fn_exit;
  fn_exit:
    return bytes_recvd;
  fn_fail:
    MPIU_DBG_MSG_FMT(NEM_SOCK_DET, VERBOSE, (MPIU_DBG_FDEST, "failure. mpi_errno = %d", mpi_errno));
    goto fn_exit;
}
#undef FUNCNAME
#define FUNCNAME MPID_nem_file_poll
#undef FCNAME
#define FCNAME MPIDI_QUOTE(FUNCNAME)
int MPID_nem_file_poll(int in_blocking_poll)
{   
	int mpi_errno = MPI_SUCCESS, i;
	fileopt_t *fo; 
	int bytes_recvd = 0;
	int *fd;
	fd = get_filefd();
   	for (i = 0; i < MPID_nem_file_nranks; ++i) {
        if (i == MPID_nem_file_myrank)
            	continue;
        fo = &MPID_nem_file_opt[i];
		if(fd[i] == -1)
			continue;
		bytes_recvd = MPID_nem_file_recv_handler(fd[i],fo);
		MPIU_DBG_MSG_D(CH3_CHANNEL,VERBOSE,"recv = %d",bytes_recvd);
		if(vertify_closefile_exist(i))
		{
			MPIU_DBG_MSG(CH3_CHANNEL,VERBOSE,"there is a new close file....");
			remove_closefile(i);
			MPIDI_CH3U_Handle_connection(fo->vc,MPIDI_VC_EVENT_TERMINATED);
			goto fn_exit;
		}
		if(bytes_recvd > 0){
			MPIU_DBG_MSG(CH3_CHANNEL,VERBOSE,"recv a buff....");
			MPID_nem_handle_pkt(fo->vc,mpid_nem_file_rev_buff,sizeof(MPIDI_CH3_Pkt_t));
		}	
	}
  fn_exit:
    return mpi_errno;
  fn_fail:
    MPIU_DBG_MSG_FMT(NEM_SOCK_DET, VERBOSE, (MPIU_DBG_FDEST, "failure. mpi_errno = %d", mpi_errno));
    goto fn_exit;
    return MPI_SUCCESS;
}

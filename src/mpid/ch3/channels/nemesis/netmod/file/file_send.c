#include "file_impl.h"
extern MPID_nem_file_myrank;
void creat_closefile(int i){
	int fd;
	int close_file[128];
	sprintf(close_file,"%dto%dclose",MPID_nem_file_myrank,i);
	fd = open(close_file,O_CREAT,0777);
	if(fd < 0 ){
		MPIU_DBG_MSG(CH3_CHANNEL,VERBOSE,"creat close file fail!!");
		return ;
	}
	close(fd);
}

#undef FUNCNAME
#define FUNCNAME MPID_nem_file_send_queued
#undef FCNAME
#define FCNAME MPIDI_QUOTE(FUNCNAME)
int MPID_nem_file_send_queued(MPIDI_VC_t * vc, reqq_t * send_queue)
{
	
	int mpi_errno = MPI_SUCCESS;
    MPID_Request *sreq;
    MPIDI_msg_sz_t offset;
    MPID_IOV *iov;
    int complete;
    MPID_nem_file_vc_area *vc_file = VC_FILE(vc);
    MPIDI_STATE_DECL(MPID_STATE_MPID_NEM_TCP_SEND_QUEUED);

    MPIDI_FUNC_ENTER(MPID_STATE_MPID_NEM_TCP_SEND_QUEUED);

    MPIU_DBG_MSG_P(CH3_CHANNEL, VERBOSE, "vc = %p", vc);
    MPIU_Assert(vc != NULL);

    if (MPIDI_CH3I_Sendq_empty(*send_queue))
		goto fn_exit;

    while (!MPIDI_CH3I_Sendq_empty(*send_queue))
    {
        sreq = MPIDI_CH3I_Sendq_head(*send_queue);
        MPIU_DBG_MSG_P(CH3_CHANNEL, VERBOSE, "Sending %p", sreq);

        iov = &sreq->dev.iov[sreq->dev.iov_offset];
        
        offset = file_writev(vc_file->fo->fd, iov, sreq->dev.iov_count);
        if (offset <= 0) {
            goto fn_exit; /* this vc is closed now, just bail out */
        }
        MPIU_DBG_MSG_D(CH3_CHANNEL, VERBOSE, "write " MPIDI_MSG_SZ_FMT, offset);
		MPIDI_CH3I_Sendq_dequeue(send_queue, &sreq);
		sreq->dev.iov_offset = 0;
    }
fn_exit:
    MPIDI_FUNC_EXIT(MPID_STATE_MPID_NEM_TCP_SEND_QUEUED);
    return mpi_errno;
fn_fail:
    goto fn_exit;
}

#undef FUNCNAME
#define FUNCNAME MPID_nem_file_iStartContigMsg
#undef FCNAME
#define FCNAME MPIDI_QUOTE(FUNCNAME)
int MPID_nem_file_iStartContigMsg(MPIDI_VC_t * vc, void *hdr, MPIDI_msg_sz_t hdr_sz,
                                  void *data, MPIDI_msg_sz_t data_sz, MPID_Request ** sreq_ptr)
{
	int mpi_errno = MPI_SUCCESS;
    MPID_Request * sreq = NULL;
    MPIDI_msg_sz_t offset = 0;
    MPID_nem_file_vc_area *vc_file = VC_FILE(vc);
    fileopt_t *fo = vc_file->fo;
    MPIDI_STATE_DECL(MPID_STATE_MPID_NEM_FILE_ISTARTCONTIGMSG);

    MPIDI_FUNC_ENTER(MPID_STATE_MPID_NEM_FILE_ISTARTCONTIGMSG);
    
    MPIU_Assert(hdr_sz <= sizeof(MPIDI_CH3_Pkt_t));
    
    MPIU_DBG_MSG(CH3_CHANNEL, VERBOSE, "file_iStartContigMsg");
    MPIDI_DBG_Print_packet((MPIDI_CH3_Pkt_t *)hdr);
	MPIDI_CH3_Pkt_t *pkt = (MPIDI_CH3_Pkt_t *) hdr;
    MPIDI_CH3_Pkt_close_t *close_pkt = &pkt->close;
    dprintf("isend(istartcontig),%d->%d,type=%d,ack=%d\n",
                vc->pg_rank, close_pkt->type, close_pkt->ack);
    MPIU_DBG_MSG_D(CH3_CHANNEL,VERBOSE,"type=%d",close_pkt->type);
	MPIU_DBG_MSG_D(CH3_CHANNEL,VERBOSE,"ack=%d",close_pkt->ack);
    if(close_pkt->type == MPIDI_CH3_PKT_CLOSE){
		MPIU_DBG_MSG(CH3_CHANNEL,VERBOSE,"creat a close file now ......")
		creat_closefile(vc->pg_rank);
		*sreq_ptr = NULL;
		goto fn_exit;
	}
	if (MPIDI_CH3I_Sendq_empty(vc_file->send_queue))
	{
		MPID_IOV iov[2];
                
		iov[0].MPID_IOV_BUF = hdr;
		iov[0].MPID_IOV_LEN = sizeof(MPIDI_CH3_Pkt_t);
		iov[1].MPID_IOV_BUF = data;
		iov[1].MPID_IOV_LEN = data_sz;
                
		offset = file_writev(fo->fd, iov, 2);
		if (offset <= 0) {
			goto fn_fail;
		}
		MPIU_DBG_MSG_D(CH3_CHANNEL, VERBOSE, "write " MPIDI_MSG_SZ_FMT, offset);
		if (offset == sizeof(MPIDI_CH3_Pkt_t) + data_sz)
		{
				/* sent whole message */
				*sreq_ptr = NULL;
				goto fn_exit;
		}
	}
	
	/* create and enqueue request */
    MPIU_DBG_MSG(CH3_CHANNEL, VERBOSE, "enqueuing");

    /* create a request */
    sreq = MPID_Request_create();
    MPIU_Assert(sreq != NULL);
    MPIU_Object_set_ref(sreq, 2);
    sreq->kind = MPID_REQUEST_SEND;

    sreq->dev.OnDataAvail = 0;
    sreq->ch.vc = vc;
    sreq->dev.iov_offset = 0;

    if (offset < sizeof(MPIDI_CH3_Pkt_t)) {
        sreq->dev.pending_pkt = *(MPIDI_CH3_Pkt_t *) hdr;
        sreq->dev.iov[0].MPID_IOV_BUF = (char *) &sreq->dev.pending_pkt + offset;
        sreq->dev.iov[0].MPID_IOV_LEN = sizeof(MPIDI_CH3_Pkt_t) - offset;
        if (data_sz) {
            sreq->dev.iov[1].MPID_IOV_BUF = data;
            sreq->dev.iov[1].MPID_IOV_LEN = data_sz;
            sreq->dev.iov_count = 2;
        }
        else
            sreq->dev.iov_count = 1;
        }

        MPIU_Assert(sreq->dev.iov_count >= 1 && sreq->dev.iov[0].MPID_IOV_LEN > 0);

    if (MPIDI_CH3I_Sendq_empty(vc_file->send_queue)) {
        MPIDI_CH3I_Sendq_enqueue(&vc_file->send_queue, sreq);
        mpi_errno = MPID_nem_file_send_queued(vc, &vc_file->send_queue);
        if (mpi_errno)
            MPIU_ERR_POP(mpi_errno);
    }
    *sreq_ptr = sreq;
fn_exit:
    MPIDI_FUNC_EXIT(MPID_STATE_MPID_NEM_TCP_ISTARTCONTIGMSG);
    return mpi_errno;
fn_fail:
    goto fn_exit;								  
}

#undef FUNCNAME
#define FUNCNAME MPID_nem_file_iSendContig
#undef FCNAME
#define FCNAME MPIDI_QUOTE(FUNCNAME)
int MPID_nem_file_iSendContig(MPIDI_VC_t * vc, MPID_Request * sreq, void *hdr,
                              MPIDI_msg_sz_t hdr_sz, void *data, MPIDI_msg_sz_t data_sz)
{
	int mpi_errno = MPI_SUCCESS;
	return mpi_errno;
}
							  
#undef FUNCNAME
#define FUNCNAME MPID_nem_file_SendNoncontig
#undef FCNAME
#define FCNAME MPIDI_QUOTE(FUNCNAME)
int MPID_nem_file_SendNoncontig(MPIDI_VC_t * vc, MPID_Request * sreq, void *header,
                                MPIDI_msg_sz_t hdr_sz)
{
	int mpi_errno = MPI_SUCCESS;
	return mpi_errno;								
}

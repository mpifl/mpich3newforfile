/* -*- Mode: C; c-basic-offset:4 ; indent-tabs-mode:nil ; -*- */
/*
 *  (C) 2006 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 */

#include "file_impl.h"

MPID_nem_netmod_funcs_t MPIDI_nem_file_funcs = {
    MPID_nem_file_init,
    MPID_nem_file_finalize,
#ifdef ENABLE_CHECKPOINTING
    NULL,
    NULL,
    NULL,
#endif
    MPID_nem_file_poll,
    MPID_nem_file_get_business_card,
    MPID_nem_file_connect_to_root,
    MPID_nem_file_vc_init,
    MPID_nem_file_vc_destroy,
    MPID_nem_file_vc_terminate,
    NULL,/* anysource iprobe */
	NULL
};
int MPID_nem_file_nranks;
int MPID_nem_file_myrank;
char *mpid_nem_file_rev_buff;
int FILE_REV_BUF_MAX_SIZE = 1024;
fileopt_t *MPID_nem_file_opt;
int local_endpoint;

#undef FUNCNAME
#define FUNCNAME MPID_nem_file_post_init
#undef FCNAME
#define FCNAME MPIU_QUOTE(FUNCNAME)
/*
	when we use file ,assume that every process is no-local
	MPID_nem_file_post_init is callback and will call after 
	the vc init.
*/
int MPID_nem_file_post_init(void)
{
	int i;
	int mpi_error = MPI_SUCCESS;
	MPIDI_PG_t *my_pg = MPIDI_Process.my_pg;
	MPIDI_VC_t *vc;
	MPIDI_CH3I_VC *vc_ch;
	
	MPIDI_STATE_DECL(MPID_NEM_FILE_POST_INIT);
        MPIDI_FUNC_ENTER(MPID_NEM_FILE_POST_INIT);
	
	for(i=0;i < MPID_nem_file_nranks;i++)
	{
		vc = &my_pg->vct[i];
		vc_ch = &vc->ch;
		if(i == MPID_nem_file_myrank || vc_ch->is_local)
		{
			continue;
		}
		vc->sendNoncontig_fn = MPID_nem_file_SendNoncontig;
		vc_ch->iStartContigMsg = MPID_nem_file_iStartContigMsg;
		vc_ch->iSendContig = MPID_nem_file_iSendContig;
	}
	return mpi_error;
}

#undef FUNCNAME
#define FUNCNAME MPID_nem_file_init
#undef FCNAME
#define FCNAME MPIDI_QUOTE(FUNCNAME)
int MPID_nem_file_init(MPIDI_PG_t *pg_p, int pg_rank,
                   char **bc_val_p, int *val_max_sz_p)
{   
	int mpi_errno = MPI_SUCCESS;
	int i;
	MPIU_CHKPMEM_DECL(2);
        MPIDI_STATE_DECL(MPID_STATE_FILE_INIT);
        MPIDI_FUNC_ENTER(MPID_STATE_FILE_INIT);
	/*get the process rank and the 
	processs rank equal the pg rank*/
	
	MPIU_DBG_MSG(VC, VERBOSE, "MPID_nem_file_init");
	
	MPID_nem_file_myrank = MPIDI_Process.my_pg_rank;
	MPID_nem_file_nranks = pg_p->size;
	//test
	local_endpoint = MPID_nem_file_myrank;

	int *fd;
	/*
		open the files and get the file fds;
	*/
	fd = file_open(MPID_nem_file_nranks,MPID_nem_file_myrank);
	if(fd == NULL)
		goto fn_fail;
	MPIU_CHKPMEM_MALLOC(MPID_nem_file_opt, fileopt_t *,MPID_nem_file_nranks * sizeof(fileopt_t), mpi_errno, "connection table");
        memset(MPID_nem_file_opt, 0, MPID_nem_file_nranks * sizeof(fileopt_t));
	
	for(i=0;i < MPID_nem_file_nranks;i++)
	{
		(MPID_nem_file_opt[i]).fd = fd[i];
	}
	
	MPIU_CHKPMEM_MALLOC(mpid_nem_file_rev_buff,char *, FILE_REV_BUF_MAX_SIZE , mpi_errno,"file temporary buffer");
	MPIU_CHKPMEM_COMMIT();
	MPID_nem_file_get_business_card(pg_rank,bc_val_p,val_max_sz_p);
	mpi_errno = MPID_nem_register_initcomp_cb(MPID_nem_file_post_init);
	if (mpi_errno)
        MPIU_ERR_POP(mpi_errno);
	
fn_exit:
    MPIDI_FUNC_EXIT(MPID_STATE_FILE_INIT);
    return mpi_errno;
fn_fail:
    MPIU_CHKPMEM_REAP();
    goto fn_exit;
}

int MPID_nem_file_vc_init(MPIDI_VC_t *vc)
{
	MPIU_DBG_MSG(VC, VERBOSE, "MPID_nem_file_vc_init---->1");
	int mpi_errno = MPI_SUCCESS;
	MPIDI_CH3I_VC *vc_ch;
        MPID_nem_file_vc_area *vc_file;
	fileopt_t *fo;
	char *business_card;	
	int val_max_sz;
	int remote_endpoint;

	PMI_KVS_Get_value_length_max(&val_max_sz);
		
	MPIDI_STATE_DECL(MPID_STATE_MPID_NEM_FILE_VC_INIT);
        MPIDI_FUNC_ENTER(MPID_STATE_MPID_NEM_FILE_VC_INIT);
	
	vc_ch = &vc->ch;
	vc_file = VC_FILE(vc);
	vc->sendNoncontig_fn = MPID_nem_file_SendNoncontig;
	vc_ch->iStartContigMsg = MPID_nem_file_iStartContigMsg;
	vc_ch->iSendContig = MPID_nem_file_iSendContig;
	vc_ch->pkt_handler = NULL;  
        vc_ch->num_pkt_handlers = 0;  
        vc_ch->next = NULL;
        vc_ch->prev = NULL;
	ASSIGN_FO_TO_VC(vc_file,NULL);
	vc_file->send_queue.head = vc_file->send_queue.tail = NULL;
	vc_file->fo = &MPID_nem_file_opt[vc->pg_rank];
	vc_file->terminate = 0;
	vc_file->fo->vc = vc;

	business_card  = (char *)MPIU_Malloc(val_max_sz);
	mpi_errno = vc->pg->getConnInfo(vc->pg_rank,business_card,val_max_sz,vc->pg);
	
	mpi_errno = MPID_nem_file_get_from_bc(business_card,&remote_endpoint);
	MPIU_DBG_MSG_D(CH3_CHANNEL,VERBOSE,"remote_endpoint = %d\n",remote_endpoint);	
	MPIU_DBG_MSG_S(CH3_CHANNEL,VERBOSE,"business_card = %s\n",business_card);

	vc_file->fo->endpoint = remote_endpoint;
	
        return 0;//mpi_errno;
}

int MPID_nem_file_get_business_card(int my_rank, char **bc_val_p, int *val_max_sz_p)
{
    int mpi_errno = MPI_SUCCESS;
    int str_errno = MPIU_STR_SUCCESS;

    str_errno = MPIU_Str_add_int_arg (bc_val_p, val_max_sz_p, "endpoint_id",local_endpoint);
    if (str_errno) {
        MPIU_ERR_CHKANDJUMP(str_errno == MPIU_STR_NOMEM, mpi_errno, MPI_ERR_OTHER, "**buscard_len");
        MPIU_ERR_SETANDJUMP(mpi_errno, MPI_ERR_OTHER, "**buscard");
    }
    
    /*str_errno = MPIU_Str_add_binary_arg (bc_val_p, val_max_sz_p, MPIDI_CH3I_NIC_KEY, (char *)&MPID_nem_mx_local_nic_id, sizeof(uint64_t));
    if (str_errno) {
        MPIU_ERR_CHKANDJUMP(str_errno == MPIU_STR_NOMEM, mpi_errno, MPI_ERR_OTHER, "**buscard_len");
        MPIU_ERR_SETANDJUMP(mpi_errno, MPI_ERR_OTHER, "**buscard");
    }*/
   
fn_exit:
    return mpi_errno;
fn_fail:
     goto fn_exit;
}

int MPID_nem_file_get_from_bc(const char *business_card, int *remote_endpoint_id)
{
   int mpi_errno = MPI_SUCCESS;
   int str_errno = MPIU_STR_SUCCESS;
   int len;
   int tmp_endpoint_id;
   
   mpi_errno = MPIU_Str_get_int_arg(business_card, "endpoint_id", &tmp_endpoint_id);
   /* FIXME: create a real error string for this */
   MPIU_ERR_CHKANDJUMP(str_errno, mpi_errno, MPI_ERR_OTHER, "**argstr_hostd");
   *remote_endpoint_id = tmp_endpoint_id;
  /* 
   mpi_errno = MPIU_Str_get_binary_arg (business_card, MPIDI_CH3I_NIC_KEY, (char *)remote_nic_id, sizeof(uint64_t), &len);
   MPIU_ERR_CHKANDJUMP(str_errno || len != sizeof(uint64_t), mpi_errno, MPI_ERR_OTHER, "**argstr_hostd");
   */
fn_exit:
     return mpi_errno;
fn_fail:
     goto fn_exit;
}
int MPID_nem_file_connect_to_root(const char *business_card, MPIDI_VC_t *new_vc)
{
    MPIU_Assertp(0);
    return MPI_SUCCESS;
}


int MPID_nem_file_vc_destroy(MPIDI_VC_t *vc)
{
    return MPI_SUCCESS;
}

int MPID_nem_file_vc_terminate(MPIDI_VC_t *vc)
{
	int mpi_errno = MPI_SUCCESS;
    MPIDI_STATE_DECL(MPID_NEM_FILE_VC_TERMINATED);
    MPIDI_FUNC_ENTER(MPID_NEM_FILE_VC_TERMINATED);
  //  vc->state = MPIDI_VC_STATE_CLOSED;	
    mpi_errno = MPIDI_CH3U_Handle_connection(vc, MPIDI_VC_EVENT_TERMINATED);
	if (mpi_errno)
		MPIU_ERR_POP(mpi_errno);

fn_exit:
    MPIDI_FUNC_EXIT(MPID_NEM_FILE_VC_TERMINATED);
    return mpi_errno;
fn_fail:
    MPIU_DBG_MSG_FMT(NEM_SOCK_DET, VERBOSE, (MPIU_DBG_FDEST, "failure. mpi_errno = %d", mpi_errno));
    goto fn_exit;
	return mpi_errno;
}



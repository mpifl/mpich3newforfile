#include "file_impl.h"

#undef FUNCNAME
#define FUNCNAME MPID_nem_file_send_queued
#undef FCNAME
#define FCNAME MPIDI_QUOTE(FUNCNAME)
int MPID_nem_file_send_queued(MPIDI_VC_t * vc, reqq_t * send_queue)
{
	
	
	
}

#undef FUNCNAME
#define FUNCNAME MPID_nem_file_iStartContigMsg
#undef FCNAME
#define FCNAME MPIDI_QUOTE(FUNCNAME)
int MPID_nem_file_iStartContigMsg(MPIDI_VC_t * vc, void *hdr, MPIDI_msg_sz_t hdr_sz,
                                  void *data, MPIDI_msg_sz_t data_sz, MPID_Request ** sreq_ptr)
{
									  
}

#undef FUNCNAME
#define FUNCNAME MPID_nem_file_iSendContig
#undef FCNAME
#define FCNAME MPIDI_QUOTE(FUNCNAME)
int MPID_nem_file_iSendContig(MPIDI_VC_t * vc, MPID_Request * sreq, void *hdr,
                              MPIDI_msg_sz_t hdr_sz, void *data, MPIDI_msg_sz_t data_sz)
{
								  
}
							  
#undef FUNCNAME
#define FUNCNAME MPID_nem_file_SendNoncontig
#undef FCNAME
#define FCNAME MPIDI_QUOTE(FUNCNAME)
int MPID_nem_file_SendNoncontig(MPIDI_VC_t * vc, MPID_Request * sreq, void *header,
                                MPIDI_msg_sz_t hdr_sz)
{
									
}
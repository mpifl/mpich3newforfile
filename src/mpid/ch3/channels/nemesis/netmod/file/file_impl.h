#ifndef FILE_IMPL_H
#define FILE_IMPL_H

#include "mpid_nem_impl.h"
#include <errno.h>
#include <sys/types.h>

#include "file_writeread.h"

typedef GENERIC_Q_DECL(struct MPID_Request) reqq_t;


typedef struct {
    int fd;
    MPIDI_VC_t *vc;
    int endpoint;
} fileopt_t;

/* The vc provides a generic buffer in which network modules can store
   private fields This removes all dependencies from the VC struction
   on the network module, facilitating dynamic module loading. */
typedef struct {
    fileopt_t *fo;
    reqq_t send_queue;
    int terminate;
} MPID_nem_file_vc_area;

/* macro for file private in VC */
#define VC_FILE(vc) ((MPID_nem_file_vc_area *)vc->ch.netmod_area.padding)

#define ASSIGN_FO_TO_VC(vc_file_, fo_) do {      \
        (vc_file_)->fo = (fo_);                  \
    } while (0)
/*fuctions*/		
int MPID_nem_file_init(MPIDI_PG_t *pg_p, int pg_rank,char **bc_val_p, int *val_max_sz_p);
int MPID_nem_file_vc_init(MPIDI_VC_t *vc);
int MPID_nem_file_get_business_card(int my_rank, char **bc_val_p, int *val_max_sz_p);
int MPID_nem_file_connect_to_root(const char *business_card, MPIDI_VC_t *new_vc);
int MPID_nem_file_vc_destroy(MPIDI_VC_t *vc);
int MPID_nem_file_vc_terminate(MPIDI_VC_t *vc);
int MPID_nem_file_poll(int in_blocking_poll);
int MPID_nem_file_finalize(void);
int MPID_nem_file_get_from_bc(const char *business_card, int *remote_endpoint_id);

int MPID_nem_file_iSendContig(MPIDI_VC_t * vc, MPID_Request * sreq,
                              void *hdr, MPIDI_msg_sz_t hdr_sz,
                              void *data, MPIDI_msg_sz_t data_sz);
int MPID_nem_file_iStartContigMsg(MPIDI_VC_t * vc, void *hdr,
                                  MPIDI_msg_sz_t hdr_sz, void *data,
                                  MPIDI_msg_sz_t data_sz, MPID_Request ** sreq_ptr);
int MPID_nem_file_SendNoncontig(MPIDI_VC_t * vc, MPID_Request * sreq,
                                void *header, MPIDI_msg_sz_t hdr_sz);
								
int MPID_nem_file_send_queued(MPIDI_VC_t * vc, reqq_t * send_queue);



#endif /* FILE_IMPL_H */								

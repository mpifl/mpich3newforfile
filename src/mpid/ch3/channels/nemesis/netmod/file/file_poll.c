#include "file_impl.h"
#undef FUNCNAME
#define FUNCNAME MPID_nem_file_poll
#undef FCNAME
#define FCNAME MPIDI_QUOTE(FUNCNAME)
int MPID_nem_file_poll(int in_blocking_poll)
{  
    return MPI_SUCCESS;
}
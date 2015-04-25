#include "file_impl.h"

#undef FUNCNAME
#define FUNCNAME file_finalize
#undef FCNAME
#define FCNAME MPIDI_QUOTE(FUNCNAME)

extern MPID_nem_file_nranks;
extern fileopt_t *MPID_nem_file_opt;
extern MPID_nem_file_myrank;

int MPID_nem_file_finalize(void)
{

	int mpi_errno = MPI_SUCCESS,i;
	char file_name[128];
	MPIDI_STATE_DECL(MPID_STATE_MPID_NEM_FILE_ISTARTCONTIGMSG);
	MPIDI_FUNC_ENTER(MPID_STATE_MPID_NEM_FILE_ISTARTCONTIGMSG);
	
	for(i=0;i < MPID_nem_file_nranks;i++)
	{
		if(i == MPID_nem_file_myrank)
			continue;
		if(MPID_nem_file_opt[i].fd != -1){
			close(MPID_nem_file_opt[i].fd);
		}
		sprintf(file_name,"%dto%d",i,MPID_nem_file_myrank);
		if(remove(file_name)){
			MPIU_DBG_MSG(CH3_CHANNEL,VERBOSE,"remove the file fail");
		}	
	}	
  	return mpi_errno;    
}

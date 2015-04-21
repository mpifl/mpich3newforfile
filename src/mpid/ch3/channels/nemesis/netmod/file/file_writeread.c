#include "file_impl.h"
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include "file_writeread.h"
int *file_open(int fd_num,int cur_rank)
{
	char file_name[128];
	int i;
	int *fd;
	fd = (int *)malloc(fd_num*sizeof(int));
	for(i = 0;i < fd_num;i++)
	{
		
		sprintf(file_name,"%dto%d",cur_rank,i);
		fd[i] = open(file_name,O_CREAT|O_RDWR,0000);
		MPIU_DBG_MSG(CH3_CHANNEL, VERBOSE, "create.... complete");
		system("pwd");
		if(fd[i] < 0)
		{
			return NULL;
		}
	}
	return fd;
}
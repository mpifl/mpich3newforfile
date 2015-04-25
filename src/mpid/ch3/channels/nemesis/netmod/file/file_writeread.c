#include "file_impl.h"
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <string.h>
#include "file_writeread.h"
int *file_open(int fd_num,int cur_rank)
{
	char file_name[128];
	int i;
	int *fd;
	fd = (int *)malloc(fd_num*sizeof(int));
	memset(fd,-1,sizeof(int)*fd_num);
	for(i = 0;i < fd_num;i++)
	{
		if(cur_rank == i)
			continue;
		sprintf(file_name,"%dto%d",cur_rank,i);
		fd[i] = open(file_name,O_CREAT|O_RDWR,0777);
		MPIU_DBG_MSG(CH3_CHANNEL, VERBOSE, "create.... complete");
		if(fd[i] < 0)
		{
			return NULL;
		}
	}
	return fd;
}
int file_writev(int fd, const struct iovec *iov, int iovcnt)
{
    ssize_t total_size, tmp;
    struct iovec dummy;
    int i;

    /* If the total data fits into INT_MAX, directly use writev */
    total_size = 0;
    for (i = 0; i < iovcnt; i++)
        total_size += iov[i].iov_len;

    if (total_size <= INT_MAX) {
        do {
            tmp = writev(fd, iov, iovcnt);
        } while (tmp == -1 && errno == EINTR);
        return tmp;
    }

    /* Total data is larger than INT_MAX.  Issue writev with fewer
     * elements, so as to not exceed INT_MAX.  In this case, doing
     * multiple write calls, one for each iov segment is not a big
     * deal with respect to performance. */

    total_size = 0;
    for (i = 0; i < iovcnt; i++) {
        if (iov[i].iov_len <= INT_MAX) {
            do {
                tmp = writev(fd, &iov[i], 1);
            } while (tmp == -1 && errno == EINTR);
        }
        else {
            dummy.iov_base = iov[i].iov_base;
            dummy.iov_len = INT_MAX;
            do {
                tmp = writev(fd, &dummy, 1);
            } while (tmp == -1 && errno == EINTR);
        }

        if (tmp < 0)
            return tmp;
        else if (tmp < iov[i].iov_len) {
            total_size += tmp;
            return total_size;
        }
        else
            total_size += tmp;
    }

    return total_size;
}
int file_readv(int fd, const struct iovec *iov, int iovcnt)
{
    ssize_t total_size, tmp;
    struct iovec dummy;
    int i;

    /* If the total data fits into INT_MAX, directly use readv */
    total_size = 0;
    for (i = 0; i < iovcnt; i++)
        total_size += iov[i].iov_len;

    if (total_size <= INT_MAX) {
        do {
            tmp = readv(fd, iov, iovcnt);
        } while (tmp == -1 && errno == EINTR);
        return tmp;
    }

    /* Total data is larger than INT_MAX.  Issue readv with fewer
     * elements, so as to not exceed INT_MAX.  In this case, doing
     * multiple read calls, one for each iov segment is not a big
     * deal with respect to performance. */

    total_size = 0;
    for (i = 0; i < iovcnt; i++) {
        if (iov[i].iov_len <= INT_MAX) {
            do {
                tmp = readv(fd, &iov[i], 1);
            } while (tmp == -1 && errno == EINTR);
        }
        else {
            dummy.iov_base = iov[i].iov_base;
            dummy.iov_len = INT_MAX;
            do {
                tmp = readv(fd, &dummy, 1);
            } while (tmp == -1 && errno == EINTR);
        }

        if (tmp < 0)
            return tmp;
        else if (tmp < iov[i].iov_len) {
            total_size += tmp;
            return total_size;
        }
        else
            total_size += tmp;
    }
    return total_size;
}

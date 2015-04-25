#ifndef FILE_WRITEREAD_H
#define FILE_WRITEREAD_H
#include <sys/uio.h>

int *file_open(int fd_num,int cur_rank);
int file_writev(int fd, const struct iovec *iov, int iovcnt);
int file_write(int fd, char *rev_buf, int count);
int file_read(int fd,char *rev_buf,int count);
int file_readv(int fd, const struct iovec *iov, int iovcnt);

#endif /*FILE_WRITEREAD_H*/

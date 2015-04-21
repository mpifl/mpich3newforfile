mpi_core_sources +=                                \
    src/mpid/ch3/channels/nemesis/netmod/file/file_init.c \
	src/mpid/ch3/channels/nemesis/netmod/file/file_send.c \
	src/mpid/ch3/channels/nemesis/netmod/file/file_finalize.c \
	src/mpid/ch3/channels/nemesis/netmod/file/file_poll.c \
	src/mpid/ch3/channels/nemesis/netmod/file/file_writeread.c
	
noinst_HEADERS +=
	src/mpid/ch3/channels/nemesis/netmod/file/file_impl.h \
	src/mpid/ch3/channels/nemesis/netmod/file/file_writeread.h

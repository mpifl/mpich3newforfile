[#] start of __file__
dnl MPICH_SUBCFG_AFTER=src/mpid/ch3/channels/nemesis

AC_DEFUN([PAC_SUBCFG_PREREQ_]PAC_SUBCFG_AUTO_SUFFIX,[
    AM_COND_IF([BUILD_CH3_NEMESIS],[
        for net in $nemesis_networks ; do
            AS_CASE([$net],[file],[build_nemesis_netmod_file=yes])
        done
    ])
    AM_CONDITIONAL([BUILD_NEMESIS_NETMOD_FILE],[test "X$build_nemesis_netmod_file" = "Xyes"])
])dnl

AC_DEFUN([PAC_SUBCFG_BODY_]PAC_SUBCFG_AUTO_SUFFIX,[
# nothing to do for file right now
dnl AM_COND_IF([BUILD_NEMESIS_NETMOD_FILE],[
dnl AC_MSG_NOTICE([RUNNING CONFIGURE FOR ch3:nemesis:file])
dnl ])dnl end AM_COND_IF(BUILD_NEMESIS_NETMOD_FILE,...)
])dnl end _BODY

[#] end of __file__

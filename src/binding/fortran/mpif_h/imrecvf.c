/* -*- Mode: C; c-basic-offset:4 ; -*- */
/*  
 *  (C) 2001 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 *
 * This file is automatically generated by buildiface 
 * DO NOT EDIT
 */
#include "mpi_fortimpl.h"


/* Begin MPI profiling block */
#if defined(USE_WEAK_SYMBOLS) && !defined(USE_ONLY_MPI_NAMES) 
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_IMRECV( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_imrecv__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_imrecv( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_imrecv_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_IMRECV = PMPI_IMRECV
#pragma weak mpi_imrecv__ = PMPI_IMRECV
#pragma weak mpi_imrecv_ = PMPI_IMRECV
#pragma weak mpi_imrecv = PMPI_IMRECV
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_IMRECV = pmpi_imrecv__
#pragma weak mpi_imrecv__ = pmpi_imrecv__
#pragma weak mpi_imrecv_ = pmpi_imrecv__
#pragma weak mpi_imrecv = pmpi_imrecv__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_IMRECV = pmpi_imrecv_
#pragma weak mpi_imrecv__ = pmpi_imrecv_
#pragma weak mpi_imrecv_ = pmpi_imrecv_
#pragma weak mpi_imrecv = pmpi_imrecv_
#else
#pragma weak MPI_IMRECV = pmpi_imrecv
#pragma weak mpi_imrecv__ = pmpi_imrecv
#pragma weak mpi_imrecv_ = pmpi_imrecv
#pragma weak mpi_imrecv = pmpi_imrecv
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_IMRECV( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_IMRECV = PMPI_IMRECV
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_imrecv__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_imrecv__ = pmpi_imrecv__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_imrecv( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_imrecv = pmpi_imrecv
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_imrecv_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_imrecv_ = pmpi_imrecv_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_IMRECV  MPI_IMRECV
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_imrecv__  mpi_imrecv__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_imrecv  mpi_imrecv
#else
#pragma _HP_SECONDARY_DEF pmpi_imrecv_  mpi_imrecv_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_IMRECV as PMPI_IMRECV
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_imrecv__ as pmpi_imrecv__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_imrecv as pmpi_imrecv
#else
#pragma _CRI duplicate mpi_imrecv_ as pmpi_imrecv_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_IMRECV( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_IMRECV")));
extern FORT_DLL_SPEC void FORT_CALL mpi_imrecv__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_IMRECV")));
extern FORT_DLL_SPEC void FORT_CALL mpi_imrecv_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_IMRECV")));
extern FORT_DLL_SPEC void FORT_CALL mpi_imrecv( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_IMRECV")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_IMRECV( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_imrecv__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_imrecv__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_imrecv__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_imrecv_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_imrecv__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_imrecv( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_imrecv__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_IMRECV( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_imrecv_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_imrecv__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_imrecv_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_imrecv_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_imrecv_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_imrecv( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_imrecv_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_IMRECV( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_imrecv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_imrecv__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_imrecv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_imrecv_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_imrecv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_imrecv( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_imrecv")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_IMRECV( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_imrecv__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_imrecv( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_imrecv_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_imrecv__ = MPI_IMRECV
#pragma weak mpi_imrecv_ = MPI_IMRECV
#pragma weak mpi_imrecv = MPI_IMRECV
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_IMRECV = mpi_imrecv__
#pragma weak mpi_imrecv_ = mpi_imrecv__
#pragma weak mpi_imrecv = mpi_imrecv__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_IMRECV = mpi_imrecv_
#pragma weak mpi_imrecv__ = mpi_imrecv_
#pragma weak mpi_imrecv = mpi_imrecv_
#else
#pragma weak MPI_IMRECV = mpi_imrecv
#pragma weak mpi_imrecv__ = mpi_imrecv
#pragma weak mpi_imrecv_ = mpi_imrecv
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_IMRECV( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_imrecv__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_IMRECV")));
extern FORT_DLL_SPEC void FORT_CALL mpi_imrecv_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_IMRECV")));
extern FORT_DLL_SPEC void FORT_CALL mpi_imrecv( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_IMRECV")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_IMRECV( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_imrecv__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_imrecv__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_imrecv_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_imrecv__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_imrecv( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_imrecv__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_IMRECV( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_imrecv_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_imrecv__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_imrecv_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_imrecv_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_imrecv( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_imrecv_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_IMRECV( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_imrecv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_imrecv__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_imrecv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_imrecv_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_imrecv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_imrecv( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_IMRECV( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_imrecv__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_imrecv_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_imrecv( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_imrecv__ = PMPI_IMRECV
#pragma weak pmpi_imrecv_ = PMPI_IMRECV
#pragma weak pmpi_imrecv = PMPI_IMRECV
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_IMRECV = pmpi_imrecv__
#pragma weak pmpi_imrecv_ = pmpi_imrecv__
#pragma weak pmpi_imrecv = pmpi_imrecv__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_IMRECV = pmpi_imrecv_
#pragma weak pmpi_imrecv__ = pmpi_imrecv_
#pragma weak pmpi_imrecv = pmpi_imrecv_
#else
#pragma weak PMPI_IMRECV = pmpi_imrecv
#pragma weak pmpi_imrecv__ = pmpi_imrecv
#pragma weak pmpi_imrecv_ = pmpi_imrecv
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_imrecv__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_IMRECV")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_imrecv_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_IMRECV")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_imrecv( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_IMRECV")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_IMRECV( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_imrecv__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_imrecv_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_imrecv__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_imrecv( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_imrecv__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_IMRECV( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_imrecv_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_imrecv__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_imrecv_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_imrecv( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_imrecv_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_IMRECV( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_imrecv")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_imrecv__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_imrecv")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_imrecv_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_imrecv")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_imrecv_ PMPI_IMRECV
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_imrecv_ pmpi_imrecv__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_imrecv_ pmpi_imrecv
#else
#define mpi_imrecv_ pmpi_imrecv_
#endif /* Test on name mapping */

/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Imrecv
#define MPI_Imrecv PMPI_Imrecv 

#else

#ifdef F77_NAME_UPPER
#define mpi_imrecv_ MPI_IMRECV
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_imrecv_ mpi_imrecv__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_imrecv_ mpi_imrecv
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_imrecv_ ( void*v1, MPI_Fint *v2, MPI_Fint *v3, MPI_Fint *v4, MPI_Fint *v5, MPI_Fint *ierr ){
    *ierr = MPI_Imrecv( v1, (int)*v2, (MPI_Datatype)(*v3), (MPI_Message *)(v4), (MPI_Request *)(v5) );
}

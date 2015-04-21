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
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_FREE_KEYVAL( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_free_keyval__( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_free_keyval( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_free_keyval_( MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_WIN_FREE_KEYVAL = PMPI_WIN_FREE_KEYVAL
#pragma weak mpi_win_free_keyval__ = PMPI_WIN_FREE_KEYVAL
#pragma weak mpi_win_free_keyval_ = PMPI_WIN_FREE_KEYVAL
#pragma weak mpi_win_free_keyval = PMPI_WIN_FREE_KEYVAL
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_WIN_FREE_KEYVAL = pmpi_win_free_keyval__
#pragma weak mpi_win_free_keyval__ = pmpi_win_free_keyval__
#pragma weak mpi_win_free_keyval_ = pmpi_win_free_keyval__
#pragma weak mpi_win_free_keyval = pmpi_win_free_keyval__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_WIN_FREE_KEYVAL = pmpi_win_free_keyval_
#pragma weak mpi_win_free_keyval__ = pmpi_win_free_keyval_
#pragma weak mpi_win_free_keyval_ = pmpi_win_free_keyval_
#pragma weak mpi_win_free_keyval = pmpi_win_free_keyval_
#else
#pragma weak MPI_WIN_FREE_KEYVAL = pmpi_win_free_keyval
#pragma weak mpi_win_free_keyval__ = pmpi_win_free_keyval
#pragma weak mpi_win_free_keyval_ = pmpi_win_free_keyval
#pragma weak mpi_win_free_keyval = pmpi_win_free_keyval
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_FREE_KEYVAL( MPI_Fint *, MPI_Fint * );

#pragma weak MPI_WIN_FREE_KEYVAL = PMPI_WIN_FREE_KEYVAL
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_win_free_keyval__( MPI_Fint *, MPI_Fint * );

#pragma weak mpi_win_free_keyval__ = pmpi_win_free_keyval__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_win_free_keyval( MPI_Fint *, MPI_Fint * );

#pragma weak mpi_win_free_keyval = pmpi_win_free_keyval
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_win_free_keyval_( MPI_Fint *, MPI_Fint * );

#pragma weak mpi_win_free_keyval_ = pmpi_win_free_keyval_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_WIN_FREE_KEYVAL  MPI_WIN_FREE_KEYVAL
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_win_free_keyval__  mpi_win_free_keyval__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_win_free_keyval  mpi_win_free_keyval
#else
#pragma _HP_SECONDARY_DEF pmpi_win_free_keyval_  mpi_win_free_keyval_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_WIN_FREE_KEYVAL as PMPI_WIN_FREE_KEYVAL
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_win_free_keyval__ as pmpi_win_free_keyval__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_win_free_keyval as pmpi_win_free_keyval
#else
#pragma _CRI duplicate mpi_win_free_keyval_ as pmpi_win_free_keyval_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_FREE_KEYVAL( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_WIN_FREE_KEYVAL")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_free_keyval__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_WIN_FREE_KEYVAL")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_free_keyval_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_WIN_FREE_KEYVAL")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_free_keyval( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_WIN_FREE_KEYVAL")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_FREE_KEYVAL( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_free_keyval__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_free_keyval__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_free_keyval__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_free_keyval_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_free_keyval__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_free_keyval( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_free_keyval__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_FREE_KEYVAL( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_free_keyval_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_free_keyval__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_free_keyval_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_free_keyval_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_free_keyval_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_free_keyval( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_free_keyval_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_FREE_KEYVAL( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_free_keyval")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_free_keyval__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_free_keyval")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_free_keyval_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_free_keyval")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_free_keyval( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_free_keyval")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_FREE_KEYVAL( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_free_keyval__( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_free_keyval( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_free_keyval_( MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_win_free_keyval__ = MPI_WIN_FREE_KEYVAL
#pragma weak mpi_win_free_keyval_ = MPI_WIN_FREE_KEYVAL
#pragma weak mpi_win_free_keyval = MPI_WIN_FREE_KEYVAL
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_WIN_FREE_KEYVAL = mpi_win_free_keyval__
#pragma weak mpi_win_free_keyval_ = mpi_win_free_keyval__
#pragma weak mpi_win_free_keyval = mpi_win_free_keyval__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_WIN_FREE_KEYVAL = mpi_win_free_keyval_
#pragma weak mpi_win_free_keyval__ = mpi_win_free_keyval_
#pragma weak mpi_win_free_keyval = mpi_win_free_keyval_
#else
#pragma weak MPI_WIN_FREE_KEYVAL = mpi_win_free_keyval
#pragma weak mpi_win_free_keyval__ = mpi_win_free_keyval
#pragma weak mpi_win_free_keyval_ = mpi_win_free_keyval
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_FREE_KEYVAL( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_free_keyval__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_WIN_FREE_KEYVAL")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_free_keyval_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_WIN_FREE_KEYVAL")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_free_keyval( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_WIN_FREE_KEYVAL")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_FREE_KEYVAL( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_free_keyval__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_free_keyval__( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_free_keyval_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_free_keyval__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_free_keyval( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_free_keyval__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_FREE_KEYVAL( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_free_keyval_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_free_keyval__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_free_keyval_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_free_keyval_( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_free_keyval( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_free_keyval_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_FREE_KEYVAL( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_free_keyval")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_free_keyval__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_free_keyval")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_free_keyval_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_free_keyval")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_free_keyval( MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_WIN_FREE_KEYVAL( MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_free_keyval__( MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_free_keyval_( MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_free_keyval( MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_win_free_keyval__ = PMPI_WIN_FREE_KEYVAL
#pragma weak pmpi_win_free_keyval_ = PMPI_WIN_FREE_KEYVAL
#pragma weak pmpi_win_free_keyval = PMPI_WIN_FREE_KEYVAL
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_WIN_FREE_KEYVAL = pmpi_win_free_keyval__
#pragma weak pmpi_win_free_keyval_ = pmpi_win_free_keyval__
#pragma weak pmpi_win_free_keyval = pmpi_win_free_keyval__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_WIN_FREE_KEYVAL = pmpi_win_free_keyval_
#pragma weak pmpi_win_free_keyval__ = pmpi_win_free_keyval_
#pragma weak pmpi_win_free_keyval = pmpi_win_free_keyval_
#else
#pragma weak PMPI_WIN_FREE_KEYVAL = pmpi_win_free_keyval
#pragma weak pmpi_win_free_keyval__ = pmpi_win_free_keyval
#pragma weak pmpi_win_free_keyval_ = pmpi_win_free_keyval
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_free_keyval__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_WIN_FREE_KEYVAL")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_free_keyval_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_WIN_FREE_KEYVAL")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_free_keyval( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_WIN_FREE_KEYVAL")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_WIN_FREE_KEYVAL( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_free_keyval__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_free_keyval_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_free_keyval__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_free_keyval( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_free_keyval__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_WIN_FREE_KEYVAL( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_free_keyval_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_free_keyval__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_free_keyval_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_free_keyval( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_free_keyval_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_WIN_FREE_KEYVAL( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_free_keyval")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_free_keyval__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_free_keyval")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_free_keyval_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_free_keyval")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_win_free_keyval_ PMPI_WIN_FREE_KEYVAL
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_win_free_keyval_ pmpi_win_free_keyval__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_win_free_keyval_ pmpi_win_free_keyval
#else
#define mpi_win_free_keyval_ pmpi_win_free_keyval_
#endif /* Test on name mapping */

/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Win_free_keyval
#define MPI_Win_free_keyval PMPI_Win_free_keyval 

#else

#ifdef F77_NAME_UPPER
#define mpi_win_free_keyval_ MPI_WIN_FREE_KEYVAL
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_win_free_keyval_ mpi_win_free_keyval__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_win_free_keyval_ mpi_win_free_keyval
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_win_free_keyval_ ( MPI_Fint *v1, MPI_Fint *ierr ){
    *ierr = MPI_Win_free_keyval( v1 );
}

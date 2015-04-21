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
extern FORT_DLL_SPEC void FORT_CALL MPI_ALLGATHERV( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_allgatherv__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_allgatherv( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_allgatherv_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_ALLGATHERV = PMPI_ALLGATHERV
#pragma weak mpi_allgatherv__ = PMPI_ALLGATHERV
#pragma weak mpi_allgatherv_ = PMPI_ALLGATHERV
#pragma weak mpi_allgatherv = PMPI_ALLGATHERV
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_ALLGATHERV = pmpi_allgatherv__
#pragma weak mpi_allgatherv__ = pmpi_allgatherv__
#pragma weak mpi_allgatherv_ = pmpi_allgatherv__
#pragma weak mpi_allgatherv = pmpi_allgatherv__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_ALLGATHERV = pmpi_allgatherv_
#pragma weak mpi_allgatherv__ = pmpi_allgatherv_
#pragma weak mpi_allgatherv_ = pmpi_allgatherv_
#pragma weak mpi_allgatherv = pmpi_allgatherv_
#else
#pragma weak MPI_ALLGATHERV = pmpi_allgatherv
#pragma weak mpi_allgatherv__ = pmpi_allgatherv
#pragma weak mpi_allgatherv_ = pmpi_allgatherv
#pragma weak mpi_allgatherv = pmpi_allgatherv
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_ALLGATHERV( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_ALLGATHERV = PMPI_ALLGATHERV
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_allgatherv__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_allgatherv__ = pmpi_allgatherv__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_allgatherv( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_allgatherv = pmpi_allgatherv
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_allgatherv_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_allgatherv_ = pmpi_allgatherv_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_ALLGATHERV  MPI_ALLGATHERV
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_allgatherv__  mpi_allgatherv__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_allgatherv  mpi_allgatherv
#else
#pragma _HP_SECONDARY_DEF pmpi_allgatherv_  mpi_allgatherv_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_ALLGATHERV as PMPI_ALLGATHERV
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_allgatherv__ as pmpi_allgatherv__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_allgatherv as pmpi_allgatherv
#else
#pragma _CRI duplicate mpi_allgatherv_ as pmpi_allgatherv_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_ALLGATHERV( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ALLGATHERV")));
extern FORT_DLL_SPEC void FORT_CALL mpi_allgatherv__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ALLGATHERV")));
extern FORT_DLL_SPEC void FORT_CALL mpi_allgatherv_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ALLGATHERV")));
extern FORT_DLL_SPEC void FORT_CALL mpi_allgatherv( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ALLGATHERV")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ALLGATHERV( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_allgatherv__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_allgatherv__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_allgatherv__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_allgatherv_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_allgatherv__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_allgatherv( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_allgatherv__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ALLGATHERV( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_allgatherv_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_allgatherv__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_allgatherv_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_allgatherv_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_allgatherv_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_allgatherv( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_allgatherv_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_ALLGATHERV( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_allgatherv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_allgatherv__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_allgatherv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_allgatherv_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_allgatherv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_allgatherv( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_allgatherv")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_ALLGATHERV( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_allgatherv__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_allgatherv( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_allgatherv_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_allgatherv__ = MPI_ALLGATHERV
#pragma weak mpi_allgatherv_ = MPI_ALLGATHERV
#pragma weak mpi_allgatherv = MPI_ALLGATHERV
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_ALLGATHERV = mpi_allgatherv__
#pragma weak mpi_allgatherv_ = mpi_allgatherv__
#pragma weak mpi_allgatherv = mpi_allgatherv__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_ALLGATHERV = mpi_allgatherv_
#pragma weak mpi_allgatherv__ = mpi_allgatherv_
#pragma weak mpi_allgatherv = mpi_allgatherv_
#else
#pragma weak MPI_ALLGATHERV = mpi_allgatherv
#pragma weak mpi_allgatherv__ = mpi_allgatherv
#pragma weak mpi_allgatherv_ = mpi_allgatherv
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_ALLGATHERV( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_allgatherv__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_ALLGATHERV")));
extern FORT_DLL_SPEC void FORT_CALL mpi_allgatherv_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_ALLGATHERV")));
extern FORT_DLL_SPEC void FORT_CALL mpi_allgatherv( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_ALLGATHERV")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ALLGATHERV( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_allgatherv__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_allgatherv__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_allgatherv_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_allgatherv__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_allgatherv( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_allgatherv__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ALLGATHERV( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_allgatherv_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_allgatherv__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_allgatherv_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_allgatherv_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_allgatherv( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_allgatherv_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_ALLGATHERV( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_allgatherv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_allgatherv__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_allgatherv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_allgatherv_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_allgatherv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_allgatherv( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_ALLGATHERV( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_allgatherv__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_allgatherv_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_allgatherv( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_allgatherv__ = PMPI_ALLGATHERV
#pragma weak pmpi_allgatherv_ = PMPI_ALLGATHERV
#pragma weak pmpi_allgatherv = PMPI_ALLGATHERV
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_ALLGATHERV = pmpi_allgatherv__
#pragma weak pmpi_allgatherv_ = pmpi_allgatherv__
#pragma weak pmpi_allgatherv = pmpi_allgatherv__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_ALLGATHERV = pmpi_allgatherv_
#pragma weak pmpi_allgatherv__ = pmpi_allgatherv_
#pragma weak pmpi_allgatherv = pmpi_allgatherv_
#else
#pragma weak PMPI_ALLGATHERV = pmpi_allgatherv
#pragma weak pmpi_allgatherv__ = pmpi_allgatherv
#pragma weak pmpi_allgatherv_ = pmpi_allgatherv
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_allgatherv__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ALLGATHERV")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_allgatherv_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ALLGATHERV")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_allgatherv( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ALLGATHERV")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_ALLGATHERV( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_allgatherv__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_allgatherv_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_allgatherv__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_allgatherv( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_allgatherv__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_ALLGATHERV( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_allgatherv_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_allgatherv__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_allgatherv_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_allgatherv( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_allgatherv_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_ALLGATHERV( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_allgatherv")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_allgatherv__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_allgatherv")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_allgatherv_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_allgatherv")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_allgatherv_ PMPI_ALLGATHERV
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_allgatherv_ pmpi_allgatherv__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_allgatherv_ pmpi_allgatherv
#else
#define mpi_allgatherv_ pmpi_allgatherv_
#endif /* Test on name mapping */

/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Allgatherv
#define MPI_Allgatherv PMPI_Allgatherv 

#else

#ifdef F77_NAME_UPPER
#define mpi_allgatherv_ MPI_ALLGATHERV
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_allgatherv_ mpi_allgatherv__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_allgatherv_ mpi_allgatherv
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_allgatherv_ ( void*v1, MPI_Fint *v2, MPI_Fint *v3, void*v4, MPI_Fint *v5, MPI_Fint *v6, MPI_Fint *v7, MPI_Fint *v8, MPI_Fint *ierr ){

#ifndef HAVE_MPI_F_INIT_WORKS_WITH_C
    if (MPIR_F_NeedInit){ mpirinitf_(); MPIR_F_NeedInit = 0; }
#endif
    if (v1 == MPIR_F_MPI_IN_PLACE) v1 = MPI_IN_PLACE;
    *ierr = MPI_Allgatherv( v1, (int)*v2, (MPI_Datatype)(*v3), v4, v5, v6, (MPI_Datatype)(*v7), (MPI_Comm)(*v8) );
}

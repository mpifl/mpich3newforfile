
/* -*- Mode: C; c-basic-offset:4 ; -*- */
/*  
 *  (C) 2001 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 *
 * This file is automatically generated by buildiface 
 * DO NOT EDIT
 */
#include "mpi_fortimpl.h"
/* mpierrs.h and mpierror.h for the error code creation */
#include "mpierrs.h"
#include <stdio.h> 
#include "mpierror.h"

/* -- Begin Profiling Symbol Block for routine MPI_Status_c2f */
#if defined(USE_WEAK_SYMBOLS) && !defined(USE_ONLY_MPI_NAMES) 
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Status_c2f = PMPI_Status_c2f
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Status_c2f MPI_Status_c2f
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Status_c2f as PMPI_Status_c2f
#endif
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Status_c2f
#define MPI_Status_c2f PMPI_Status_c2f
#endif

#undef FUNCNAME
#define FUNCNAME MPI_Status_c2f

int MPI_Status_c2f( const MPI_Status *c_status, MPI_Fint *f_status )
{
    int mpi_errno = MPI_SUCCESS;
    if (c_status == MPI_STATUS_IGNORE ||
	c_status == MPI_STATUSES_IGNORE) {
	/* The call is erroneous (see 4.12.5 in MPI-2) */
        mpi_errno = MPIR_Err_create_code( MPI_SUCCESS, MPIR_ERR_RECOVERABLE,
		 "MPI_Status_c2f", __LINE__, MPI_ERR_OTHER, "**notcstatignore", 0 );
	return MPIR_Err_return_comm( 0, "MPI_Status_c2f",  mpi_errno );
    }
    *(MPI_Status *)f_status = *c_status;

    return MPI_SUCCESS;
}

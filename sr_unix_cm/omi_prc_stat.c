/****************************************************************
 *								*
 *	Copyright 2001 Sanchez Computer Associates, Inc.	*
 *								*
 *	This source code contains the intellectual property	*
 *	of its copyright holder(s), and is made available	*
 *	under a license.  If you do not know the terms of	*
 *	the license, please stop and do not read further.	*
 *								*
 ****************************************************************/

/*
 *  omi_prc_stat.c ---
 *
 *	Process a STATUS request.
 *
 */

#ifndef lint
static char rcsid[] = "$Header: /cvsroot/fis-gtm/gtm/sr_unix_cm/omi_prc_stat.c,v 1.6 2013/10/23 03:49:32 tuskentower Exp $";
#endif

#include "mdef.h"
#include "omi.h"


int
omi_prc_stat(cptr, xend, buff, bend)
    omi_conn	*cptr;
    char	*xend;
    char	*buff;
    char	*bend;
{

/*  Keep a status in the omi_conn structure? */

/*  The response contains only a header */
    return 0;

}

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#ifndef lint
static const char rcsid[] _U_ =
     "@(#) $Header$";
#endif

#include <tcpdump-stdinc.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "interface.h"
#include "addrtoname.h"

void
mysql_print(const u_char *sp, u_int length)
{
    printf("\n    *** mysql ***\n");
}

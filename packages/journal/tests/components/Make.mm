# -*- Makefile -*-
#
# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#
#                               Michael A.G. Aivazis
#                        California Institute of Technology
#                        (C) 1998-2005  All Rights Reserved
#
# <LicenseText>
#
# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#

PROJECT = journal
PACKAGE = tests/components

PROJ_TESTS = 

#------------------------------------------------------------------------

all: tidy

test:
	for test in ${PROJ_TESTS}; do ./$${test}; done

# version
# $Id: Make.mm,v 1.1.1.1 2006-11-27 00:09:39 aivazis Exp $

# End of file

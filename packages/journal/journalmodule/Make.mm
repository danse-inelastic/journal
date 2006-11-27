# -*- Makefile -*-
#
# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#
#                               Michael A.G. Aivazis
#                        California Institute of Technology
#                        (C) 1998-2005  All Rights Reserved
#
# <LicenseText>
#
# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#

PROJECT = journal
PACKAGE = _journalmodule
MODULE = _journal

include std-pythonmodule.def

PROJ_CXX_SRCLIB = -ljournal

PROJ_SRCS = \
    ProxyDevice.cc \
    bindings.cc \
    exceptions.cc \
    facility.cc \
    journal.cc \
    misc.cc \
    state.cc \


# version
# $Id: Make.mm,v 1.1.1.1 2006-11-27 00:09:36 aivazis Exp $

# End of file

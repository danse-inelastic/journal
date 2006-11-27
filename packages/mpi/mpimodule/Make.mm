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

PROJECT = mpi
PACKAGE = _mpimodule
MODULE = _mpi

include std-pythonmodule.def

PROJ_CXX_SRCLIB = -ljournal

PROJ_SRCS = \
    Communicator.cc \
    Group.cc \
    bindings.cc \
    communicators.cc \
    exceptions.cc \
    groups.cc \
    misc.cc \
    ports.cc \
    startup.cc

EXPORT_HEADERS = \
    Communicator.h \
    Group.h

export:: export-headers

# version
# $Id: Make.mm,v 1.1.1.1 2006-11-27 00:09:44 aivazis Exp $

# End of file

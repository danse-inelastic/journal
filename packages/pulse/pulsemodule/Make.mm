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

PROJECT = pulse
PACKAGE = pulsemodule
MODULE = pulse

include std-pythonmodule.def
include local.def

PROJ_CXX_SRCLIB = -ljournal

PROJ_SRCS = \
    bindings.cc \
    driver.cc \
    exceptions.cc \
    generators.cc \
    misc.cc


# version
# $Id: Make.mm,v 1.1.1.1 2006-11-27 00:09:50 aivazis Exp $

# End of file

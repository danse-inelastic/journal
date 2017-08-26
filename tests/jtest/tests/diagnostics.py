#!/usr/bin/env python
# 
#  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
# 
#                               Michael A.G. Aivazis
#                        California Institute of Technology
#                        (C) 1998-2005  All Rights Reserved
# 
#  <LicenseText>
# 
#  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
# 

from __future__ import print_function

def test():
    import journal
    # force the initialization
    journal.journal()

    from jtest import jtest

    print(" ** testing informationals")
    info = journal.info("jtest")
    info.activate()
    info.log("this is an info from python")
    jtest.info("jtest")

    print(" ** testing warnings")
    warning = journal.warning("jtest")
    warning.log("this a warning from python")
    #jtest.warning("jtest")

    print(" ** testing errors")
    error = journal.error("jtest")
    error.log("this an error from python")
    #jtest.error("jtest")

    return

# main

if __name__ == "__main__":
    test()


# version
__id__ = "$Id: diagnostics.py,v 1.1.1.1 2006-11-27 00:10:14 aivazis Exp $"

#  End of file 

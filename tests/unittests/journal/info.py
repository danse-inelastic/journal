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

if __name__ == "__main__":

    import journal
    print(journal.copyright())

    info = journal.info("info")
    print("state of {0!s}({1!s}): {2!s}".format(info.facility, info.severity, info.state))
    info.state = True

    info = journal.info("info")
    print("state of {0!s}({1!s}): {2!s}".format(info.facility, info.severity, info.state))
    info.log("hello")

    print("info facilities:", journal.infoIndex().facilities())


# version
__id__ = "$Id: info.py,v 1.1.1.1 2006-11-27 00:09:40 aivazis Exp $"

#  End of file 

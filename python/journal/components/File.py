#!/usr/bin/env python
#
# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#
#                             Michael A.G. Aivazis
#                      California Institute of Technology
#                      (C) 1998-2005  All Rights Reserved
#
# <LicenseText>
#
# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#

from __future__ import print_function

from .Device import Device


class File(Device):


    class Inventory(Device.Inventory):

        import pyre.inventory
        
        name = pyre.inventory.str("name", default="journal.log")
        name.meta['tip'] = "the name of the file in which messages will be placed"


    def createDevice(self):
        import os

        # absolute path
        filename = os.path.abspath(os.path.expanduser(self.inventory.name))

        # create parent directory if necessary
        dir = os.path.dirname(filename)
        if not os.path.exists(dir): os.makedirs(dir)

        #
        logfile = open(filename, "a", 0)

        import time
        
        print(" ** MARK: opened by {0} on {1}".format(os.getpid(), time.ctime()), file=logfile) 

        from journal.devices.File import File
        return File(logfile)


    def __init__(self):
        Device.__init__(self, "file")
        return


# version
__id__ = "$Id: File.py,v 1.1.1.1 2006-11-27 00:09:35 aivazis Exp $"

# End of file 

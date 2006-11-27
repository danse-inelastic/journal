#!/usr/bin/env python
#
# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#
#                             Michael A.G. Aivazis
#                      California Institute of Technology
#                      (C) 1998-2005  All Rights Reserved
#
# {LicenseText}
#
# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#


from Element import Element


class PortletContent(Element):


    def identify(self, inspector):
        return inspector.onPortletContent(self)


    def __init__(self):
        Element.__init__(self, 'div', cls='portletContent')

        self.content = None

        return


# version
__id__ = "$Id: PortletContent.py,v 1.1.1.1 2006-11-27 00:09:48 aivazis Exp $"

# End of file 

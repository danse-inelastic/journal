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


from GenericActor import GenericActor


class AuthenticatingActor(GenericActor):


    def perform(self, app, routine=None):
        sentry = app.sentry
        ticket = sentry.authenticate()
        if ticket is None:
            return app.retrievePage("authentication-error")
        
        self.routine = routine
        return self.createPage(app)


    def createPage(self, app):
        return app.retrievePage(self.name)


# version
__id__ = "$Id: AuthenticatingActor.py,v 1.1.1.1 2006-11-27 00:09:47 aivazis Exp $"

# End of file 

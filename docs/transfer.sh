#!/usr/bin/env bash

#this script can be altered for whoever is transfering files to the server

ROOT_UID=0   # Root has $UID 0.

if [ "$UID" -eq "$ROOT_UID" ]  # Will the real "root" please stand up?
then
  su jbk #become someone with permission to move the docs
fi
svn up
make html
scp -r _build/html/* jbrkeith@login.cacr.caltech.edu:projects/danse/docs.danse.us/docroot/pyre/sphinx

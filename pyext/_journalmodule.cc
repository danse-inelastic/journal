// -*- C++ -*-
// 
//  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// 
//                               Michael A.G. Aivazis
//                        California Institute of Technology
//                        (C) 1998-2005  All Rights Reserved
// 
//  <LicenseText>
// 
//  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// 

#include <portinfo>

#include <Python.h>

#include "exceptions.h"
#include "bindings.h"


char pyjournal_module__doc__[] = "";

// Initialization function for the module (*must* be called init_journal)
extern "C"
void
init_journal()
{
#if PY_MAJOR_VERSION >= 3
  static struct PyModuleDef moduledef = \
    {
     PyModuleDef_HEAD_INIT,           //
     "_journal",                      //name
     pyjournal_module__doc__,         //doc
     -1,                              //size 
     pyjournal_methods,               //methods 
     NULL,                            //relad
     NULL,                            //traverse
     NULL,                            //clear
     NULL,                            //free
    };
#endif

  PyObject *m;

  // create the module and add the functions
#if PY_MAJOR_VERSION >= 3
  m = PyModule_Create(&moduledef);
#else
  PyObject * m = Py_InitModule4
    ("_journal", pyjournal_methods,
     pyjournal_module__doc__, 0, PYTHON_API_VERSION);
#endif

  // get its dictionary
  PyObject * d = PyModule_GetDict(m);

  // check for errors
  if (PyErr_Occurred()) {
    Py_FatalError("can't initialize module journal");
  }

  // install the module exceptions
  pyjournal_runtimeError = PyErr_NewException("journal.runtime", 0, 0);
  PyDict_SetItemString(d, "RuntimeException", pyjournal_runtimeError);
  return;
}

// End of file

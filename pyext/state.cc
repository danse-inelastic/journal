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
#include "capsulethunk.h"

#include "state.h"

#include "../libjournal/Facility.h"

// getState
char pyjournal_getState__doc__[] = "";
char pyjournal_getState__name__[] = "getState";

PyObject * pyjournal_getState(PyObject *, PyObject * args)
{
    PyObject * py_state;

    int ok = PyArg_ParseTuple(args, "O:getState", &py_state);
    if (!ok) {
        return 0;
    }

    journal::Facility * state 
      = (journal::Facility *) PyCapsule_New(py_state, "journal_state", 0);

    bool value = state->state();

    // return
    return Py_BuildValue("b", value);
}
    
// setState
char pyjournal_setState__doc__[] = "";
char pyjournal_setState__name__[] = "setState";

PyObject * pyjournal_setState(PyObject *, PyObject * args)
{
    int value;
    PyObject * py_state;

    int ok = PyArg_ParseTuple(args, "Oi:setState", &py_state, &value);
    if (!ok) {
        return 0;
    }

    journal::Facility * state 
      = (journal::Facility *) PyCapsule_New(py_state, "journal_state", 0);

    state->state(value);

    // return
    Py_INCREF(Py_None);
    return Py_None;
}
    
// activate
char pyjournal_activate__doc__[] = "";
char pyjournal_activate__name__[] = "activate";


PyObject * pyjournal_activate(PyObject *, PyObject * args)
{
    PyObject * py_state;

    int ok = PyArg_ParseTuple(args, "O:activate", &py_state);
    if (!ok) {
        return 0;
    }

    journal::Facility * state 
      = (journal::Facility *) PyCapsule_New(py_state, "journal_state", 0);

    state->state(true);

    // return
    Py_INCREF(Py_None);
    return Py_None;
}
    
// deactivate
char pyjournal_deactivate__doc__[] = "";
char pyjournal_deactivate__name__[] = "deactivate";


PyObject * pyjournal_deactivate(PyObject *, PyObject * args)
{
    PyObject * py_state;

    int ok = PyArg_ParseTuple(args, "O:deactivate", &py_state);
    if (!ok) {
        return 0;
    }

    journal::Facility * state 
      = (journal::Facility *) PyCapsule_New(py_state, "journal_state", 0);

    state->state(false);

    // return
    Py_INCREF(Py_None);
    return Py_None;
}
    
// flip
char pyjournal_flip__doc__[] = "";
char pyjournal_flip__name__[] = "flip";


PyObject * pyjournal_flip(PyObject *, PyObject * args)
{
    PyObject * py_state;

    int ok = PyArg_ParseTuple(args, "O:flip", &py_state);
    if (!ok) {
        return 0;
    }

    journal::Facility * state 
      = (journal::Facility *) PyCapsule_New(py_state, "journal_state", 0);

    state->state(state->state() ^ true);

    // return
    Py_INCREF(Py_None);
    return Py_None;
}
    
// version
// $Id: state.cc,v 1.1.1.1 2006-11-27 00:09:37 aivazis Exp $

// End of file

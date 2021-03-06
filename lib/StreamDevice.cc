// -*- C++ -*-
//
//--------------------------------------------------------------------------------
//
//                              Michael A.G. Aivazis
//                       California Institute of Technology
//                       (C) 1998-2005  All Rights Reserved
//
// <LicenseText>
//
//--------------------------------------------------------------------------------
//

#include <portinfo>
#include <string>
#include <ostream>

#include "Device.h"
#include "StreamDevice.h"
#include "Renderer.h"
#include "DefaultRenderer.h"


using namespace journal;

// interface
void StreamDevice::record(const Entry & entry) {
    string_t text = _renderer->render(entry);
    _write(text);
    return;
}

// implementation
void StreamDevice::_write(const StreamDevice::string_t text) {
    _stream << text;
    return;
}

// meta-methods
StreamDevice::~StreamDevice() {}

StreamDevice::StreamDevice(journal::StreamDevice::stream_t & stream) :
    Device(),
    _stream(stream),
    _renderer(new DefaultRenderer)
{}

// version
// $Id: StreamDevice.cc,v 1.1.1.1 2006-11-27 00:09:38 aivazis Exp $

// End of file

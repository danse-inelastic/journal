# ------------- Modify these -------------
set ( SRC_FILES 
  debuginfo.cc
  firewall.cc
  Console.cc
  DefaultRenderer.cc
  Device.cc
  Diagnostic.cc
  Entry.cc
  FacilityMap.cc
  Index.cc
  Journal.cc
  Renderer.cc
  SeverityDebug.cc
  SeverityError.cc
  SeverityFirewall.cc
  SeverityInfo.cc
  SeverityWarning.cc
  StreamDevice.cc
  )

set ( INC_FILES
  debug.h
  debuginfo.h
  diagnostics.h
  error.h
  firewall.h
  info.h
  warning.h
  macros.h
  manipulators.h
  manipulators.icc
  manip-explicit.h
  manip-explicit.icc
  manip-templated.h
  manip-templated.icc
  Diagnostic.h
  Diagnostic.icc
  Index.h
  Index.icc
  NullDiagnostic.h
  NullDiagnostic.icc
  SeverityDebug.h
  SeverityDebug.icc
  SeverityError.h
  SeverityError.icc
  SeverityFirewall.h
  SeverityFirewall.icc
  SeverityInfo.h
  SeverityInfo.icc
  SeverityWarning.h
  SeverityWarning.icc
  )

set ( EXPORT_HEADERS ${INC_FILES} )
# ----------------------------------------

# include python headers
include_directories( ${PYTHON_INCLUDE_DIRS} )

# export headers from this project
foreach (header ${EXPORT_HEADERS})
  configure_file(
    "${header}"
    "${CMAKE_CURRENT_BINARY_DIR}/include/${PROJECT_NAME}/${header}"
    )
endforeach (header)

# create empty portinfo (pyre-config thing)
execute_process(
  COMMAND ${CMAKE_COMMAND} -E touch ${CMAKE_BINARY_DIR}/lib/include/portinfo
)

# -I and -L
include_directories(${CMAKE_BINARY_DIR}/lib/include)
# compile shared lib
add_library ( ${LIB_NAME} SHARED ${SRC_FILES} ${INC_FILES} )

# install headers
install (
  DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/include/${PROJECT_NAME}/
  DESTINATION include/${PROJECT_NAME})
# install shared lib
install (TARGETS ${LIB_NAME}
  LIBRARY DESTINATION ${INSTALL_LIB_DIR}
  )

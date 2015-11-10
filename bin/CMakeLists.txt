#
configure_file(journald.py journald.py)
install(PROGRAMS ${CMAKE_CURRENT_BINARY_DIR}/journald.py DESTINATION bin)

# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\sisBancario_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\sisBancario_autogen.dir\\ParseCache.txt"
  "sisBancario_autogen"
  )
endif()

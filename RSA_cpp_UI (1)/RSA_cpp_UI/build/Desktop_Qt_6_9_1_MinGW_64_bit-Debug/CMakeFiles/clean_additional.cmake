# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\RSApro_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\RSApro_autogen.dir\\ParseCache.txt"
  "RSApro_autogen"
  )
endif()

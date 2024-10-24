# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/openglqt_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/openglqt_autogen.dir/ParseCache.txt"
  "openglqt_autogen"
  )
endif()

# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\wikibuilder_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\wikibuilder_autogen.dir\\ParseCache.txt"
  "wikibuilder_autogen"
  )
endif()

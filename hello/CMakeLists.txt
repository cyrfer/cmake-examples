cmake_minimum_required(VERSION 3.10)

# nice tutorial here:
# http://clubjuggler.livejournal.com/138364.html

project("hello world")

set(SRCS src/main.cpp)

# enable with
# cmake –DWITH_USB=ON ...
option(DO_EXTRAS "do more stuff than usual" FALSE)
IF(DO_EXTRAS)
  SET(SRCS ${SRCS} src/extras.cpp)
ENDIF(DO_EXTRAS)

CONFIGURE_FILE(${CMAKE_SOURCE_DIR}/config.h.cmake 
  ${CMAKE_BINARY_DIR}/config.h)
INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR} ${CMAKE_BINARY_DIR})

# -- target --
add_executable(sup ${SRCS})

# https://cmake.org/cmake/help/v3.10/manual/cmake-buildsystem.7.html
# The MODULE library type is dissimilar in that it is generally not linked to – it is not used in the right-hand-side of the target_link_libraries() command. It is a type which is loaded as a plugin using runtime techniques.
# add_library(archive MODULE archive.cpp zip.cpp lzma.cpp)

# -- links to target

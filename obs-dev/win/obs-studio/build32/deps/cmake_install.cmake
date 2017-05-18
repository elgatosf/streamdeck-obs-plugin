# Install script for directory: C:/Users/vic/Documents/obs-dev/obs-studio/deps

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/obs-studio")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Users/vic/Documents/obs-dev/obs-studio/build32/deps/w32-pthreads/cmake_install.cmake")
  include("C:/Users/vic/Documents/obs-dev/obs-studio/build32/deps/glad/cmake_install.cmake")
  include("C:/Users/vic/Documents/obs-dev/obs-studio/build32/deps/ipc-util/cmake_install.cmake")
  include("C:/Users/vic/Documents/obs-dev/obs-studio/build32/deps/libff/cmake_install.cmake")
  include("C:/Users/vic/Documents/obs-dev/obs-studio/build32/deps/file-updater/cmake_install.cmake")
  include("C:/Users/vic/Documents/obs-dev/obs-studio/build32/deps/blake2/cmake_install.cmake")
  include("C:/Users/vic/Documents/obs-dev/obs-studio/build32/deps/jansson/cmake_install.cmake")

endif()


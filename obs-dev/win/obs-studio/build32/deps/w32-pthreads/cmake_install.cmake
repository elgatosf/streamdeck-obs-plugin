# Install script for directory: C:/Users/vic/Documents/obs-dev/obs-studio/deps/w32-pthreads

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

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/32bit" TYPE STATIC_LIBRARY OPTIONAL FILES "C:/Users/vic/Documents/obs-dev/obs-studio/build32/deps/w32-pthreads/Debug/w32-pthreads.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/32bit" TYPE STATIC_LIBRARY OPTIONAL FILES "C:/Users/vic/Documents/obs-dev/obs-studio/build32/deps/w32-pthreads/Release/w32-pthreads.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/32bit" TYPE STATIC_LIBRARY OPTIONAL FILES "C:/Users/vic/Documents/obs-dev/obs-studio/build32/deps/w32-pthreads/MinSizeRel/w32-pthreads.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/32bit" TYPE STATIC_LIBRARY OPTIONAL FILES "C:/Users/vic/Documents/obs-dev/obs-studio/build32/deps/w32-pthreads/RelWithDebInfo/w32-pthreads.lib")
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/32bit" TYPE SHARED_LIBRARY FILES "C:/Users/vic/Documents/obs-dev/obs-studio/build32/deps/w32-pthreads/Debug/w32-pthreads.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/32bit" TYPE SHARED_LIBRARY FILES "C:/Users/vic/Documents/obs-dev/obs-studio/build32/deps/w32-pthreads/Release/w32-pthreads.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/32bit" TYPE SHARED_LIBRARY FILES "C:/Users/vic/Documents/obs-dev/obs-studio/build32/deps/w32-pthreads/MinSizeRel/w32-pthreads.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/32bit" TYPE SHARED_LIBRARY FILES "C:/Users/vic/Documents/obs-dev/obs-studio/build32/deps/w32-pthreads/RelWithDebInfo/w32-pthreads.dll")
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/cmake/w32-pthreads" TYPE FILE FILES
    "C:/Users/vic/Documents/obs-dev/obs-studio/build32/deps/w32-pthreads/CMakeFiles/w32-pthreadsConfig.cmake"
    "C:/Users/vic/Documents/obs-dev/obs-studio/build32/deps/w32-pthreads/w32-pthreadsConfigVersion.cmake"
    )
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/cmake/w32-pthreads/w32-pthreadsTarget.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/cmake/w32-pthreads/w32-pthreadsTarget.cmake"
         "C:/Users/vic/Documents/obs-dev/obs-studio/build32/deps/w32-pthreads/CMakeFiles/Export/cmake/w32-pthreads/w32-pthreadsTarget.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/cmake/w32-pthreads/w32-pthreadsTarget-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/cmake/w32-pthreads/w32-pthreadsTarget.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/cmake/w32-pthreads" TYPE FILE FILES "C:/Users/vic/Documents/obs-dev/obs-studio/build32/deps/w32-pthreads/CMakeFiles/Export/cmake/w32-pthreads/w32-pthreadsTarget.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/cmake/w32-pthreads" TYPE FILE FILES "C:/Users/vic/Documents/obs-dev/obs-studio/build32/deps/w32-pthreads/CMakeFiles/Export/cmake/w32-pthreads/w32-pthreadsTarget-debug.cmake")
  endif()
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/cmake/w32-pthreads" TYPE FILE FILES "C:/Users/vic/Documents/obs-dev/obs-studio/build32/deps/w32-pthreads/CMakeFiles/Export/cmake/w32-pthreads/w32-pthreadsTarget-minsizerel.cmake")
  endif()
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/cmake/w32-pthreads" TYPE FILE FILES "C:/Users/vic/Documents/obs-dev/obs-studio/build32/deps/w32-pthreads/CMakeFiles/Export/cmake/w32-pthreads/w32-pthreadsTarget-relwithdebinfo.cmake")
  endif()
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/cmake/w32-pthreads" TYPE FILE FILES "C:/Users/vic/Documents/obs-dev/obs-studio/build32/deps/w32-pthreads/CMakeFiles/Export/cmake/w32-pthreads/w32-pthreadsTarget-release.cmake")
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg]|[Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/32bit" TYPE DIRECTORY FILES "C:/Users/vic/Documents/obs-dev/obs-studio/build32/deps/w32-pthreads/pdbs/")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg]|[Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
endif()


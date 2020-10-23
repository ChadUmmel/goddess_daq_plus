# Install script for directory: /home/chad/goddess_daq_plus/goddess/source

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/chad/goddess_daq_plus/exec")
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

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/chad/goddess_daq_plus/exec/ORRUBADictionary_rdict.pcm;/home/chad/goddess_daq_plus/exec/GoddessStructDictionary_rdict.pcm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/chad/goddess_daq_plus/exec" TYPE FILE FILES
    "/home/chad/goddess_daq_plus/goddess/source/ORRUBADictionary_rdict.pcm"
    "/home/chad/goddess_daq_plus/goddess/source/GoddessStructDictionary_rdict.pcm"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/home/chad/goddess_daq_plus/exec/libORRUBA.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/chad/goddess_daq_plus/exec/libORRUBA.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/home/chad/goddess_daq_plus/exec/libORRUBA.so"
         RPATH "/home/chad/goddess_daq_plus/exec")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/chad/goddess_daq_plus/exec/libORRUBA.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/chad/goddess_daq_plus/exec" TYPE SHARED_LIBRARY FILES "/home/chad/goddess_daq_plus/goddess/source/libORRUBA.so")
  if(EXISTS "$ENV{DESTDIR}/home/chad/goddess_daq_plus/exec/libORRUBA.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/chad/goddess_daq_plus/exec/libORRUBA.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/home/chad/goddess_daq_plus/exec/libORRUBA.so"
         OLD_RPATH "/home/chad/root-6.14.06/builddir/lib:/home/chad/goddess_daq_plus/goddess/source:/home/chad/goddess_daq_plus/toolbox/source:"
         NEW_RPATH "/home/chad/goddess_daq_plus/exec")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/home/chad/goddess_daq_plus/exec/libORRUBA.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/home/chad/goddess_daq_plus/exec/libGoddessStruct.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/chad/goddess_daq_plus/exec/libGoddessStruct.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/home/chad/goddess_daq_plus/exec/libGoddessStruct.so"
         RPATH "/home/chad/goddess_daq_plus/exec")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/chad/goddess_daq_plus/exec/libGoddessStruct.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/chad/goddess_daq_plus/exec" TYPE SHARED_LIBRARY FILES "/home/chad/goddess_daq_plus/goddess/source/libGoddessStruct.so")
  if(EXISTS "$ENV{DESTDIR}/home/chad/goddess_daq_plus/exec/libGoddessStruct.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/chad/goddess_daq_plus/exec/libGoddessStruct.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/home/chad/goddess_daq_plus/exec/libGoddessStruct.so"
         OLD_RPATH "/home/chad/root-6.14.06/builddir/lib:/home/chad/goddess_daq_plus/toolbox/source:"
         NEW_RPATH "/home/chad/goddess_daq_plus/exec")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/home/chad/goddess_daq_plus/exec/libGoddessStruct.so")
    endif()
  endif()
endif()


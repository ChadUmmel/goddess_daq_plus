# Install script for directory: /home/chad/goddess_daq/source

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/chad/goddess_daq/exec")
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
  if(EXISTS "$ENV{DESTDIR}/home/chad/goddess_daq/exec/GEBSort_nogeb" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/chad/goddess_daq/exec/GEBSort_nogeb")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/home/chad/goddess_daq/exec/GEBSort_nogeb"
         RPATH "/home/chad/goddess_daq/exec")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/chad/goddess_daq/exec/GEBSort_nogeb")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/chad/goddess_daq/exec" TYPE EXECUTABLE FILES "/home/chad/goddess_daq/source/GEBSort_nogeb")
  if(EXISTS "$ENV{DESTDIR}/home/chad/goddess_daq/exec/GEBSort_nogeb" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/chad/goddess_daq/exec/GEBSort_nogeb")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/home/chad/goddess_daq/exec/GEBSort_nogeb"
         OLD_RPATH "/home/chad/root-6.14.06/builddir/lib:/home/chad/goddess_daq/goddess/source:/home/chad/goddess_daq/toolbox/source:"
         NEW_RPATH "/home/chad/goddess_daq/exec")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/home/chad/goddess_daq/exec/GEBSort_nogeb")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/home/chad/goddess_daq/exec/GEBMerge" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/chad/goddess_daq/exec/GEBMerge")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/home/chad/goddess_daq/exec/GEBMerge"
         RPATH "/home/chad/goddess_daq/exec")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/chad/goddess_daq/exec/GEBMerge")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/chad/goddess_daq/exec" TYPE EXECUTABLE FILES "/home/chad/goddess_daq/source/GEBMerge")
  if(EXISTS "$ENV{DESTDIR}/home/chad/goddess_daq/exec/GEBMerge" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/chad/goddess_daq/exec/GEBMerge")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/home/chad/goddess_daq/exec/GEBMerge"
         OLD_RPATH "/home/chad/root-6.14.06/builddir/lib:/home/chad/goddess_daq/toolbox/source:"
         NEW_RPATH "/home/chad/goddess_daq/exec")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/home/chad/goddess_daq/exec/GEBMerge")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/home/chad/goddess_daq/exec/mkMap" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/chad/goddess_daq/exec/mkMap")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/home/chad/goddess_daq/exec/mkMap"
         RPATH "/home/chad/goddess_daq/exec")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/chad/goddess_daq/exec/mkMap")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/chad/goddess_daq/exec" TYPE EXECUTABLE FILES "/home/chad/goddess_daq/source/mkMap")
  if(EXISTS "$ENV{DESTDIR}/home/chad/goddess_daq/exec/mkMap" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/chad/goddess_daq/exec/mkMap")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/home/chad/goddess_daq/exec/mkMap"
         OLD_RPATH "/home/chad/root-6.14.06/builddir/lib:/home/chad/goddess_daq/toolbox/source:"
         NEW_RPATH "/home/chad/goddess_daq/exec")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/home/chad/goddess_daq/exec/mkMap")
    endif()
  endif()
endif()


# Install script for directory: /home/chad/goddess_daq_plus

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
   "/home/chad/goddess_daq_plus/exec/chatfiles")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/chad/goddess_daq_plus/exec" TYPE DIRECTORY FILES "/home/chad/goddess_daq_plus/chatfiles")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/chad/goddess_daq_plus/exec/crmat.LINUX;/home/chad/goddess_daq_plus/exec/AGATA_crmat.dat;/home/chad/goddess_daq_plus/exec/dgscal.dat;/home/chad/goddess_daq_plus/exec/map.dat;/home/chad/goddess_daq_plus/exec/.rootlogon.C;/home/chad/goddess_daq_plus/exec/mass_db.dat;/home/chad/goddess_daq_plus/exec/goddess.reacinfo")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/chad/goddess_daq_plus/exec" TYPE FILE FILES
    "/home/chad/goddess_daq_plus/share/crmat.LINUX"
    "/home/chad/goddess_daq_plus/share/AGATA_crmat.dat"
    "/home/chad/goddess_daq_plus/share/dgscal.dat"
    "/home/chad/goddess_daq_plus/share/map.dat"
    "/home/chad/goddess_daq_plus/share/.rootlogon.C"
    "/home/chad/goddess_daq_plus/share/mass_db.dat"
    "/home/chad/goddess_daq_plus/share/goddess.reacinfo"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/chad/goddess_daq_plus/exec/goddess.config;/home/chad/goddess_daq_plus/exec/goddess_134Xe_alex_r136.config;/home/chad/goddess_daq_plus/exec/goddess_134Xe_nothresholds.config;/home/chad/goddess_daq_plus/exec/goddess_134Xe_runs41_to_146.config;/home/chad/goddess_daq_plus/exec/goddess_95Mo_runs200_to_352.config")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/chad/goddess_daq_plus/exec" TYPE FILE FILES
    "/home/chad/goddess_daq_plus/share/goddess.config"
    "/home/chad/goddess_daq_plus/share/goddess_134Xe_alex_r136.config"
    "/home/chad/goddess_daq_plus/share/goddess_134Xe_nothresholds.config"
    "/home/chad/goddess_daq_plus/share/goddess_134Xe_runs41_to_146.config"
    "/home/chad/goddess_daq_plus/share/goddess_95Mo_runs200_to_352.config"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/chad/goddess_daq_plus/exec/goddess.geom;/home/chad/goddess_daq_plus/exec/goddess_test.geom")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/chad/goddess_daq_plus/exec" TYPE FILE FILES
    "/home/chad/goddess_daq_plus/share/goddess.geom"
    "/home/chad/goddess_daq_plus/share/goddess_test.geom"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/chad/goddess_daq_plus/exec/EnShift_vs_Pos_2_May_2017.root;/home/chad/goddess_daq_plus/exec/SX3_En_vs_Pos_graphs.root")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/chad/goddess_daq_plus/exec" TYPE FILE FILES
    "/home/chad/goddess_daq_plus/share/EnShift_vs_Pos_2_May_2017.root"
    "/home/chad/goddess_daq_plus/share/SX3_En_vs_Pos_graphs.root"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/chad/goddess_daq_plus/exec/ranges_tables/134Xe_in_C2D4_1063mg_cm3.txt;/home/chad/goddess_daq_plus/exec/ranges_tables/95Mo_in_C2D4_1063mg_cm3.txt;/home/chad/goddess_daq_plus/exec/ranges_tables/README.txt;/home/chad/goddess_daq_plus/exec/ranges_tables/p_in_C2D4_1036mg_cm3.txt")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/chad/goddess_daq_plus/exec/ranges_tables" TYPE FILE FILES
    "/home/chad/goddess_daq_plus/share/ranges_tables/134Xe_in_C2D4_1063mg_cm3.txt"
    "/home/chad/goddess_daq_plus/share/ranges_tables/95Mo_in_C2D4_1063mg_cm3.txt"
    "/home/chad/goddess_daq_plus/share/ranges_tables/README.txt"
    "/home/chad/goddess_daq_plus/share/ranges_tables/p_in_C2D4_1036mg_cm3.txt"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/chad/goddess_daq_plus/hribf/cmake_install.cmake")
  include("/home/chad/goddess_daq_plus/toolbox/source/cmake_install.cmake")
  include("/home/chad/goddess_daq_plus/goddess/source/cmake_install.cmake")
  include("/home/chad/goddess_daq_plus/source/cmake_install.cmake")
  include("/home/chad/goddess_daq_plus/scripts/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/chad/goddess_daq_plus/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")

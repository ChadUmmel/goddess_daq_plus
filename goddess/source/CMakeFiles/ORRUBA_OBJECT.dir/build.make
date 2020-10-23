# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/chad/goddess_daq_plus

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/chad/goddess_daq_plus

# Include any dependencies generated for this target.
include goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/depend.make

# Include the progress variables for this target.
include goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/progress.make

# Include the compile flags for this target's objects.
include goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/flags.make

goddess/source/ORRUBADictionary.cxx: goddess/include/ORRUBA.h
goddess/source/ORRUBADictionary.cxx: goddess/include/Detector.h
goddess/source/ORRUBADictionary.cxx: goddess/include/siDet.h
goddess/source/ORRUBADictionary.cxx: goddess/include/orrubaDet.h
goddess/source/ORRUBADictionary.cxx: goddess/include/superX3.h
goddess/source/ORRUBADictionary.cxx: goddess/include/BB10.h
goddess/source/ORRUBADictionary.cxx: goddess/include/QQQ5.h
goddess/source/ORRUBADictionary.cxx: goddess/include/IonChamber.h
goddess/source/ORRUBADictionary.cxx: goddess/include/LiquidScint.h
goddess/source/ORRUBADictionary.cxx: goddess/include/TDC.h
goddess/source/ORRUBADictionary.cxx: goddess/include/SolidVector.h
goddess/source/ORRUBADictionary.cxx: goddess/include/GoddessConfig.h
goddess/source/ORRUBADictionary.cxx: goddess/include/ORRUBALinkDef.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/chad/goddess_daq_plus/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ORRUBADictionary.cxx"
	cd /home/chad/goddess_daq_plus/goddess/source && /home/chad/root-6.14.06/builddir/bin/rootcint -cint -f ORRUBADictionary.cxx -c -I/home/chad/root-6.14.06/builddir/include -I/home/chad/goddess_daq_plus/include -I/home/chad/goddess_daq_plus/toolbox/include -I/home/chad/goddess_daq_plus/goddess/include -I/home/chad/goddess_daq_plus/scripts/include /home/chad/goddess_daq_plus/goddess/include/ORRUBA.h /home/chad/goddess_daq_plus/goddess/include/Detector.h /home/chad/goddess_daq_plus/goddess/include/siDet.h /home/chad/goddess_daq_plus/goddess/include/orrubaDet.h /home/chad/goddess_daq_plus/goddess/include/superX3.h /home/chad/goddess_daq_plus/goddess/include/BB10.h /home/chad/goddess_daq_plus/goddess/include/QQQ5.h /home/chad/goddess_daq_plus/goddess/include/IonChamber.h /home/chad/goddess_daq_plus/goddess/include/LiquidScint.h /home/chad/goddess_daq_plus/goddess/include/TDC.h /home/chad/goddess_daq_plus/goddess/include/SolidVector.h /home/chad/goddess_daq_plus/goddess/include/GoddessConfig.h /home/chad/goddess_daq_plus/goddess/include/ORRUBALinkDef.h

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/SolidVector.cxx.o: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/flags.make
goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/SolidVector.cxx.o: goddess/source/SolidVector.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chad/goddess_daq_plus/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/SolidVector.cxx.o"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ORRUBA_OBJECT.dir/SolidVector.cxx.o -c /home/chad/goddess_daq_plus/goddess/source/SolidVector.cxx

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/SolidVector.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ORRUBA_OBJECT.dir/SolidVector.cxx.i"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chad/goddess_daq_plus/goddess/source/SolidVector.cxx > CMakeFiles/ORRUBA_OBJECT.dir/SolidVector.cxx.i

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/SolidVector.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ORRUBA_OBJECT.dir/SolidVector.cxx.s"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chad/goddess_daq_plus/goddess/source/SolidVector.cxx -o CMakeFiles/ORRUBA_OBJECT.dir/SolidVector.cxx.s

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/SolidVector.cxx.o.requires:

.PHONY : goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/SolidVector.cxx.o.requires

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/SolidVector.cxx.o.provides: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/SolidVector.cxx.o.requires
	$(MAKE) -f goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/build.make goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/SolidVector.cxx.o.provides.build
.PHONY : goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/SolidVector.cxx.o.provides

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/SolidVector.cxx.o.provides.build: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/SolidVector.cxx.o


goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/Detector.cxx.o: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/flags.make
goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/Detector.cxx.o: goddess/source/Detector.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chad/goddess_daq_plus/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/Detector.cxx.o"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ORRUBA_OBJECT.dir/Detector.cxx.o -c /home/chad/goddess_daq_plus/goddess/source/Detector.cxx

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/Detector.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ORRUBA_OBJECT.dir/Detector.cxx.i"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chad/goddess_daq_plus/goddess/source/Detector.cxx > CMakeFiles/ORRUBA_OBJECT.dir/Detector.cxx.i

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/Detector.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ORRUBA_OBJECT.dir/Detector.cxx.s"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chad/goddess_daq_plus/goddess/source/Detector.cxx -o CMakeFiles/ORRUBA_OBJECT.dir/Detector.cxx.s

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/Detector.cxx.o.requires:

.PHONY : goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/Detector.cxx.o.requires

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/Detector.cxx.o.provides: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/Detector.cxx.o.requires
	$(MAKE) -f goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/build.make goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/Detector.cxx.o.provides.build
.PHONY : goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/Detector.cxx.o.provides

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/Detector.cxx.o.provides.build: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/Detector.cxx.o


goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/siDet.cxx.o: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/flags.make
goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/siDet.cxx.o: goddess/source/siDet.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chad/goddess_daq_plus/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/siDet.cxx.o"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ORRUBA_OBJECT.dir/siDet.cxx.o -c /home/chad/goddess_daq_plus/goddess/source/siDet.cxx

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/siDet.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ORRUBA_OBJECT.dir/siDet.cxx.i"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chad/goddess_daq_plus/goddess/source/siDet.cxx > CMakeFiles/ORRUBA_OBJECT.dir/siDet.cxx.i

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/siDet.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ORRUBA_OBJECT.dir/siDet.cxx.s"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chad/goddess_daq_plus/goddess/source/siDet.cxx -o CMakeFiles/ORRUBA_OBJECT.dir/siDet.cxx.s

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/siDet.cxx.o.requires:

.PHONY : goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/siDet.cxx.o.requires

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/siDet.cxx.o.provides: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/siDet.cxx.o.requires
	$(MAKE) -f goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/build.make goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/siDet.cxx.o.provides.build
.PHONY : goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/siDet.cxx.o.provides

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/siDet.cxx.o.provides.build: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/siDet.cxx.o


goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/orrubaDet.cxx.o: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/flags.make
goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/orrubaDet.cxx.o: goddess/source/orrubaDet.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chad/goddess_daq_plus/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/orrubaDet.cxx.o"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ORRUBA_OBJECT.dir/orrubaDet.cxx.o -c /home/chad/goddess_daq_plus/goddess/source/orrubaDet.cxx

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/orrubaDet.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ORRUBA_OBJECT.dir/orrubaDet.cxx.i"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chad/goddess_daq_plus/goddess/source/orrubaDet.cxx > CMakeFiles/ORRUBA_OBJECT.dir/orrubaDet.cxx.i

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/orrubaDet.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ORRUBA_OBJECT.dir/orrubaDet.cxx.s"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chad/goddess_daq_plus/goddess/source/orrubaDet.cxx -o CMakeFiles/ORRUBA_OBJECT.dir/orrubaDet.cxx.s

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/orrubaDet.cxx.o.requires:

.PHONY : goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/orrubaDet.cxx.o.requires

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/orrubaDet.cxx.o.provides: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/orrubaDet.cxx.o.requires
	$(MAKE) -f goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/build.make goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/orrubaDet.cxx.o.provides.build
.PHONY : goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/orrubaDet.cxx.o.provides

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/orrubaDet.cxx.o.provides.build: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/orrubaDet.cxx.o


goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/ORRUBA.cxx.o: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/flags.make
goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/ORRUBA.cxx.o: goddess/source/ORRUBA.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chad/goddess_daq_plus/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/ORRUBA.cxx.o"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ORRUBA_OBJECT.dir/ORRUBA.cxx.o -c /home/chad/goddess_daq_plus/goddess/source/ORRUBA.cxx

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/ORRUBA.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ORRUBA_OBJECT.dir/ORRUBA.cxx.i"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chad/goddess_daq_plus/goddess/source/ORRUBA.cxx > CMakeFiles/ORRUBA_OBJECT.dir/ORRUBA.cxx.i

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/ORRUBA.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ORRUBA_OBJECT.dir/ORRUBA.cxx.s"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chad/goddess_daq_plus/goddess/source/ORRUBA.cxx -o CMakeFiles/ORRUBA_OBJECT.dir/ORRUBA.cxx.s

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/ORRUBA.cxx.o.requires:

.PHONY : goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/ORRUBA.cxx.o.requires

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/ORRUBA.cxx.o.provides: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/ORRUBA.cxx.o.requires
	$(MAKE) -f goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/build.make goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/ORRUBA.cxx.o.provides.build
.PHONY : goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/ORRUBA.cxx.o.provides

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/ORRUBA.cxx.o.provides.build: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/ORRUBA.cxx.o


goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/superX3.cxx.o: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/flags.make
goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/superX3.cxx.o: goddess/source/superX3.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chad/goddess_daq_plus/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/superX3.cxx.o"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ORRUBA_OBJECT.dir/superX3.cxx.o -c /home/chad/goddess_daq_plus/goddess/source/superX3.cxx

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/superX3.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ORRUBA_OBJECT.dir/superX3.cxx.i"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chad/goddess_daq_plus/goddess/source/superX3.cxx > CMakeFiles/ORRUBA_OBJECT.dir/superX3.cxx.i

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/superX3.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ORRUBA_OBJECT.dir/superX3.cxx.s"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chad/goddess_daq_plus/goddess/source/superX3.cxx -o CMakeFiles/ORRUBA_OBJECT.dir/superX3.cxx.s

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/superX3.cxx.o.requires:

.PHONY : goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/superX3.cxx.o.requires

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/superX3.cxx.o.provides: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/superX3.cxx.o.requires
	$(MAKE) -f goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/build.make goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/superX3.cxx.o.provides.build
.PHONY : goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/superX3.cxx.o.provides

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/superX3.cxx.o.provides.build: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/superX3.cxx.o


goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/BB10.cxx.o: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/flags.make
goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/BB10.cxx.o: goddess/source/BB10.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chad/goddess_daq_plus/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/BB10.cxx.o"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ORRUBA_OBJECT.dir/BB10.cxx.o -c /home/chad/goddess_daq_plus/goddess/source/BB10.cxx

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/BB10.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ORRUBA_OBJECT.dir/BB10.cxx.i"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chad/goddess_daq_plus/goddess/source/BB10.cxx > CMakeFiles/ORRUBA_OBJECT.dir/BB10.cxx.i

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/BB10.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ORRUBA_OBJECT.dir/BB10.cxx.s"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chad/goddess_daq_plus/goddess/source/BB10.cxx -o CMakeFiles/ORRUBA_OBJECT.dir/BB10.cxx.s

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/BB10.cxx.o.requires:

.PHONY : goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/BB10.cxx.o.requires

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/BB10.cxx.o.provides: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/BB10.cxx.o.requires
	$(MAKE) -f goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/build.make goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/BB10.cxx.o.provides.build
.PHONY : goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/BB10.cxx.o.provides

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/BB10.cxx.o.provides.build: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/BB10.cxx.o


goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/QQQ5.cxx.o: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/flags.make
goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/QQQ5.cxx.o: goddess/source/QQQ5.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chad/goddess_daq_plus/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/QQQ5.cxx.o"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ORRUBA_OBJECT.dir/QQQ5.cxx.o -c /home/chad/goddess_daq_plus/goddess/source/QQQ5.cxx

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/QQQ5.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ORRUBA_OBJECT.dir/QQQ5.cxx.i"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chad/goddess_daq_plus/goddess/source/QQQ5.cxx > CMakeFiles/ORRUBA_OBJECT.dir/QQQ5.cxx.i

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/QQQ5.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ORRUBA_OBJECT.dir/QQQ5.cxx.s"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chad/goddess_daq_plus/goddess/source/QQQ5.cxx -o CMakeFiles/ORRUBA_OBJECT.dir/QQQ5.cxx.s

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/QQQ5.cxx.o.requires:

.PHONY : goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/QQQ5.cxx.o.requires

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/QQQ5.cxx.o.provides: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/QQQ5.cxx.o.requires
	$(MAKE) -f goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/build.make goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/QQQ5.cxx.o.provides.build
.PHONY : goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/QQQ5.cxx.o.provides

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/QQQ5.cxx.o.provides.build: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/QQQ5.cxx.o


goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/GoddessConfig.cxx.o: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/flags.make
goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/GoddessConfig.cxx.o: goddess/source/GoddessConfig.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chad/goddess_daq_plus/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/GoddessConfig.cxx.o"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ORRUBA_OBJECT.dir/GoddessConfig.cxx.o -c /home/chad/goddess_daq_plus/goddess/source/GoddessConfig.cxx

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/GoddessConfig.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ORRUBA_OBJECT.dir/GoddessConfig.cxx.i"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chad/goddess_daq_plus/goddess/source/GoddessConfig.cxx > CMakeFiles/ORRUBA_OBJECT.dir/GoddessConfig.cxx.i

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/GoddessConfig.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ORRUBA_OBJECT.dir/GoddessConfig.cxx.s"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chad/goddess_daq_plus/goddess/source/GoddessConfig.cxx -o CMakeFiles/ORRUBA_OBJECT.dir/GoddessConfig.cxx.s

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/GoddessConfig.cxx.o.requires:

.PHONY : goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/GoddessConfig.cxx.o.requires

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/GoddessConfig.cxx.o.provides: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/GoddessConfig.cxx.o.requires
	$(MAKE) -f goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/build.make goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/GoddessConfig.cxx.o.provides.build
.PHONY : goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/GoddessConfig.cxx.o.provides

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/GoddessConfig.cxx.o.provides.build: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/GoddessConfig.cxx.o


goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/IonChamber.cxx.o: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/flags.make
goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/IonChamber.cxx.o: goddess/source/IonChamber.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chad/goddess_daq_plus/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/IonChamber.cxx.o"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ORRUBA_OBJECT.dir/IonChamber.cxx.o -c /home/chad/goddess_daq_plus/goddess/source/IonChamber.cxx

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/IonChamber.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ORRUBA_OBJECT.dir/IonChamber.cxx.i"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chad/goddess_daq_plus/goddess/source/IonChamber.cxx > CMakeFiles/ORRUBA_OBJECT.dir/IonChamber.cxx.i

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/IonChamber.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ORRUBA_OBJECT.dir/IonChamber.cxx.s"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chad/goddess_daq_plus/goddess/source/IonChamber.cxx -o CMakeFiles/ORRUBA_OBJECT.dir/IonChamber.cxx.s

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/IonChamber.cxx.o.requires:

.PHONY : goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/IonChamber.cxx.o.requires

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/IonChamber.cxx.o.provides: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/IonChamber.cxx.o.requires
	$(MAKE) -f goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/build.make goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/IonChamber.cxx.o.provides.build
.PHONY : goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/IonChamber.cxx.o.provides

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/IonChamber.cxx.o.provides.build: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/IonChamber.cxx.o


goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/LiquidScint.cxx.o: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/flags.make
goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/LiquidScint.cxx.o: goddess/source/LiquidScint.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chad/goddess_daq_plus/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/LiquidScint.cxx.o"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ORRUBA_OBJECT.dir/LiquidScint.cxx.o -c /home/chad/goddess_daq_plus/goddess/source/LiquidScint.cxx

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/LiquidScint.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ORRUBA_OBJECT.dir/LiquidScint.cxx.i"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chad/goddess_daq_plus/goddess/source/LiquidScint.cxx > CMakeFiles/ORRUBA_OBJECT.dir/LiquidScint.cxx.i

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/LiquidScint.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ORRUBA_OBJECT.dir/LiquidScint.cxx.s"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chad/goddess_daq_plus/goddess/source/LiquidScint.cxx -o CMakeFiles/ORRUBA_OBJECT.dir/LiquidScint.cxx.s

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/LiquidScint.cxx.o.requires:

.PHONY : goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/LiquidScint.cxx.o.requires

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/LiquidScint.cxx.o.provides: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/LiquidScint.cxx.o.requires
	$(MAKE) -f goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/build.make goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/LiquidScint.cxx.o.provides.build
.PHONY : goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/LiquidScint.cxx.o.provides

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/LiquidScint.cxx.o.provides.build: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/LiquidScint.cxx.o


goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/TDC.cxx.o: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/flags.make
goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/TDC.cxx.o: goddess/source/TDC.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chad/goddess_daq_plus/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/TDC.cxx.o"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ORRUBA_OBJECT.dir/TDC.cxx.o -c /home/chad/goddess_daq_plus/goddess/source/TDC.cxx

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/TDC.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ORRUBA_OBJECT.dir/TDC.cxx.i"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chad/goddess_daq_plus/goddess/source/TDC.cxx > CMakeFiles/ORRUBA_OBJECT.dir/TDC.cxx.i

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/TDC.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ORRUBA_OBJECT.dir/TDC.cxx.s"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chad/goddess_daq_plus/goddess/source/TDC.cxx -o CMakeFiles/ORRUBA_OBJECT.dir/TDC.cxx.s

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/TDC.cxx.o.requires:

.PHONY : goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/TDC.cxx.o.requires

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/TDC.cxx.o.provides: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/TDC.cxx.o.requires
	$(MAKE) -f goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/build.make goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/TDC.cxx.o.provides.build
.PHONY : goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/TDC.cxx.o.provides

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/TDC.cxx.o.provides.build: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/TDC.cxx.o


goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/ORRUBADictionary.cxx.o: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/flags.make
goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/ORRUBADictionary.cxx.o: goddess/source/ORRUBADictionary.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chad/goddess_daq_plus/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/ORRUBADictionary.cxx.o"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ORRUBA_OBJECT.dir/ORRUBADictionary.cxx.o -c /home/chad/goddess_daq_plus/goddess/source/ORRUBADictionary.cxx

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/ORRUBADictionary.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ORRUBA_OBJECT.dir/ORRUBADictionary.cxx.i"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chad/goddess_daq_plus/goddess/source/ORRUBADictionary.cxx > CMakeFiles/ORRUBA_OBJECT.dir/ORRUBADictionary.cxx.i

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/ORRUBADictionary.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ORRUBA_OBJECT.dir/ORRUBADictionary.cxx.s"
	cd /home/chad/goddess_daq_plus/goddess/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chad/goddess_daq_plus/goddess/source/ORRUBADictionary.cxx -o CMakeFiles/ORRUBA_OBJECT.dir/ORRUBADictionary.cxx.s

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/ORRUBADictionary.cxx.o.requires:

.PHONY : goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/ORRUBADictionary.cxx.o.requires

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/ORRUBADictionary.cxx.o.provides: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/ORRUBADictionary.cxx.o.requires
	$(MAKE) -f goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/build.make goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/ORRUBADictionary.cxx.o.provides.build
.PHONY : goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/ORRUBADictionary.cxx.o.provides

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/ORRUBADictionary.cxx.o.provides.build: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/ORRUBADictionary.cxx.o


ORRUBA_OBJECT: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/SolidVector.cxx.o
ORRUBA_OBJECT: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/Detector.cxx.o
ORRUBA_OBJECT: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/siDet.cxx.o
ORRUBA_OBJECT: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/orrubaDet.cxx.o
ORRUBA_OBJECT: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/ORRUBA.cxx.o
ORRUBA_OBJECT: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/superX3.cxx.o
ORRUBA_OBJECT: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/BB10.cxx.o
ORRUBA_OBJECT: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/QQQ5.cxx.o
ORRUBA_OBJECT: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/GoddessConfig.cxx.o
ORRUBA_OBJECT: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/IonChamber.cxx.o
ORRUBA_OBJECT: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/LiquidScint.cxx.o
ORRUBA_OBJECT: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/TDC.cxx.o
ORRUBA_OBJECT: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/ORRUBADictionary.cxx.o
ORRUBA_OBJECT: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/build.make

.PHONY : ORRUBA_OBJECT

# Rule to build all files generated by this target.
goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/build: ORRUBA_OBJECT

.PHONY : goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/build

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/requires: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/SolidVector.cxx.o.requires
goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/requires: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/Detector.cxx.o.requires
goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/requires: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/siDet.cxx.o.requires
goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/requires: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/orrubaDet.cxx.o.requires
goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/requires: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/ORRUBA.cxx.o.requires
goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/requires: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/superX3.cxx.o.requires
goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/requires: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/BB10.cxx.o.requires
goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/requires: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/QQQ5.cxx.o.requires
goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/requires: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/GoddessConfig.cxx.o.requires
goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/requires: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/IonChamber.cxx.o.requires
goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/requires: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/LiquidScint.cxx.o.requires
goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/requires: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/TDC.cxx.o.requires
goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/requires: goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/ORRUBADictionary.cxx.o.requires

.PHONY : goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/requires

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/clean:
	cd /home/chad/goddess_daq_plus/goddess/source && $(CMAKE_COMMAND) -P CMakeFiles/ORRUBA_OBJECT.dir/cmake_clean.cmake
.PHONY : goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/clean

goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/depend: goddess/source/ORRUBADictionary.cxx
	cd /home/chad/goddess_daq_plus && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chad/goddess_daq_plus /home/chad/goddess_daq_plus/goddess/source /home/chad/goddess_daq_plus /home/chad/goddess_daq_plus/goddess/source /home/chad/goddess_daq_plus/goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/depend


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
include source/CMakeFiles/GEBMerge.dir/depend.make

# Include the progress variables for this target.
include source/CMakeFiles/GEBMerge.dir/progress.make

# Include the compile flags for this target's objects.
include source/CMakeFiles/GEBMerge.dir/flags.make

source/CMakeFiles/GEBMerge.dir/GEBMerge.cxx.o: source/CMakeFiles/GEBMerge.dir/flags.make
source/CMakeFiles/GEBMerge.dir/GEBMerge.cxx.o: source/GEBMerge.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chad/goddess_daq_plus/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object source/CMakeFiles/GEBMerge.dir/GEBMerge.cxx.o"
	cd /home/chad/goddess_daq_plus/source && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GEBMerge.dir/GEBMerge.cxx.o -c /home/chad/goddess_daq_plus/source/GEBMerge.cxx

source/CMakeFiles/GEBMerge.dir/GEBMerge.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GEBMerge.dir/GEBMerge.cxx.i"
	cd /home/chad/goddess_daq_plus/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chad/goddess_daq_plus/source/GEBMerge.cxx > CMakeFiles/GEBMerge.dir/GEBMerge.cxx.i

source/CMakeFiles/GEBMerge.dir/GEBMerge.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GEBMerge.dir/GEBMerge.cxx.s"
	cd /home/chad/goddess_daq_plus/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chad/goddess_daq_plus/source/GEBMerge.cxx -o CMakeFiles/GEBMerge.dir/GEBMerge.cxx.s

source/CMakeFiles/GEBMerge.dir/GEBMerge.cxx.o.requires:

.PHONY : source/CMakeFiles/GEBMerge.dir/GEBMerge.cxx.o.requires

source/CMakeFiles/GEBMerge.dir/GEBMerge.cxx.o.provides: source/CMakeFiles/GEBMerge.dir/GEBMerge.cxx.o.requires
	$(MAKE) -f source/CMakeFiles/GEBMerge.dir/build.make source/CMakeFiles/GEBMerge.dir/GEBMerge.cxx.o.provides.build
.PHONY : source/CMakeFiles/GEBMerge.dir/GEBMerge.cxx.o.provides

source/CMakeFiles/GEBMerge.dir/GEBMerge.cxx.o.provides.build: source/CMakeFiles/GEBMerge.dir/GEBMerge.cxx.o


source/CMakeFiles/GEBMerge.dir/MergeManager.cxx.o: source/CMakeFiles/GEBMerge.dir/flags.make
source/CMakeFiles/GEBMerge.dir/MergeManager.cxx.o: source/MergeManager.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chad/goddess_daq_plus/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object source/CMakeFiles/GEBMerge.dir/MergeManager.cxx.o"
	cd /home/chad/goddess_daq_plus/source && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GEBMerge.dir/MergeManager.cxx.o -c /home/chad/goddess_daq_plus/source/MergeManager.cxx

source/CMakeFiles/GEBMerge.dir/MergeManager.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GEBMerge.dir/MergeManager.cxx.i"
	cd /home/chad/goddess_daq_plus/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chad/goddess_daq_plus/source/MergeManager.cxx > CMakeFiles/GEBMerge.dir/MergeManager.cxx.i

source/CMakeFiles/GEBMerge.dir/MergeManager.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GEBMerge.dir/MergeManager.cxx.s"
	cd /home/chad/goddess_daq_plus/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chad/goddess_daq_plus/source/MergeManager.cxx -o CMakeFiles/GEBMerge.dir/MergeManager.cxx.s

source/CMakeFiles/GEBMerge.dir/MergeManager.cxx.o.requires:

.PHONY : source/CMakeFiles/GEBMerge.dir/MergeManager.cxx.o.requires

source/CMakeFiles/GEBMerge.dir/MergeManager.cxx.o.provides: source/CMakeFiles/GEBMerge.dir/MergeManager.cxx.o.requires
	$(MAKE) -f source/CMakeFiles/GEBMerge.dir/build.make source/CMakeFiles/GEBMerge.dir/MergeManager.cxx.o.provides.build
.PHONY : source/CMakeFiles/GEBMerge.dir/MergeManager.cxx.o.provides

source/CMakeFiles/GEBMerge.dir/MergeManager.cxx.o.provides.build: source/CMakeFiles/GEBMerge.dir/MergeManager.cxx.o


# Object files for target GEBMerge
GEBMerge_OBJECTS = \
"CMakeFiles/GEBMerge.dir/GEBMerge.cxx.o" \
"CMakeFiles/GEBMerge.dir/MergeManager.cxx.o"

# External object files for target GEBMerge
GEBMerge_EXTERNAL_OBJECTS =

source/GEBMerge: source/CMakeFiles/GEBMerge.dir/GEBMerge.cxx.o
source/GEBMerge: source/CMakeFiles/GEBMerge.dir/MergeManager.cxx.o
source/GEBMerge: source/CMakeFiles/GEBMerge.dir/build.make
source/GEBMerge: /usr/lib/x86_64-linux-gnu/libz.so
source/GEBMerge: toolbox/source/libGoddessToolboxLib.so
source/GEBMerge: /home/chad/root-6.14.06/builddir/lib/libCore.so
source/GEBMerge: /home/chad/root-6.14.06/builddir/lib/libRIO.so
source/GEBMerge: /home/chad/root-6.14.06/builddir/lib/libNet.so
source/GEBMerge: /home/chad/root-6.14.06/builddir/lib/libHist.so
source/GEBMerge: /home/chad/root-6.14.06/builddir/lib/libGraf.so
source/GEBMerge: /home/chad/root-6.14.06/builddir/lib/libGraf3d.so
source/GEBMerge: /home/chad/root-6.14.06/builddir/lib/libGpad.so
source/GEBMerge: /home/chad/root-6.14.06/builddir/lib/libTree.so
source/GEBMerge: /home/chad/root-6.14.06/builddir/lib/libRint.so
source/GEBMerge: /home/chad/root-6.14.06/builddir/lib/libPostscript.so
source/GEBMerge: /home/chad/root-6.14.06/builddir/lib/libMatrix.so
source/GEBMerge: /home/chad/root-6.14.06/builddir/lib/libPhysics.so
source/GEBMerge: /home/chad/root-6.14.06/builddir/lib/libMathCore.so
source/GEBMerge: /home/chad/root-6.14.06/builddir/lib/libThread.so
source/GEBMerge: /home/chad/root-6.14.06/builddir/lib/libGui.so
source/GEBMerge: source/CMakeFiles/GEBMerge.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/chad/goddess_daq_plus/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable GEBMerge"
	cd /home/chad/goddess_daq_plus/source && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GEBMerge.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/CMakeFiles/GEBMerge.dir/build: source/GEBMerge

.PHONY : source/CMakeFiles/GEBMerge.dir/build

source/CMakeFiles/GEBMerge.dir/requires: source/CMakeFiles/GEBMerge.dir/GEBMerge.cxx.o.requires
source/CMakeFiles/GEBMerge.dir/requires: source/CMakeFiles/GEBMerge.dir/MergeManager.cxx.o.requires

.PHONY : source/CMakeFiles/GEBMerge.dir/requires

source/CMakeFiles/GEBMerge.dir/clean:
	cd /home/chad/goddess_daq_plus/source && $(CMAKE_COMMAND) -P CMakeFiles/GEBMerge.dir/cmake_clean.cmake
.PHONY : source/CMakeFiles/GEBMerge.dir/clean

source/CMakeFiles/GEBMerge.dir/depend:
	cd /home/chad/goddess_daq_plus && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chad/goddess_daq_plus /home/chad/goddess_daq_plus/source /home/chad/goddess_daq_plus /home/chad/goddess_daq_plus/source /home/chad/goddess_daq_plus/source/CMakeFiles/GEBMerge.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : source/CMakeFiles/GEBMerge.dir/depend


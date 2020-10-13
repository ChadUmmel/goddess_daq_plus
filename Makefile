# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_SOURCE_DIR = /home/chad/goddess_daq

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/chad/goddess_daq

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target install/strip
install/strip: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	/usr/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip

# Special rule for the target install/strip
install/strip/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	/usr/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip/fast

# Special rule for the target install
install: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/usr/bin/cmake -P cmake_install.cmake
.PHONY : install

# Special rule for the target install
install/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/usr/bin/cmake -P cmake_install.cmake
.PHONY : install/fast

# Special rule for the target install/local
install/local: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	/usr/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local

# Special rule for the target install/local
install/local/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	/usr/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local/fast

# Special rule for the target list_install_components
list_install_components:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Available install components are: \"Unspecified\""
.PHONY : list_install_components

# Special rule for the target list_install_components
list_install_components/fast: list_install_components

.PHONY : list_install_components/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/chad/goddess_daq/CMakeFiles /home/chad/goddess_daq/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/chad/goddess_daq/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named hribfConvert

# Build rule for target.
hribfConvert: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 hribfConvert
.PHONY : hribfConvert

# fast build rule for target.
hribfConvert/fast:
	$(MAKE) -f hribf/source/CMakeFiles/hribfConvert.dir/build.make hribf/source/CMakeFiles/hribfConvert.dir/build
.PHONY : hribfConvert/fast

#=============================================================================
# Target rules for targets named GoddessToolboxLib

# Build rule for target.
GoddessToolboxLib: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 GoddessToolboxLib
.PHONY : GoddessToolboxLib

# fast build rule for target.
GoddessToolboxLib/fast:
	$(MAKE) -f toolbox/source/CMakeFiles/GoddessToolboxLib.dir/build.make toolbox/source/CMakeFiles/GoddessToolboxLib.dir/build
.PHONY : GoddessToolboxLib/fast

#=============================================================================
# Target rules for targets named GODDESSTOOLBOX_OBJECT

# Build rule for target.
GODDESSTOOLBOX_OBJECT: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 GODDESSTOOLBOX_OBJECT
.PHONY : GODDESSTOOLBOX_OBJECT

# fast build rule for target.
GODDESSTOOLBOX_OBJECT/fast:
	$(MAKE) -f toolbox/source/CMakeFiles/GODDESSTOOLBOX_OBJECT.dir/build.make toolbox/source/CMakeFiles/GODDESSTOOLBOX_OBJECT.dir/build
.PHONY : GODDESSTOOLBOX_OBJECT/fast

#=============================================================================
# Target rules for targets named GoddessAnalysis_OBJECT

# Build rule for target.
GoddessAnalysis_OBJECT: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 GoddessAnalysis_OBJECT
.PHONY : GoddessAnalysis_OBJECT

# fast build rule for target.
GoddessAnalysis_OBJECT/fast:
	$(MAKE) -f toolbox/source/CMakeFiles/GoddessAnalysis_OBJECT.dir/build.make toolbox/source/CMakeFiles/GoddessAnalysis_OBJECT.dir/build
.PHONY : GoddessAnalysis_OBJECT/fast

#=============================================================================
# Target rules for targets named GoddessAnalysis

# Build rule for target.
GoddessAnalysis: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 GoddessAnalysis
.PHONY : GoddessAnalysis

# fast build rule for target.
GoddessAnalysis/fast:
	$(MAKE) -f toolbox/source/CMakeFiles/GoddessAnalysis.dir/build.make toolbox/source/CMakeFiles/GoddessAnalysis.dir/build
.PHONY : GoddessAnalysis/fast

#=============================================================================
# Target rules for targets named GoddessStruct

# Build rule for target.
GoddessStruct: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 GoddessStruct
.PHONY : GoddessStruct

# fast build rule for target.
GoddessStruct/fast:
	$(MAKE) -f goddess/source/CMakeFiles/GoddessStruct.dir/build.make goddess/source/CMakeFiles/GoddessStruct.dir/build
.PHONY : GoddessStruct/fast

#=============================================================================
# Target rules for targets named GoddessStruct_OBJECT

# Build rule for target.
GoddessStruct_OBJECT: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 GoddessStruct_OBJECT
.PHONY : GoddessStruct_OBJECT

# fast build rule for target.
GoddessStruct_OBJECT/fast:
	$(MAKE) -f goddess/source/CMakeFiles/GoddessStruct_OBJECT.dir/build.make goddess/source/CMakeFiles/GoddessStruct_OBJECT.dir/build
.PHONY : GoddessStruct_OBJECT/fast

#=============================================================================
# Target rules for targets named ORRUBA_OBJECT

# Build rule for target.
ORRUBA_OBJECT: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 ORRUBA_OBJECT
.PHONY : ORRUBA_OBJECT

# fast build rule for target.
ORRUBA_OBJECT/fast:
	$(MAKE) -f goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/build.make goddess/source/CMakeFiles/ORRUBA_OBJECT.dir/build
.PHONY : ORRUBA_OBJECT/fast

#=============================================================================
# Target rules for targets named ORRUBA

# Build rule for target.
ORRUBA: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 ORRUBA
.PHONY : ORRUBA

# fast build rule for target.
ORRUBA/fast:
	$(MAKE) -f goddess/source/CMakeFiles/ORRUBA.dir/build.make goddess/source/CMakeFiles/ORRUBA.dir/build
.PHONY : ORRUBA/fast

#=============================================================================
# Target rules for targets named mkMap

# Build rule for target.
mkMap: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 mkMap
.PHONY : mkMap

# fast build rule for target.
mkMap/fast:
	$(MAKE) -f source/CMakeFiles/mkMap.dir/build.make source/CMakeFiles/mkMap.dir/build
.PHONY : mkMap/fast

#=============================================================================
# Target rules for targets named GEBSort_nogeb

# Build rule for target.
GEBSort_nogeb: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 GEBSort_nogeb
.PHONY : GEBSort_nogeb

# fast build rule for target.
GEBSort_nogeb/fast:
	$(MAKE) -f source/CMakeFiles/GEBSort_nogeb.dir/build.make source/CMakeFiles/GEBSort_nogeb.dir/build
.PHONY : GEBSort_nogeb/fast

#=============================================================================
# Target rules for targets named GEBMerge

# Build rule for target.
GEBMerge: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 GEBMerge
.PHONY : GEBMerge

# fast build rule for target.
GEBMerge/fast:
	$(MAKE) -f source/CMakeFiles/GEBMerge.dir/build.make source/CMakeFiles/GEBMerge.dir/build
.PHONY : GEBMerge/fast

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... install/strip"
	@echo "... install"
	@echo "... install/local"
	@echo "... list_install_components"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... hribfConvert"
	@echo "... GoddessToolboxLib"
	@echo "... GODDESSTOOLBOX_OBJECT"
	@echo "... GoddessAnalysis_OBJECT"
	@echo "... GoddessAnalysis"
	@echo "... GoddessStruct"
	@echo "... GoddessStruct_OBJECT"
	@echo "... ORRUBA_OBJECT"
	@echo "... ORRUBA"
	@echo "... mkMap"
	@echo "... GEBSort_nogeb"
	@echo "... GEBMerge"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system


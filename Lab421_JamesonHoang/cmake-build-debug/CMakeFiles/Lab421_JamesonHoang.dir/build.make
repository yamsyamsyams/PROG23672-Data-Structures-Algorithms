# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /cygdrive/c/Users/jhoan/AppData/Local/JetBrains/CLion2020.3/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/jhoan/AppData/Local/JetBrains/CLion2020.3/cygwin_cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Lab421_JamesonHoang

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Lab421_JamesonHoang/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Lab421_JamesonHoang.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lab421_JamesonHoang.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lab421_JamesonHoang.dir/flags.make

CMakeFiles/Lab421_JamesonHoang.dir/TestStack.cpp.o: CMakeFiles/Lab421_JamesonHoang.dir/flags.make
CMakeFiles/Lab421_JamesonHoang.dir/TestStack.cpp.o: ../TestStack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Lab421_JamesonHoang/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lab421_JamesonHoang.dir/TestStack.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lab421_JamesonHoang.dir/TestStack.cpp.o -c /cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Lab421_JamesonHoang/TestStack.cpp

CMakeFiles/Lab421_JamesonHoang.dir/TestStack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab421_JamesonHoang.dir/TestStack.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Lab421_JamesonHoang/TestStack.cpp > CMakeFiles/Lab421_JamesonHoang.dir/TestStack.cpp.i

CMakeFiles/Lab421_JamesonHoang.dir/TestStack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab421_JamesonHoang.dir/TestStack.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Lab421_JamesonHoang/TestStack.cpp -o CMakeFiles/Lab421_JamesonHoang.dir/TestStack.cpp.s

# Object files for target Lab421_JamesonHoang
Lab421_JamesonHoang_OBJECTS = \
"CMakeFiles/Lab421_JamesonHoang.dir/TestStack.cpp.o"

# External object files for target Lab421_JamesonHoang
Lab421_JamesonHoang_EXTERNAL_OBJECTS =

Lab421_JamesonHoang.exe: CMakeFiles/Lab421_JamesonHoang.dir/TestStack.cpp.o
Lab421_JamesonHoang.exe: CMakeFiles/Lab421_JamesonHoang.dir/build.make
Lab421_JamesonHoang.exe: CMakeFiles/Lab421_JamesonHoang.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Lab421_JamesonHoang/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Lab421_JamesonHoang.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lab421_JamesonHoang.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lab421_JamesonHoang.dir/build: Lab421_JamesonHoang.exe

.PHONY : CMakeFiles/Lab421_JamesonHoang.dir/build

CMakeFiles/Lab421_JamesonHoang.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lab421_JamesonHoang.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lab421_JamesonHoang.dir/clean

CMakeFiles/Lab421_JamesonHoang.dir/depend:
	cd /cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Lab421_JamesonHoang/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Lab421_JamesonHoang /cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Lab421_JamesonHoang /cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Lab421_JamesonHoang/cmake-build-debug /cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Lab421_JamesonHoang/cmake-build-debug /cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Lab421_JamesonHoang/cmake-build-debug/CMakeFiles/Lab421_JamesonHoang.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lab421_JamesonHoang.dir/depend


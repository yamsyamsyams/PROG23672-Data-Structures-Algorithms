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
CMAKE_SOURCE_DIR = /cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Exercise811_BinaryTree

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Exercise811_BinaryTree/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Exercise811_BinaryTree.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Exercise811_BinaryTree.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Exercise811_BinaryTree.dir/flags.make

CMakeFiles/Exercise811_BinaryTree.dir/main.cpp.o: CMakeFiles/Exercise811_BinaryTree.dir/flags.make
CMakeFiles/Exercise811_BinaryTree.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Exercise811_BinaryTree/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Exercise811_BinaryTree.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Exercise811_BinaryTree.dir/main.cpp.o -c /cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Exercise811_BinaryTree/main.cpp

CMakeFiles/Exercise811_BinaryTree.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Exercise811_BinaryTree.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Exercise811_BinaryTree/main.cpp > CMakeFiles/Exercise811_BinaryTree.dir/main.cpp.i

CMakeFiles/Exercise811_BinaryTree.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Exercise811_BinaryTree.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Exercise811_BinaryTree/main.cpp -o CMakeFiles/Exercise811_BinaryTree.dir/main.cpp.s

# Object files for target Exercise811_BinaryTree
Exercise811_BinaryTree_OBJECTS = \
"CMakeFiles/Exercise811_BinaryTree.dir/main.cpp.o"

# External object files for target Exercise811_BinaryTree
Exercise811_BinaryTree_EXTERNAL_OBJECTS =

Exercise811_BinaryTree.exe: CMakeFiles/Exercise811_BinaryTree.dir/main.cpp.o
Exercise811_BinaryTree.exe: CMakeFiles/Exercise811_BinaryTree.dir/build.make
Exercise811_BinaryTree.exe: CMakeFiles/Exercise811_BinaryTree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Exercise811_BinaryTree/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Exercise811_BinaryTree.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Exercise811_BinaryTree.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Exercise811_BinaryTree.dir/build: Exercise811_BinaryTree.exe

.PHONY : CMakeFiles/Exercise811_BinaryTree.dir/build

CMakeFiles/Exercise811_BinaryTree.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Exercise811_BinaryTree.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Exercise811_BinaryTree.dir/clean

CMakeFiles/Exercise811_BinaryTree.dir/depend:
	cd /cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Exercise811_BinaryTree/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Exercise811_BinaryTree /cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Exercise811_BinaryTree /cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Exercise811_BinaryTree/cmake-build-debug /cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Exercise811_BinaryTree/cmake-build-debug /cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Exercise811_BinaryTree/cmake-build-debug/CMakeFiles/Exercise811_BinaryTree.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Exercise811_BinaryTree.dir/depend


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
CMAKE_SOURCE_DIR = /cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Lab1011_SelectionSort_Quicksort_Insertionsort

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Lab1011_SelectionSort_Quicksort_Insertionsort/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Lab1011_SelectionSort.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lab1011_SelectionSort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lab1011_SelectionSort.dir/flags.make

CMakeFiles/Lab1011_SelectionSort.dir/main.cpp.o: CMakeFiles/Lab1011_SelectionSort.dir/flags.make
CMakeFiles/Lab1011_SelectionSort.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Lab1011_SelectionSort_Quicksort_Insertionsort/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lab1011_SelectionSort.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lab1011_SelectionSort.dir/main.cpp.o -c /cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Lab1011_SelectionSort_Quicksort_Insertionsort/main.cpp

CMakeFiles/Lab1011_SelectionSort.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab1011_SelectionSort.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Lab1011_SelectionSort_Quicksort_Insertionsort/main.cpp > CMakeFiles/Lab1011_SelectionSort.dir/main.cpp.i

CMakeFiles/Lab1011_SelectionSort.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab1011_SelectionSort.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Lab1011_SelectionSort_Quicksort_Insertionsort/main.cpp -o CMakeFiles/Lab1011_SelectionSort.dir/main.cpp.s

# Object files for target Lab1011_SelectionSort
Lab1011_SelectionSort_OBJECTS = \
"CMakeFiles/Lab1011_SelectionSort.dir/main.cpp.o"

# External object files for target Lab1011_SelectionSort
Lab1011_SelectionSort_EXTERNAL_OBJECTS =

Lab1011_SelectionSort.exe: CMakeFiles/Lab1011_SelectionSort.dir/main.cpp.o
Lab1011_SelectionSort.exe: CMakeFiles/Lab1011_SelectionSort.dir/build.make
Lab1011_SelectionSort.exe: CMakeFiles/Lab1011_SelectionSort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Lab1011_SelectionSort_Quicksort_Insertionsort/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Lab1011_SelectionSort.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lab1011_SelectionSort.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lab1011_SelectionSort.dir/build: Lab1011_SelectionSort.exe

.PHONY : CMakeFiles/Lab1011_SelectionSort.dir/build

CMakeFiles/Lab1011_SelectionSort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lab1011_SelectionSort.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lab1011_SelectionSort.dir/clean

CMakeFiles/Lab1011_SelectionSort.dir/depend:
	cd /cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Lab1011_SelectionSort_Quicksort_Insertionsort/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Lab1011_SelectionSort_Quicksort_Insertionsort /cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Lab1011_SelectionSort_Quicksort_Insertionsort /cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Lab1011_SelectionSort_Quicksort_Insertionsort/cmake-build-debug /cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Lab1011_SelectionSort_Quicksort_Insertionsort/cmake-build-debug /cygdrive/s/Code/PROG23672-Data-Structures-Algorithms/Lab1011_SelectionSort_Quicksort_Insertionsort/cmake-build-debug/CMakeFiles/Lab1011_SelectionSort.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lab1011_SelectionSort.dir/depend


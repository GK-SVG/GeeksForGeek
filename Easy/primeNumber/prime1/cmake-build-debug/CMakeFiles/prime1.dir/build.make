# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /home/gautam/Downloads/clion-2019.1.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/gautam/Downloads/clion-2019.1.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/gautam/Documents/GeeksForGeek/Easy/primeNumber/prime1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gautam/Documents/GeeksForGeek/Easy/primeNumber/prime1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/prime1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/prime1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/prime1.dir/flags.make

CMakeFiles/prime1.dir/main.cpp.o: CMakeFiles/prime1.dir/flags.make
CMakeFiles/prime1.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gautam/Documents/GeeksForGeek/Easy/primeNumber/prime1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/prime1.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/prime1.dir/main.cpp.o -c /home/gautam/Documents/GeeksForGeek/Easy/primeNumber/prime1/main.cpp

CMakeFiles/prime1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prime1.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gautam/Documents/GeeksForGeek/Easy/primeNumber/prime1/main.cpp > CMakeFiles/prime1.dir/main.cpp.i

CMakeFiles/prime1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prime1.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gautam/Documents/GeeksForGeek/Easy/primeNumber/prime1/main.cpp -o CMakeFiles/prime1.dir/main.cpp.s

# Object files for target prime1
prime1_OBJECTS = \
"CMakeFiles/prime1.dir/main.cpp.o"

# External object files for target prime1
prime1_EXTERNAL_OBJECTS =

prime1: CMakeFiles/prime1.dir/main.cpp.o
prime1: CMakeFiles/prime1.dir/build.make
prime1: CMakeFiles/prime1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gautam/Documents/GeeksForGeek/Easy/primeNumber/prime1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable prime1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/prime1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/prime1.dir/build: prime1

.PHONY : CMakeFiles/prime1.dir/build

CMakeFiles/prime1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/prime1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/prime1.dir/clean

CMakeFiles/prime1.dir/depend:
	cd /home/gautam/Documents/GeeksForGeek/Easy/primeNumber/prime1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gautam/Documents/GeeksForGeek/Easy/primeNumber/prime1 /home/gautam/Documents/GeeksForGeek/Easy/primeNumber/prime1 /home/gautam/Documents/GeeksForGeek/Easy/primeNumber/prime1/cmake-build-debug /home/gautam/Documents/GeeksForGeek/Easy/primeNumber/prime1/cmake-build-debug /home/gautam/Documents/GeeksForGeek/Easy/primeNumber/prime1/cmake-build-debug/CMakeFiles/prime1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/prime1.dir/depend

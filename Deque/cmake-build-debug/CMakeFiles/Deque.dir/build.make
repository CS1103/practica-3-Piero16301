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
CMAKE_COMMAND = /opt/clion-2019.1.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2019.1.3/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/piero/Downloads/practica-3-Piero16301/Deque

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/piero/Downloads/practica-3-Piero16301/Deque/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Deque.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Deque.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Deque.dir/flags.make

CMakeFiles/Deque.dir/main.cpp.o: CMakeFiles/Deque.dir/flags.make
CMakeFiles/Deque.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/piero/Downloads/practica-3-Piero16301/Deque/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Deque.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Deque.dir/main.cpp.o -c /home/piero/Downloads/practica-3-Piero16301/Deque/main.cpp

CMakeFiles/Deque.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Deque.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/piero/Downloads/practica-3-Piero16301/Deque/main.cpp > CMakeFiles/Deque.dir/main.cpp.i

CMakeFiles/Deque.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Deque.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/piero/Downloads/practica-3-Piero16301/Deque/main.cpp -o CMakeFiles/Deque.dir/main.cpp.s

# Object files for target Deque
Deque_OBJECTS = \
"CMakeFiles/Deque.dir/main.cpp.o"

# External object files for target Deque
Deque_EXTERNAL_OBJECTS =

Deque: CMakeFiles/Deque.dir/main.cpp.o
Deque: CMakeFiles/Deque.dir/build.make
Deque: CMakeFiles/Deque.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/piero/Downloads/practica-3-Piero16301/Deque/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Deque"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Deque.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Deque.dir/build: Deque

.PHONY : CMakeFiles/Deque.dir/build

CMakeFiles/Deque.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Deque.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Deque.dir/clean

CMakeFiles/Deque.dir/depend:
	cd /home/piero/Downloads/practica-3-Piero16301/Deque/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/piero/Downloads/practica-3-Piero16301/Deque /home/piero/Downloads/practica-3-Piero16301/Deque /home/piero/Downloads/practica-3-Piero16301/Deque/cmake-build-debug /home/piero/Downloads/practica-3-Piero16301/Deque/cmake-build-debug /home/piero/Downloads/practica-3-Piero16301/Deque/cmake-build-debug/CMakeFiles/Deque.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Deque.dir/depend

# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.30.3/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.30.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/henrifox/#code#/algorithm_code/cpp_leetcode/leecodeBasic"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/henrifox/#code#/algorithm_code/cpp_leetcode/leecodeBasic/build"

# Include any dependencies generated for this target.
include CMakeFiles/leetcode_cpp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/leetcode_cpp.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/leetcode_cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/leetcode_cpp.dir/flags.make

CMakeFiles/leetcode_cpp.dir/main.cpp.o: CMakeFiles/leetcode_cpp.dir/flags.make
CMakeFiles/leetcode_cpp.dir/main.cpp.o: /Users/henrifox/\#code\#/algorithm_code/cpp_leetcode/leecodeBasic/main.cpp
CMakeFiles/leetcode_cpp.dir/main.cpp.o: CMakeFiles/leetcode_cpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/Users/henrifox/#code#/algorithm_code/cpp_leetcode/leecodeBasic/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/leetcode_cpp.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/leetcode_cpp.dir/main.cpp.o -MF CMakeFiles/leetcode_cpp.dir/main.cpp.o.d -o CMakeFiles/leetcode_cpp.dir/main.cpp.o -c "/Users/henrifox/#code#/algorithm_code/cpp_leetcode/leecodeBasic/main.cpp"

CMakeFiles/leetcode_cpp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/leetcode_cpp.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/henrifox/#code#/algorithm_code/cpp_leetcode/leecodeBasic/main.cpp" > CMakeFiles/leetcode_cpp.dir/main.cpp.i

CMakeFiles/leetcode_cpp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/leetcode_cpp.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/henrifox/#code#/algorithm_code/cpp_leetcode/leecodeBasic/main.cpp" -o CMakeFiles/leetcode_cpp.dir/main.cpp.s

# Object files for target leetcode_cpp
leetcode_cpp_OBJECTS = \
"CMakeFiles/leetcode_cpp.dir/main.cpp.o"

# External object files for target leetcode_cpp
leetcode_cpp_EXTERNAL_OBJECTS =

leetcode_cpp: CMakeFiles/leetcode_cpp.dir/main.cpp.o
leetcode_cpp: CMakeFiles/leetcode_cpp.dir/build.make
leetcode_cpp: CMakeFiles/leetcode_cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/Users/henrifox/#code#/algorithm_code/cpp_leetcode/leecodeBasic/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable leetcode_cpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/leetcode_cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/leetcode_cpp.dir/build: leetcode_cpp
.PHONY : CMakeFiles/leetcode_cpp.dir/build

CMakeFiles/leetcode_cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/leetcode_cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/leetcode_cpp.dir/clean

CMakeFiles/leetcode_cpp.dir/depend:
	cd "/Users/henrifox/#code#/algorithm_code/cpp_leetcode/leecodeBasic/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/henrifox/#code#/algorithm_code/cpp_leetcode/leecodeBasic" "/Users/henrifox/#code#/algorithm_code/cpp_leetcode/leecodeBasic" "/Users/henrifox/#code#/algorithm_code/cpp_leetcode/leecodeBasic/build" "/Users/henrifox/#code#/algorithm_code/cpp_leetcode/leecodeBasic/build" "/Users/henrifox/#code#/algorithm_code/cpp_leetcode/leecodeBasic/build/CMakeFiles/leetcode_cpp.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/leetcode_cpp.dir/depend


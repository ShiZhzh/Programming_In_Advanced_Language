# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.29

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\IDE\visual stadio code\C++\exp_10_5.23\lab9_1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\IDE\visual stadio code\C++\exp_10_5.23\lab9_1\build"

# Include any dependencies generated for this target.
include CMakeFiles/lab9_1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/lab9_1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/lab9_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab9_1.dir/flags.make

CMakeFiles/lab9_1.dir/lab9_1.cpp.obj: CMakeFiles/lab9_1.dir/flags.make
CMakeFiles/lab9_1.dir/lab9_1.cpp.obj: D:/IDE/visual\ stadio\ code/C++/exp_10_5.23/lab9_1/lab9_1.cpp
CMakeFiles/lab9_1.dir/lab9_1.cpp.obj: CMakeFiles/lab9_1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="D:\IDE\visual stadio code\C++\exp_10_5.23\lab9_1\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab9_1.dir/lab9_1.cpp.obj"
	C:\TDM-GCC-64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab9_1.dir/lab9_1.cpp.obj -MF CMakeFiles\lab9_1.dir\lab9_1.cpp.obj.d -o CMakeFiles\lab9_1.dir\lab9_1.cpp.obj -c "D:\IDE\visual stadio code\C++\exp_10_5.23\lab9_1\lab9_1.cpp"

CMakeFiles/lab9_1.dir/lab9_1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/lab9_1.dir/lab9_1.cpp.i"
	C:\TDM-GCC-64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\IDE\visual stadio code\C++\exp_10_5.23\lab9_1\lab9_1.cpp" > CMakeFiles\lab9_1.dir\lab9_1.cpp.i

CMakeFiles/lab9_1.dir/lab9_1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/lab9_1.dir/lab9_1.cpp.s"
	C:\TDM-GCC-64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\IDE\visual stadio code\C++\exp_10_5.23\lab9_1\lab9_1.cpp" -o CMakeFiles\lab9_1.dir\lab9_1.cpp.s

# Object files for target lab9_1
lab9_1_OBJECTS = \
"CMakeFiles/lab9_1.dir/lab9_1.cpp.obj"

# External object files for target lab9_1
lab9_1_EXTERNAL_OBJECTS =

lab9_1.exe: CMakeFiles/lab9_1.dir/lab9_1.cpp.obj
lab9_1.exe: CMakeFiles/lab9_1.dir/build.make
lab9_1.exe: CMakeFiles/lab9_1.dir/linkLibs.rsp
lab9_1.exe: CMakeFiles/lab9_1.dir/objects1.rsp
lab9_1.exe: CMakeFiles/lab9_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="D:\IDE\visual stadio code\C++\exp_10_5.23\lab9_1\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lab9_1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lab9_1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab9_1.dir/build: lab9_1.exe
.PHONY : CMakeFiles/lab9_1.dir/build

CMakeFiles/lab9_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\lab9_1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/lab9_1.dir/clean

CMakeFiles/lab9_1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\IDE\visual stadio code\C++\exp_10_5.23\lab9_1" "D:\IDE\visual stadio code\C++\exp_10_5.23\lab9_1" "D:\IDE\visual stadio code\C++\exp_10_5.23\lab9_1\build" "D:\IDE\visual stadio code\C++\exp_10_5.23\lab9_1\build" "D:\IDE\visual stadio code\C++\exp_10_5.23\lab9_1\build\CMakeFiles\lab9_1.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/lab9_1.dir/depend


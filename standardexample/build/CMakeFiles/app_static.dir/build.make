# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = D:\cmake\bin\cmake.exe

# The command to remove a file.
RM = D:\cmake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\CMakeLearn\standardexample

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\CMakeLearn\standardexample\build

# Include any dependencies generated for this target.
include CMakeFiles/app_static.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/app_static.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/app_static.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/app_static.dir/flags.make

CMakeFiles/app_static.dir/main.cpp.obj: CMakeFiles/app_static.dir/flags.make
CMakeFiles/app_static.dir/main.cpp.obj: CMakeFiles/app_static.dir/includes_CXX.rsp
CMakeFiles/app_static.dir/main.cpp.obj: D:/CMakeLearn/standardexample/main.cpp
CMakeFiles/app_static.dir/main.cpp.obj: CMakeFiles/app_static.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CMakeLearn\standardexample\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/app_static.dir/main.cpp.obj"
	D:\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/app_static.dir/main.cpp.obj -MF CMakeFiles\app_static.dir\main.cpp.obj.d -o CMakeFiles\app_static.dir\main.cpp.obj -c D:\CMakeLearn\standardexample\main.cpp

CMakeFiles/app_static.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/app_static.dir/main.cpp.i"
	D:\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CMakeLearn\standardexample\main.cpp > CMakeFiles\app_static.dir\main.cpp.i

CMakeFiles/app_static.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/app_static.dir/main.cpp.s"
	D:\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\CMakeLearn\standardexample\main.cpp -o CMakeFiles\app_static.dir\main.cpp.s

# Object files for target app_static
app_static_OBJECTS = \
"CMakeFiles/app_static.dir/main.cpp.obj"

# External object files for target app_static
app_static_EXTERNAL_OBJECTS =

D:/CMakeLearn/standardexample/app_static.exe: CMakeFiles/app_static.dir/main.cpp.obj
D:/CMakeLearn/standardexample/app_static.exe: CMakeFiles/app_static.dir/build.make
D:/CMakeLearn/standardexample/app_static.exe: D:/CMakeLearn/standardexample/lib/libanimalStatic.a
D:/CMakeLearn/standardexample/app_static.exe: CMakeFiles/app_static.dir/linkLibs.rsp
D:/CMakeLearn/standardexample/app_static.exe: CMakeFiles/app_static.dir/objects1.rsp
D:/CMakeLearn/standardexample/app_static.exe: CMakeFiles/app_static.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\CMakeLearn\standardexample\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable D:\CMakeLearn\standardexample\app_static.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\app_static.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/app_static.dir/build: D:/CMakeLearn/standardexample/app_static.exe
.PHONY : CMakeFiles/app_static.dir/build

CMakeFiles/app_static.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\app_static.dir\cmake_clean.cmake
.PHONY : CMakeFiles/app_static.dir/clean

CMakeFiles/app_static.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\CMakeLearn\standardexample D:\CMakeLearn\standardexample D:\CMakeLearn\standardexample\build D:\CMakeLearn\standardexample\build D:\CMakeLearn\standardexample\build\CMakeFiles\app_static.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/app_static.dir/depend


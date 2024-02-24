cmake_minimum_required(VERSION 3.10)

project(boilerplate_module)

add_library(${PROJECT_NAME} src/boilerplate.cpp)

# best practice is to use target_include_directories
# applies to a specific target (a library or exectable defined by 
# add_library or add_executable)
# PRIVATE = the include directories are only available to the target itself
# PUBLIC = available to both the target and any targets that link against it
# INTERFACE = not available to the target itself but to targets
# that link against it

target_include_directories(${PROJECT_NAME} PUBLIC include)


# include_directories has a global scope
# add the include directories to all targets that are defined after 
# calling this command
# affects all targets in the current cmakelists file and those in 
# subdirectories addded after the point of its declaration

#include_directories(include)

add_subdirectory(unittests)

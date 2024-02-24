cmake_minimum_required(VERSION 3.10)
project(my_project)

# Enable CTest testing
enable_testing()

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(modules/boilerplate_module)
add_subdirectory(modules/app)
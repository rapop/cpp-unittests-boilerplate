cmake_minimum_required(VERSION 3.10)

project(boilerplate_module_unittests)

# Include the Google Test libraries
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(${PROJECT_NAME} boilerplate_unittests.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE 
                        boilerplate_module
                        gtest 
                        gtest_main)

# Add the tests to CTest's testing framework
add_test(NAME ${PROJECT_NAME} COMMAND ${PROJECT_NAME})
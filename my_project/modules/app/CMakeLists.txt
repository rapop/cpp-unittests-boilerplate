cmake_minimum_required(VERSION 3.10)
project(app)

add_executable(${PROJECT_NAME} src/main.cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC boilerplate_module)

target_include_directories(${PROJECT_NAME} PUBLIC boilerplate_module)
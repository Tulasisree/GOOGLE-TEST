# cmake_minimum_required(VERSION 3.8)

project(Source)

include_directories(../include)

add_executable(mainApp main.cpp testfunc.cpp)

include(CTest)
enable_testing()
add_subdirectory(test)
add_subdirectory(mocktest)
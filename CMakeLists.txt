cmake_minimum_required(VERSION 3.8)

project(CPPPractice)

# add_library(headerlib STATIC "./include/hello.cpp")
# add_executable(mainApp "./src/main.cpp")
# target_link_libraries(mainApp headerlib)

project(${This} CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_POSITION_INDEPENDENT_CODE ON) 

# include(FetchContent)
# FetchContent_Declare(
#   googletest
#   URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
# )


enable_testing() #tells cmake that we have unit tests

add_subdirectory(src)
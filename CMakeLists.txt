cmake_minimum_required(VERSION 3.10)

# set the project name
project(Http)

add_executable(Http server.cpp http_tcpserver.cpp)
target_include_directories(Http PRIVATE .)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
cmake_minimum_required(VERSION 3.22)
project(webserver)

set(CMAKE_CXX_STANDARD 23)

add_library(webserver library.cpp Networking/SimpleSocket.cpp Networking/SimpleSocket.h)

cmake_minimum_required(VERSION 3.22)
project(webserver)

set(CMAKE_CXX_STANDARD 23)

add_executable(test
        Networking/Sockets/main.cpp
        Networking/Sockets/SimpleSocket.h
        Networking/Sockets/SimpleSocket.cpp
        Networking/Sockets/BindingSocket.h
        Networking/Sockets/BindingSocket.cpp
        Networking/Sockets/ConnectingSocket.h
        Networking/Sockets/ConnectingSocket.cpp
        Networking/Sockets/ListeningSocket.h
        Networking/Sockets/ListeningSocket.cpp)

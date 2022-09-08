cmake_minimum_required(VERSION 3.22)
project(webserver)

set(CMAKE_CXX_STANDARD 23)
#cmake -G 'Unix Makefiles' -B ./testbuild/
add_executable(testServer
        Networking/Servers/test.cpp
        Networking/Servers/SimpleServer.h
        Networking/Servers/SimpleServer.cpp
        Networking/Servers/TestServer.h
        Networking/Servers/TestServer.cpp
        Networking/Sockets/SimpleSocket.h
        Networking/Sockets/SimpleSocket.cpp
        Networking/Sockets/BindingSocket.h
        Networking/Sockets/BindingSocket.cpp
        Networking/Sockets/ConnectingSocket.h
        Networking/Sockets/ConnectingSocket.cpp
        Networking/Sockets/ListeningSocket.h
        Networking/Sockets/ListeningSocket.cpp)
add_executable(testclient
        Networking/Clients/test.cpp
        Networking/Clients/SimpleClient.h
        Networking/Clients/SimpleClient.cpp
        Networking/Clients/TestClient.h
        Networking/Clients/TestClient.cpp
        Networking/Sockets/SimpleSocket.h
        Networking/Sockets/SimpleSocket.cpp
        Networking/Sockets/BindingSocket.h
        Networking/Sockets/BindingSocket.cpp
        Networking/Sockets/ConnectingSocket.h
        Networking/Sockets/ConnectingSocket.cpp
        Networking/Sockets/ListeningSocket.h
        Networking/Sockets/ListeningSocket.cpp)
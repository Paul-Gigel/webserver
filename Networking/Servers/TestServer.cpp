//
// Created by paul on 06.09.22.
//

#include "TestServer.h"
//SimpleServer(AF_INET, SOCK_STREAM, 0, 80, INADDR_ANY, 10)
namespace pg {
    TestServer::TestServer() : SimpleServer(AF_INET, SOCK_STREAM, 0, 8080, INADDR_ANY, 10){
        launche();
    }
    void TestServer::accepter() {
        struct sockaddr_in address = getSocket()->getAddress();
        uint addresslen = sizeof(address);
        newSocket = accept(getSocket()->getSocket(), (struct sockaddr*)&address, (socklen_t*)&addresslen);
        read(newSocket, buffer, 30000);
    }
    void TestServer::handler() {
        std::cout<<buffer<<std::endl;
    }
    void TestServer::responder() {
        char* hello = "Hello from Server";
        write(newSocket, hello, strlen(hello));
        close(newSocket);
    }
    void TestServer::launche() {
        while (1)   {
            std::cout<<"###waiting###\n";
            accepter();
            std::cout<<"###1###\n";
            handler();
            std::cout<<"###2###\n";
            responder();
            std::cout<<"###3###\n";
            std::cout<<"###done###\n";
        }
    }
} // pg
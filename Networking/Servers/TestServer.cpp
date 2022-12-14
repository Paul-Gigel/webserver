//
// Created by paul on 06.09.22.
//

#include "TestServer.h"
//SimpleServer(AF_INET, SOCK_STREAM, 0, 80, INADDR_ANY, 10)
namespace pg {
    TestServer::TestServer(struct in_addr inAddress) : SimpleServer(AF_INET, SOCK_STREAM, 0, 80, inAddress.s_addr, 10){

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
    void TestServer::launche(uint count) {
        for (uint i = 0; i < count; i++) {
            std::cout<<"###waiting###"<<count<<std::endl;
            accepter();
            handler();
            responder();
            std::cout<<"###done###"<<count<<std::endl;
        }
    }
} // pg
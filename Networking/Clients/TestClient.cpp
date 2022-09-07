//
// Created by paul on 07.09.22.
//

#include "TestClient.h"

namespace pg {
    TestClient::TestClient(struct in_addr serverAddress) :
    SimpleClient(AF_INET, SOCK_STREAM, 0, 80, serverAddress.s_addr){}

    void TestClient::readMessage(std::string& buffer) {
        read(this->getSocket(), data, 1024);
        buffer= data;
    }
    void TestClient::sendMessage(const std::string& Message) const{
        send(this->getSocket(), Message.c_str(), Message.length(), 0);
    }
} // pg
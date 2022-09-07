//
// Created by paul on 07.09.22.
//

#ifndef WEBSERVER_TESTCLIENT_H
#define WEBSERVER_TESTCLIENT_H
#include "SimpleClient.h"
#include <string>
namespace pg {
    class TestClient : public SimpleClient{
    private:
        void* data;
        size_t dataSize;
    public:
        TestClient(struct in_addr);
        void sendMessage(const std::string&)const;
        std::string& readMessage(std::string&);
    };
} // pg
#endif //WEBSERVER_TESTCLIENT_H

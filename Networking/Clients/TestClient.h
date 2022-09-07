//
// Created by paul on 07.09.22.
//

#ifndef WEBSERVER_TESTCLIENT_H
#define WEBSERVER_TESTCLIENT_H
#include "SimpleClient.h"
#include <string>
namespace pg {
    template<typename T>
    class TestClient : public SimpleClient<T>{
    private:
        T Message;
    public:
        TestClient(struct in_addr);
        void sendMessage(T);
        T& readMessage();
    };
typedef TestClient<std::string> TestClientString;
} // pg

#endif //WEBSERVER_TESTCLIENT_H

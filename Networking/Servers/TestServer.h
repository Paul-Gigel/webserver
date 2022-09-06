//
// Created by paul on 06.09.22.
//

#ifndef WEBSERVER_TESTSERVER_H
#define WEBSERVER_TESTSERVER_H
#include "SimpleServer.h"
#include "unistd.h"
namespace pg {

    class TestServer :public SimpleServer{
    private:
        char buffer[30000];
        int newSocket;
        void accepter() override;
        void handler() override;
        void responder() override;
    public:
        TestServer();
        void launche() override;
    };

} // pg

#endif //WEBSERVER_TESTSERVER_H

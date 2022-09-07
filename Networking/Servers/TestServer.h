//
// Created by paul on 06.09.22.
//

#ifndef WEBSERVER_TESTSERVER_H
#define WEBSERVER_TESTSERVER_H
#include "SimpleServer.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>
namespace pg {

    class TestServer :public SimpleServer{
    private:
        char buffer[30000];
        int newSocket;
        void accepter();
        void handler();
        void responder();
    public:
        TestServer(struct in_addr);
        void launche();
    };

} // pg

#endif //WEBSERVER_TESTSERVER_H

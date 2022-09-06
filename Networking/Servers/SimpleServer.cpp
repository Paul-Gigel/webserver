//
// Created by paul on 06.09.22.
//

#include "SimpleServer.h"

namespace pg {
    SimpleServer::SimpleServer(int domain, int service, int protocol, short port, uint32_t interface, int bklg) {
        sock = new ListeningSocket(domain, service, protocol, port, interface, bklg);
    }
    SimpleServer::~SimpleServer() {
        delete sock;
    }

    ListeningSocket *SimpleServer::getSocket() {
        return sock;
    }
} // pg
//
// Created by paul on 06.09.22.
//

#ifndef WEBSERVER_BINDINGSOCKET_H
#define WEBSERVER_BINDINGSOCKET_H
#include "SimpleSocket.h"
namespace pg {
    class BindingSocket: public SimpleSocket{
    public:
        BindingSocket(int domain, int service, int protocol, short port, uint32_t interface);
        int connectToNetwork(int, struct sockaddr_in);
    };
}

#endif //WEBSERVER_BINDINGSOCKET_H

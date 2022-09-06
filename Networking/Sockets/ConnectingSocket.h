//
// Created by paul on 06.09.22.
//

#ifndef WEBSERVER_CONNECTINGSOCKET_H
#define WEBSERVER_CONNECTINGSOCKET_H
#include "SimpleSocket.h"
namespace pg {
    class ConnectingSocket : public SimpleSocket{
    public:
        ConnectingSocket(int domain, int service, int protocol, int port, uint32_t interface);
        int connectToNetwork(int, struct sockaddr_in);
    };
}

#endif //WEBSERVER_CONNECTINGSOCKET_H

//
// Created by paul on 06.09.22.
//

#include "ConnectingSocket.h"

namespace pg    {
    ConnectingSocket::ConnectingSocket(int domain, int service, int protocol, int port, uint32_t interface) :
    SimpleSocket(domain, service, protocol, port, interface)
    {
        int connection = connectToNetwork(getSocket(), getAddress());
        testConnection(connection);
    };
    int ConnectingSocket::connectToNetwork(int sock, struct sockaddr_in address) {
        return connect(sock, (struct sockaddr*)&address, sizeof(address));
    }
}
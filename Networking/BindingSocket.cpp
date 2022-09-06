//
// Created by paul on 06.09.22.
//

#include "BindingSocket.h"

namespace pg    {
    BindingSocket::BindingSocket(int domain, int service, int protocol, int port, uint32_t interface) : SimpleSocket(domain, service, protocol, port, interface)   {
        int binding = connectToNetwork(getSocket(), getAddress());
        setConnection(binding);
        testConnection(getConnection());
    };
    int BindingSocket::connectToNetwork(int sock, struct sockaddr_in address) {
        return bind(sock, (struct sockaddr*)&address, sizeof(address));
    }
}

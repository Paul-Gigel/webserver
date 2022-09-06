//
// Created by paul on 06.09.22.
//

#include "SimpleSocket.h"

namespace pg {
    SimpleSocket::SimpleSocket(int domain, int service, int protocol, int port, uint32_t interface) {
        address.sin_family = domain;
        address.sin_port = htons(port); //to convert port to network order
        address.sin_addr.s_addr = htonl(interface);

        socket = socket(domain, service, protocol);
        testConnection(socket);
        connection = connectToNetwork(socket, address);
        testConnection(connection);
    }

    void SimpleSocket::testConnection(int toTest) {
        if (toTest<0)   {
            perror("connection failed");
            exit(EXIT_FAILURE);
        }
    }
}
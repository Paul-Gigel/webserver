//
// Created by paul on 06.09.22.
//

#include "SimpleSocket.h"

namespace pg {
    SimpleSocket::SimpleSocket(int domain, int service, int protocol, short port, uint32_t interface) {
        address.sin_family = domain;
        address.sin_port = htons(port); //to convert port to network order
        address.sin_addr.s_addr = htonl(interface);

        sock = socket(domain, service, protocol);
        testConnection(sock);
    }

    void SimpleSocket::testConnection(int toTest) {
        if (toTest<0)   {
            perror("connection failed");
            exit(EXIT_FAILURE);
        }
    }
    struct sockaddr_in SimpleSocket::getAddress() {
        return address;
    }
    int SimpleSocket::getSocket() const{
        return sock;
    };
/*    int SimpleSocket::getConnection() {
        return connection;
    }
    void SimpleSocket::setConnection(int conn) {
        connection = conn;
    }*/
}
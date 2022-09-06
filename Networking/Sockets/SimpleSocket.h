//
// Created by paul on 06.09.22.
//

#ifndef WEBSERVER_SIMPLESOCKET_H
#define WEBSERVER_SIMPLESOCKET_H
#include <iostream>
#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
namespace pg {

    class SimpleSocket {
    private:
        struct sockaddr_in address;
        int sock;
        //int connection;
    public:
        SimpleSocket(int domain, int service, int protocol, short port, uint32_t interface);
        virtual int connectToNetwork(int, struct sockaddr_in) =0;
        void testConnection(int );
        struct sockaddr_in getAddress();
        int getSocket();
        //int getConnection();
        //void setConnection(int);
    };

} // pg

#endif //WEBSERVER_SIMPLESOCKET_H

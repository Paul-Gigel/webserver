//
// Created by paul on 07.09.22.
//

#ifndef WEBSERVER_SIMPLECLIENT_H
#define WEBSERVER_SIMPLECLIENT_H
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include "../Sockets/ConnectingSocket.h"
namespace pg {
template<typename T>
    class SimpleClient : public ConnectingSocket{
    private:
        struct sockaddr_in servAddr;
    protected:
        long valRead;
        char resBuffer[1024];
    public:
        SimpleClient(int domain, int service, int protocol, short port, uint32_t interface);
        virtual void sendMessage(T) =0;
        virtual T& readMessage() =0;
    };

} // pg

#endif //WEBSERVER_SIMPLECLIENT_H

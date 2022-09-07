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
    class SimpleClient : public ConnectingSocket{
    private:
        struct sockaddr_in servAddr;
    protected:
        long valRead;
    public:
        SimpleClient(int domain, int service, int protocol, short port, uint32_t interface);
        virtual void sendMessage(const std::string&) const =0;
        virtual std::string& readMessage(std::string&) =0;
    };

} // pg

#endif //WEBSERVER_SIMPLECLIENT_H

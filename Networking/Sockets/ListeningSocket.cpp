//
// Created by paul on 06.09.22.
//

#include "ListeningSocket.h"
namespace pg    {
    ListeningSocket::ListeningSocket(int domain, int service, int protocol, int port, uint32_t interface, int bklg) :
    BindingSocket(domain, service, protocol, port, interface)   {
        backlog =bklg;
        startListening();
        testConnection(listening);
    }

    void ListeningSocket::startListening() {
        listening = listen(getSocket(), backlog);
    }
}
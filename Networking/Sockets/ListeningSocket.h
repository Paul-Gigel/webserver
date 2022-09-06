//
// Created by paul on 06.09.22.
//

#ifndef WEBSERVER_LISTENINGSOCKET_H
#define WEBSERVER_LISTENINGSOCKET_H
#include "BindingSocket.h"
namespace pg {
    class ListeningSocket :public BindingSocket{
    private:
        int backlog;
        int listening;
    public:
        ListeningSocket(int domain, int service, int protocol, int port, uint32_t interface, int bklg);
        void startListening();
    };
}

#endif //WEBSERVER_LISTENINGSOCKET_H

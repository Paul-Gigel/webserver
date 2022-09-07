//
// Created by paul on 06.09.22.
//

#ifndef WEBSERVER_SIMPLESERVER_H
#define WEBSERVER_SIMPLESERVER_H
#include "../pgNetwork.h"
namespace pg {

    class SimpleServer {
    private:
        ListeningSocket* sock;
    public:
        SimpleServer(int domain, int service, int protocol, short port, uint32_t interface, int bklg);
        ~SimpleServer();
        virtual void accepter() =0;
        virtual void handler() =0;
        virtual void responder() =0;
        virtual void launche(uint) =0;

        ListeningSocket* getSocket();
    };

} // pg

#endif //WEBSERVER_SIMPLESERVER_H

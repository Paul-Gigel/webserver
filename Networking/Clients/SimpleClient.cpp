//
// Created by paul on 07.09.22.
//

#include "SimpleClient.h"

namespace pg {
    template<typename T>
    SimpleClient<T>::SimpleClient(int domain, int service, int protocol, short port, uint32_t interface) :
    ConnectingSocket(domain, service, protocol, port, interface) {}

} // pg
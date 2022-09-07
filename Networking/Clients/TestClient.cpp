//
// Created by paul on 07.09.22.
//

#include "TestClient.h"

namespace pg {
    template<typename T>
    TestClient<T>::TestClient(struct in_addr serverAddress) : SimpleClient<T>(AF_INET, SOCK_STREAM, 0, 80, serverAddress.s_addr){
        read(this->getSocket(), this->resBuffer, sizeof(this->resBuffer));
    }
    template<typename T>
    T &TestClient<T>::readMessage() {

    }
    template<typename T>
    void TestClient<T>::sendMessage(T) {
        send(this->getSocket(), Message, sizeof(Message), 0);
    }
} // pg
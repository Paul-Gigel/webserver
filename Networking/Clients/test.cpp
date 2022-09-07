#include <iostream>
#include <string>
#include "TestClient.h"
int main()  {
    struct in_addr addr;
    addr.s_addr = 0xc0a8b23c;
    std::string buffer;
    std::string message;
    pg::TestClient testClient(addr);
    std::cin>>message;
    testClient.sendMessage(message);
    testClient.readMessage(buffer);
    std::cout<<buffer<<std::endl;
    return 0;
}
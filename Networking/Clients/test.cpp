#include <iostream>
#include <string>
#include "TestClient.h"
int main()  {
    struct in_addr addr;
    addr.s_addr = 0xc0a8b23c;
    std::string buffer;
    pg::TestClient testClient(addr);
    testClient.sendMessage("HelloWorld");
    testClient.readMessage(buffer);
    std::cout<<buffer<<std::endl;
    return 0;
}
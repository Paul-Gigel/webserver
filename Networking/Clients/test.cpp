#include <iostream>
#include <string>
#include "TestClient.h"
int main()  {
    struct in_addr addr;
    addr.s_addr = 0xc0a8b23c;
    pg::TestClient<std::string> testClient(addr);
    testClient.sendMessage("HelloWorld");
    std::cout<<testClient.readMessage()<<"\n";
    //pg::SimpleClient<std::string> simpleClient(AF_INET, SOCK_STREAM, 0, 80, 0xc0a8b23c);
    return 0;
}
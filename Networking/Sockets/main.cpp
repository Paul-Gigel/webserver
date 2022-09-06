#include <iostream>
#include "pgSockets.h"
using namespace pg;

int main()  {
    std::cout<<"Hello World\n";
    BindingSocket bs(AF_INET, SOCK_STREAM, 0, 82, INADDR_ANY);
    std::cout<<"binding\n";
    ListeningSocket ls(AF_INET, SOCK_STREAM, 0, 81, INADDR_ANY, 10);
    std::cout<<"listening\n";
    return 0;
}
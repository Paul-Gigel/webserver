#include "TestServer.h"
int main()  {
    struct in_addr ipadress;
    ipadress.s_addr = 0xc0a8b23c;
    pg::TestServer t(ipadress);
    t.launche(10);

    return 0;
}
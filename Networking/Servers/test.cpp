#include "TestServer.h"
int main()  {
    struct in_addr ipadress;
    ipadress.s_addr = INADDR_ANY;
    pg::TestServer t(ipadress);
    t.launche(10);

    return 0;
}
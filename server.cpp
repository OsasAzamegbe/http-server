#include <http_tcpserver.h>
#include <iostream>

int main()
{
    using namespace http;
    
    TcpServer server = TcpServer();
    std::cout << "Compiled bitch" << std::endl;

    return 0;
}
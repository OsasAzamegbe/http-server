#include <http_tcpserver.h>
#include <iostream>

int main()
{
    using namespace http;

    TcpServer server = TcpServer("127.0.0.1", 8080);
    server.startListen();
    std::cout << "Compiled bitch" << std::endl;

    return 0;
}
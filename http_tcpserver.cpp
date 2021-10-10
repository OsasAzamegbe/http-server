#include <http_tcpserver.h>
#include <iostream>

namespace
{
    void log(const std::string &message)
    {
        std::cout << message << std::endl;
    }

    void exitWithError(const std::string &errorMessage)
    {
        std::cout << WSAGetLastError() << std::endl;
        log("ERROR: " + errorMessage);
        exit(1);
    }
}

namespace http
{

    TcpServer::TcpServer() : m_port(), m_socket(), m_new_socket(),
                             m_incomingMessage(),
                             m_socketAddress(),
                             m_socketAddress_len(),
                             m_serverMessage(), m_wsaData()
    {
        m_serverMessage = "Server has started...";
        m_socketAddress_len = sizeof(m_socketAddress);

        if (startServer() == 0) {
            log("Socket created");
        }
    }

    TcpServer::~TcpServer()
    {
        closeServer();
    }

    int TcpServer::startServer()
    {
        if (WSAStartup(MAKEWORD(2, 0), &m_wsaData) != 0)
        {
            log("WSAStartup failed");
        }

        if (m_socket = socket(AF_INET, SOCK_STREAM, 0) < 0) {
            exitWithError("cannot create socket");
            return 1;
        }

        return 0;
    }

    void TcpServer::closeServer(){
        closesocket(m_socket);
        WSACleanup();
        exit(0);
    }

} // namespace http
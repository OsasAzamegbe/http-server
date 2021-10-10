#include <http_tcpserver.h>
#include <iostream>
#include <sstream>
#include <unistd.h>

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

    TcpServer::TcpServer(int port) : m_port(port), m_socket(), m_new_socket(),
                                     m_incomingMessage(),
                                     m_socketAddress(), m_socketAddress_len(sizeof(m_socketAddress)),
                                     m_serverMessage("Server has started..."), m_wsaData()
    {
        m_socketAddress.sin_family = AF_INET;
        m_socketAddress.sin_port = m_port;
        m_socketAddress.sin_addr.s_addr = INADDR_ANY;

        if (startServer() == 0)
        {
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
            exitWithError("WSAStartup failed");
        }

        m_socket = socket(AF_INET, SOCK_STREAM, 0);
        if (m_socket < 0)
        {
            exitWithError("Cannot create socket");
            return 1;
        }

        if (bind(m_socket, (sockaddr *)&m_socketAddress, m_socketAddress_len) < 0)
        {
            exitWithError("Cannot connect socket to address");
            return 1;
        }

        return 0;
    }

    void TcpServer::closeServer()
    {
        closesocket(m_socket);
        closesocket(m_new_socket);
        WSACleanup();
        exit(0);
    }

    void TcpServer::startListen()
    {
        if (listen(m_socket, 20) < 0)
        {
            exitWithError("Socket listen failed");
        }

        std::ostringstream ss;
        ss << "*** Listening on PORT: " << m_port << " ***\n\n";
        log(ss.str());

        while (true)
        {
            log("====== Waiting for a new connection ======\n\n\n");
            m_new_socket = accept(m_socket, (sockaddr *)&m_socketAddress, &m_socketAddress_len);
            if (m_new_socket < 0)
            {
                ss.clear();
                ss << "Server failed to accept incoming connection from ADDRESS: " << m_socketAddress.sin_addr.s_addr << "; PORT: " << m_socketAddress.sin_port;
                exitWithError(ss.str());
            }

            char buffer[BUFSIZ] = {0};
            read(m_new_socket, buffer, BUFSIZ);
            ss.clear();
            ss << "------ Received message from client: " << buffer << " ------";
            log(ss.str());
            write(m_new_socket, m_serverMessage.c_str(), sizeof(m_serverMessage));
            log("------ Server response sent to client ------");
            closesocket(m_new_socket);
        }
    }

} // namespace http
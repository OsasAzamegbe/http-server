#include <http_tcpserver.h>

namespace http
{

    TcpServer::TcpServer() : m_socket(), m_new_socket(),
                             m_incomingMessage(),
                             m_socketAddress(),
                             m_socketAddress_len(),
                             m_serverMessage()
    {
        m_serverMessage = "Server has started...";
        m_socketAddress_len = sizeof(m_socketAddress);
    }

    TcpServer::~TcpServer()
    {
    }

} // namespace http
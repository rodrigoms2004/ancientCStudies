#include "myserver.h"

MyServer::MyServer(QObject *parent) : QTcpServer(parent)
{

}


MyServer::~MyServer()
{

}

void MyServer::startServer()
{
    if(listen(QHostAddress::Any, 1234))
    {
        qDebug() << "Server: started";
    } else {
        qDebug() << "Server: not started!";
    }
}

void MyServer::incomingConnection(qintptr socketDescriptor)
{
    // At the incoming connection, make a client
    MyClient *client = new MyClient(this);
    client->setSocket(socketDescriptor);
}

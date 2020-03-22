#include "MessengerServer.h"
#include "MessengerSocket.h"
#include <QTextStream>
#include <QDebug>

namespace SMiB {

MessengerServer::MessengerServer(QObject *parent)
    : QTcpServer(parent)
{

}

// Method to start the server
bool MessengerServer::startServer(quint16 port)
{
    return listen(QHostAddress::Any, port);
}

void MessengerServer::incomingConnection(qintptr handle)
{
    qDebug() << "Client connected with handle: " << handle;
    // create and instance of the handled sockets
    auto socket = new MessengerSocket(handle, this);
    // here is created pull of connections via
    // list of pointers to the objects
    mSockets << socket;

    for (auto i : mSockets) {
        QTextStream T(i);
        T << "Server: Is connected: " << handle;
        i->flush();
    }

    // here is created lambda function of named method
    // what provide possibility to create each instance with a different options
    connect(socket, &MessengerSocket::mReadyRead, [&](MessengerSocket *S) {
        // simple try .. catch with console sending
        qDebug() << "mReadyRead";
        // grab all data from incoming stream (all of the users~!)
        QTextStream T(S);
        // and put it to the variable of auto type
        // cause I don't want to manual change it
        // after any reworking
        auto text = T.readAll();

        // and now I separate it to be able output it without any data loses
        for (auto i : mSockets) {
            QTextStream K(i);
            // broadcasting it like a text to the whole chat room
            K << text;
            // flush() -    This function writes as much as possible from the internal write buffer
            //              to the underlying network socket, without blocking. If any data was written,
            //              this function returns true; otherwise false is returned.
            i->flush();
        }
    });

    // *s - current socket
    // ST - socket state 0..6
    // where the 5 - fir the internal use only
    connect(socket, &MessengerSocket::isStateChanged, [&](MessengerSocket *S, int ST) {
        // simple try .. catch with console sending
        qDebug() << "isStateChanged with error: "
                 << S->socketDescriptor();
        // Now I have to check socket statement
        if (ST == QTcpSocket::UnconnectedState) {
            qDebug() << "Unconnected state with handle: "
                     << S->socketDescriptor();
            // remove socket which lost connection or in the case of other errors
            mSockets.removeOne(S);
            for (auto i : mSockets) {
                QTextStream ConErr(i);
                ConErr << "Server: Client: "
                  << S->socketDescriptor()
                  << " is disconnected.";
                // flush() -    This function writes as much as possible from the internal write buffer
                //              to the underlying network socket, without blocking. If any data was written,
                //              this function returns true; otherwise false is returned.
                i->flush();
            }
        }
    });
}
} // end namespace SMiB

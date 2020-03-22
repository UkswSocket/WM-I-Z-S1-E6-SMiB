#ifndef MESSENGERSERVER_H
#define MESSENGERSERVER_H

// main article for the server part is:
// https://docs.microsoft.com/en-us/windows/win32/winsock/complete-server-code
// there are a lot of information of why I used one over other methods and moreover
// it's one and only one source of information about socket programming
// for the windows applications
#include <QTcpServer>

namespace SMiB {

// magic method to include headers in the .cpp files
// for the memory saving
class MessengerSocket;

class MessengerServer : public QTcpServer
{
public:
    MessengerServer(QObject *parent = nullptr);
    // Here we go again
    bool startServer(quint16 port);

protected:
    // as seen this method provide to handle connection
    // independent each other
    void incomingConnection(qintptr handle);

private:
    // Here is list not how in the c++ but like in the python
    // it's realised on the list of the object but the same
    // types, not possible to put different datatypes
    // https://doc.qt.io/qt-5/qlist.html
    QList<MessengerSocket *> mSockets;
};
} // end namespace SMiB
#endif // MESSENGERSERVER_H

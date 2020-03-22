#include "MessengerSocket.h"

namespace SMiB {

MessengerSocket::MessengerSocket(quintptr handle, QObject *parent)
    : QTcpSocket(parent)
{
    // this one initialization I need to get iD's of the users in the messanger
    setSocketDescriptor(handle);

    // here is used lambda function to read all the prompted messeges from the users
    // realised by using signals and slots. it's mean when something appear in one part
    // it's called another part (methods, instance whatever you want)
    // more info: https://doc.qt.io/qt-5/signalsandslots.html
    connect(this, &MessengerSocket::readyRead, [&]() {
        emit mReadyRead(this);
    });

    // all you need to know about SocketState:
    // https://doc.qt.io/qt-5/qabstractsocket.html
    // used: enum QAbstractSocket::SocketState
    connect(this, &MessengerSocket::stateChanged, [&](int S) {
        emit isStateChanged(this, S);
    });
}
} // end namespace SMiB

#ifndef MESSENGERSOCKET_H
#define MESSENGERSOCKET_H

// Usefull information about TCP and UDP protocols
// as far as why I choosed TCP is obciuos
// https://docs.microsoft.com/en-us/windows/win32/api/winsock2/nf-winsock2-socket
#include <QTcpSocket>

namespace SMiB {

class MessengerSocket : public QTcpSocket
{
    Q_OBJECT
public:
    // Constructor initialization parent with nullptr as said c++11 standard
    // https://en.cppreference.com/w/cpp/language/nullptr
    // the main reason is nullptr is pvalue
    // so it's impossible to get address of it
    MessengerSocket(quintptr handle, QObject *parent = nullptr);

signals:
    // why here is a pointer? Cause someone can got an idea to send a whole movie
    // so I'd like to have capability to manage it's flow
    // why are the functions here without variables?
    // cause it's templates for the lambda functions to be used in the another class
    void mReadyRead(MessengerSocket *);
    void isStateChanged(MessengerSocket *, int);
};
} // end namespace SMiB

#endif // MESSENGERSOCKET_H

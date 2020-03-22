#include <QCoreApplication>
#include "MessengerServer.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Start the server and check
    // for the errors during start
    SMiB::MessengerServer mServer;
    if (!mServer.startServer(3333)) {
        qDebug() << "Error: "
                 << mServer.errorString();
        return 1;
    }
    qDebug() << "Server is ready.";

    return a.exec();
}

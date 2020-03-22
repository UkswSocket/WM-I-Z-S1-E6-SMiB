#include "widget.h"
#include "ui_widget.h"
#include "MessengerConnectionDialog.h"
#include <QTcpSocket>
#include <QTextStream>

namespace SMiB {

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    mSocket = new QTcpSocket(this);

    //
    connect(mSocket, &QTcpSocket::readyRead, [&]() {
        QTextStream T(mSocket);
        auto text = T.readAll();
        // and now something new, this one method is used to
        // send messages from server to the text field
        ui->textEdit->append(text);
    });
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_sendMsg_clicked()
{
    QTextStream T(mSocket);
    // Here we go again. Takes data from standart input stream
    // and place it to the string object
    T << ui->nickName->text() << ": " << ui->message->text();
    mSocket->flush();
    ui->message->clear();

}

void Widget::on_connectServer_clicked()
{
    MessengerConnectionDialog Dialog(this);
    if (Dialog.exec() == QDialog::Rejected) {
        return;
    }
    mSocket->connectToHost(Dialog.serverName(), Dialog.serverPort());
}
} // end namespace SMiB

#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class QTcpSocket;

namespace SMiB {

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_sendMsg_clicked();

    void on_connectServer_clicked();

private:
    Ui::Widget *ui;
    QTcpSocket *mSocket;
};
} // end namespace SMiB
#endif // WIDGET_H

#ifndef MESSENGERCONNECTIONDIALOG_H
#define MESSENGERCONNECTIONDIALOG_H

#include <QDialog>

namespace Ui {
class MessengerConnectionDialog;
}

namespace SMiB {

class MessengerConnectionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MessengerConnectionDialog(QWidget *parent = nullptr);
    ~MessengerConnectionDialog();

    // Just in case
    QString serverName() const;
    quint16 serverPort() const;

private slots:
    void on_confirmConnect_clicked();

    void on_cencelConnect_clicked();

private:
    Ui::MessengerConnectionDialog *ui;
    QString mServerName;
    quint16 mServerPort;
};

// information about inline functions:
// http://www.cplusplus.com/articles/2LywvCM9/
inline QString MessengerConnectionDialog::serverName() const
{
    return mServerName;
}

inline quint16 MessengerConnectionDialog::serverPort() const
{
    return mServerPort;
}
} // end namespace SMiB

#endif // MESSENGERCONNECTIONDIALOG_H

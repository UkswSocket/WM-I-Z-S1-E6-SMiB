#include "MessengerConnectionDialog.h"
#include "ui_MessengerConnectionDialog.h"

namespace SMiB {

MessengerConnectionDialog::MessengerConnectionDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MessengerConnectionDialog)
{
    ui->setupUi(this);
}

MessengerConnectionDialog::~MessengerConnectionDialog()
{
    delete ui;
}

void MessengerConnectionDialog::on_confirmConnect_clicked()
{
    mServerName = ui->serverName->text();
    mServerPort = ui->serverPort->value();
    accept();
}

void MessengerConnectionDialog::on_cencelConnect_clicked()
{
    reject();
}
} // end namespace SMiB

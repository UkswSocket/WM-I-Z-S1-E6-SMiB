/********************************************************************************
** Form generated from reading UI file 'MessengerConnectionDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSENGERCONNECTIONDIALOG_H
#define UI_MESSENGERCONNECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_MessengerConnectionDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *serverName;
    QFormLayout *formLayout;
    QLabel *label_2;
    QSpinBox *serverPort;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *confirmConnect;
    QPushButton *cencelConnect;

    void setupUi(QDialog *MessengerConnectionDialog)
    {
        if (MessengerConnectionDialog->objectName().isEmpty())
            MessengerConnectionDialog->setObjectName(QString::fromUtf8("MessengerConnectionDialog"));
        MessengerConnectionDialog->resize(300, 105);
        gridLayout = new QGridLayout(MessengerConnectionDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(MessengerConnectionDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        serverName = new QLineEdit(MessengerConnectionDialog);
        serverName->setObjectName(QString::fromUtf8("serverName"));

        horizontalLayout->addWidget(serverName);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(MessengerConnectionDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        serverPort = new QSpinBox(MessengerConnectionDialog);
        serverPort->setObjectName(QString::fromUtf8("serverPort"));
        serverPort->setMaximum(999999999);

        formLayout->setWidget(0, QFormLayout::FieldRole, serverPort);


        gridLayout->addLayout(formLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        confirmConnect = new QPushButton(MessengerConnectionDialog);
        confirmConnect->setObjectName(QString::fromUtf8("confirmConnect"));

        horizontalLayout_2->addWidget(confirmConnect);

        cencelConnect = new QPushButton(MessengerConnectionDialog);
        cencelConnect->setObjectName(QString::fromUtf8("cencelConnect"));

        horizontalLayout_2->addWidget(cencelConnect);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);


        retranslateUi(MessengerConnectionDialog);

        QMetaObject::connectSlotsByName(MessengerConnectionDialog);
    } // setupUi

    void retranslateUi(QDialog *MessengerConnectionDialog)
    {
        MessengerConnectionDialog->setWindowTitle(QApplication::translate("MessengerConnectionDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("MessengerConnectionDialog", "Server Name", nullptr));
        label_2->setText(QApplication::translate("MessengerConnectionDialog", "Server Port", nullptr));
        confirmConnect->setText(QApplication::translate("MessengerConnectionDialog", "Confirm", nullptr));
        cencelConnect->setText(QApplication::translate("MessengerConnectionDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MessengerConnectionDialog: public Ui_MessengerConnectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSENGERCONNECTIONDIALOG_H

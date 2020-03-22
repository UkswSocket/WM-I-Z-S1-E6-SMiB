/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *nickName;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *message;
    QPushButton *sendMsg;
    QPushButton *connectServer;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(500, 350);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        nickName = new QLineEdit(Widget);
        nickName->setObjectName(QString::fromUtf8("nickName"));

        horizontalLayout_2->addWidget(nickName);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        message = new QLineEdit(Widget);
        message->setObjectName(QString::fromUtf8("message"));

        horizontalLayout->addWidget(message);

        sendMsg = new QPushButton(Widget);
        sendMsg->setObjectName(QString::fromUtf8("sendMsg"));

        horizontalLayout->addWidget(sendMsg);

        connectServer = new QPushButton(Widget);
        connectServer->setObjectName(QString::fromUtf8("connectServer"));

        horizontalLayout->addWidget(connectServer);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Kulpownicy Messenger", nullptr));
        label->setText(QApplication::translate("Widget", "NickName", nullptr));
        label_2->setText(QApplication::translate("Widget", "Message", nullptr));
        sendMsg->setText(QApplication::translate("Widget", "Send", nullptr));
        connectServer->setText(QApplication::translate("Widget", "Connect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

/********************************************************************************
** Form generated from reading UI file 'newuserdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWUSERDIALOG_H
#define UI_NEWUSERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newuserDialog
{
public:
    QLabel *label;
    QPushButton *pushButton_register;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_user;
    QLineEdit *lineEdit_NUsername;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Password;
    QLineEdit *lineEdit_NPassword;
    QPushButton *pushButton;

    void setupUi(QDialog *newuserDialog)
    {
        if (newuserDialog->objectName().isEmpty())
            newuserDialog->setObjectName(QStringLiteral("newuserDialog"));
        newuserDialog->resize(400, 300);
        label = new QLabel(newuserDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 20, 191, 31));
        pushButton_register = new QPushButton(newuserDialog);
        pushButton_register->setObjectName(QStringLiteral("pushButton_register"));
        pushButton_register->setGeometry(QRect(190, 230, 141, 27));
        layoutWidget = new QWidget(newuserDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(45, 60, 291, 141));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_user = new QLabel(layoutWidget);
        label_user->setObjectName(QStringLiteral("label_user"));

        horizontalLayout->addWidget(label_user);

        lineEdit_NUsername = new QLineEdit(layoutWidget);
        lineEdit_NUsername->setObjectName(QStringLiteral("lineEdit_NUsername"));

        horizontalLayout->addWidget(lineEdit_NUsername);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_Password = new QLabel(layoutWidget);
        label_Password->setObjectName(QStringLiteral("label_Password"));

        horizontalLayout_2->addWidget(label_Password);

        lineEdit_NPassword = new QLineEdit(layoutWidget);
        lineEdit_NPassword->setObjectName(QStringLiteral("lineEdit_NPassword"));
        lineEdit_NPassword->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_NPassword);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(newuserDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 230, 121, 31));

        retranslateUi(newuserDialog);

        QMetaObject::connectSlotsByName(newuserDialog);
    } // setupUi

    void retranslateUi(QDialog *newuserDialog)
    {
        newuserDialog->setWindowTitle(QApplication::translate("newuserDialog", "Dialog", 0));
        label->setText(QApplication::translate("newuserDialog", "NEW USER REGISTERATION", 0));
        pushButton_register->setText(QApplication::translate("newuserDialog", "register", 0));
        label_user->setText(QApplication::translate("newuserDialog", "Username", 0));
        label_Password->setText(QApplication::translate("newuserDialog", "Password", 0));
        pushButton->setText(QApplication::translate("newuserDialog", "back to login", 0));
    } // retranslateUi

};

namespace Ui {
    class newuserDialog: public Ui_newuserDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWUSERDIALOG_H

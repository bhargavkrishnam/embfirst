/********************************************************************************
** Form generated from reading UI file 'secdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECDIALOG_H
#define UI_SECDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_secDialog
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *secDialog)
    {
        if (secDialog->objectName().isEmpty())
            secDialog->setObjectName(QStringLiteral("secDialog"));
        secDialog->resize(400, 300);
        label = new QLabel(secDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 60, 291, 81));
        label->setStyleSheet(QStringLiteral("font: 75 italic 26pt \"Ubuntu\";"));
        pushButton = new QPushButton(secDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 250, 101, 23));

        retranslateUi(secDialog);

        QMetaObject::connectSlotsByName(secDialog);
    } // setupUi

    void retranslateUi(QDialog *secDialog)
    {
        secDialog->setWindowTitle(QApplication::translate("secDialog", "Dialog", 0));
        label->setText(QApplication::translate("secDialog", "HELLO EMBEDDED DEVELOPERS", 0));
        pushButton->setText(QApplication::translate("secDialog", "back to login", 0));
    } // retranslateUi

};

namespace Ui {
    class secDialog: public Ui_secDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG_H

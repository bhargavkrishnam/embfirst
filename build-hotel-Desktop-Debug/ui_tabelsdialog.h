/********************************************************************************
** Form generated from reading UI file 'tabelsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABELSDIALOG_H
#define UI_TABELSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_tabelsDialog
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label;

    void setupUi(QDialog *tabelsDialog)
    {
        if (tabelsDialog->objectName().isEmpty())
            tabelsDialog->setObjectName(QStringLiteral("tabelsDialog"));
        tabelsDialog->resize(400, 312);
        pushButton = new QPushButton(tabelsDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 90, 151, 81));
        pushButton_2 = new QPushButton(tabelsDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 90, 141, 81));
        pushButton_3 = new QPushButton(tabelsDialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 210, 151, 81));
        pushButton_4 = new QPushButton(tabelsDialog);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(230, 210, 141, 81));
        label = new QLabel(tabelsDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(46, 19, 291, 31));

        retranslateUi(tabelsDialog);

        QMetaObject::connectSlotsByName(tabelsDialog);
    } // setupUi

    void retranslateUi(QDialog *tabelsDialog)
    {
        tabelsDialog->setWindowTitle(QApplication::translate("tabelsDialog", "Dialog", 0));
        pushButton->setText(QApplication::translate("tabelsDialog", "tabel1", 0));
        pushButton_2->setText(QApplication::translate("tabelsDialog", "table2", 0));
        pushButton_3->setText(QApplication::translate("tabelsDialog", "table3", 0));
        pushButton_4->setText(QApplication::translate("tabelsDialog", "table4", 0));
        label->setText(QApplication::translate("tabelsDialog", "SELECT ANY TABLE", 0));
    } // retranslateUi

};

namespace Ui {
    class tabelsDialog: public Ui_tabelsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABELSDIALOG_H

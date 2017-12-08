/********************************************************************************
** Form generated from reading UI file 'nonvegdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NONVEGDIALOG_H
#define UI_NONVEGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_NonvegDialog
{
public:
    QTableWidget *tableWidget;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit_non;
    QPushButton *pushButton_3;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_3;
    QSpinBox *spinBox_4;
    QSpinBox *spinBox_5;
    QSpinBox *spinBox_6;
    QSpinBox *spinBox_7;
    QSpinBox *spinBox_8;
    QSpinBox *spinBox_9;
    QSpinBox *spinBox_10;

    void setupUi(QDialog *NonvegDialog)
    {
        if (NonvegDialog->objectName().isEmpty())
            NonvegDialog->setObjectName(QStringLiteral("NonvegDialog"));
        NonvegDialog->resize(673, 487);
        tableWidget = new QTableWidget(NonvegDialog);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (tableWidget->rowCount() < 10)
            tableWidget->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setItem(3, 1, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setItem(4, 0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setItem(4, 1, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setItem(5, 0, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget->setItem(5, 1, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget->setItem(6, 0, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget->setItem(6, 1, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget->setItem(7, 0, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget->setItem(7, 1, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget->setItem(8, 0, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget->setItem(8, 1, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget->setItem(9, 0, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget->setItem(9, 1, __qtablewidgetitem35);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(5, 10, 651, 361));
        pushButton_2 = new QPushButton(NonvegDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(550, 450, 80, 23));
        pushButton = new QPushButton(NonvegDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(550, 410, 80, 23));
        lineEdit_non = new QLineEdit(NonvegDialog);
        lineEdit_non->setObjectName(QStringLiteral("lineEdit_non"));
        lineEdit_non->setGeometry(QRect(550, 380, 113, 23));
        pushButton_3 = new QPushButton(NonvegDialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(50, 430, 80, 23));
        pushButton_3->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 255);"));
        spinBox = new QSpinBox(NonvegDialog);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(236, 30, 91, 24));
        spinBox_2 = new QSpinBox(NonvegDialog);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(230, 60, 101, 24));
        spinBox_3 = new QSpinBox(NonvegDialog);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setGeometry(QRect(236, 90, 91, 24));
        spinBox_4 = new QSpinBox(NonvegDialog);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));
        spinBox_4->setGeometry(QRect(236, 120, 91, 24));
        spinBox_5 = new QSpinBox(NonvegDialog);
        spinBox_5->setObjectName(QStringLiteral("spinBox_5"));
        spinBox_5->setGeometry(QRect(236, 150, 91, 24));
        spinBox_6 = new QSpinBox(NonvegDialog);
        spinBox_6->setObjectName(QStringLiteral("spinBox_6"));
        spinBox_6->setGeometry(QRect(236, 180, 91, 24));
        spinBox_7 = new QSpinBox(NonvegDialog);
        spinBox_7->setObjectName(QStringLiteral("spinBox_7"));
        spinBox_7->setGeometry(QRect(236, 210, 91, 24));
        spinBox_8 = new QSpinBox(NonvegDialog);
        spinBox_8->setObjectName(QStringLiteral("spinBox_8"));
        spinBox_8->setGeometry(QRect(236, 240, 91, 24));
        spinBox_9 = new QSpinBox(NonvegDialog);
        spinBox_9->setObjectName(QStringLiteral("spinBox_9"));
        spinBox_9->setGeometry(QRect(236, 270, 91, 24));
        spinBox_10 = new QSpinBox(NonvegDialog);
        spinBox_10->setObjectName(QStringLiteral("spinBox_10"));
        spinBox_10->setGeometry(QRect(236, 300, 91, 24));

        retranslateUi(NonvegDialog);

        QMetaObject::connectSlotsByName(NonvegDialog);
    } // setupUi

    void retranslateUi(QDialog *NonvegDialog)
    {
        NonvegDialog->setWindowTitle(QApplication::translate("NonvegDialog", "Dialog", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("NonvegDialog", "MENU", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("NonvegDialog", "PRICE", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("NonvegDialog", "QUANTITY", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("NonvegDialog", "VAT", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("NonvegDialog", "Tax", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("NonvegDialog", "TOTAL", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("NonvegDialog", "1)", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("NonvegDialog", "2)", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("NonvegDialog", "3)", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("NonvegDialog", "4)", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem10->setText(QApplication::translate("NonvegDialog", "5)", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem11->setText(QApplication::translate("NonvegDialog", "6)", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem12->setText(QApplication::translate("NonvegDialog", "7)", 0));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem13->setText(QApplication::translate("NonvegDialog", "8)", 0));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem14->setText(QApplication::translate("NonvegDialog", "9)", 0));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem15->setText(QApplication::translate("NonvegDialog", "10)", 0));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(0, 0);
        ___qtablewidgetitem16->setText(QApplication::translate("NonvegDialog", "chicken biryani", 0));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(0, 1);
        ___qtablewidgetitem17->setText(QApplication::translate("NonvegDialog", "130 Rs (Full)", 0));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(1, 0);
        ___qtablewidgetitem18->setText(QApplication::translate("NonvegDialog", "mutton biryani", 0));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(1, 1);
        ___qtablewidgetitem19->setText(QApplication::translate("NonvegDialog", "200 Rs(Full)", 0));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(2, 0);
        ___qtablewidgetitem20->setText(QApplication::translate("NonvegDialog", "fish biryani", 0));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(2, 1);
        ___qtablewidgetitem21->setText(QApplication::translate("NonvegDialog", "250 Rs(Full)", 0));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(3, 0);
        ___qtablewidgetitem22->setText(QApplication::translate("NonvegDialog", "prawns biryani", 0));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->item(3, 1);
        ___qtablewidgetitem23->setText(QApplication::translate("NonvegDialog", "280 Rs(Full)", 0));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->item(4, 0);
        ___qtablewidgetitem24->setText(QApplication::translate("NonvegDialog", "egg biryani", 0));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->item(4, 1);
        ___qtablewidgetitem25->setText(QApplication::translate("NonvegDialog", "80 Rs(Full)", 0));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->item(5, 0);
        ___qtablewidgetitem26->setText(QApplication::translate("NonvegDialog", "chicken manchuriya", 0));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->item(5, 1);
        ___qtablewidgetitem27->setText(QApplication::translate("NonvegDialog", "45 Rs", 0));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->item(6, 0);
        ___qtablewidgetitem28->setText(QApplication::translate("NonvegDialog", "grilled chicken", 0));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget->item(6, 1);
        ___qtablewidgetitem29->setText(QApplication::translate("NonvegDialog", "135 Rs", 0));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget->item(7, 0);
        ___qtablewidgetitem30->setText(QApplication::translate("NonvegDialog", "chicken friedrice", 0));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget->item(7, 1);
        ___qtablewidgetitem31->setText(QApplication::translate("NonvegDialog", "40 Rs", 0));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget->item(8, 0);
        ___qtablewidgetitem32->setText(QApplication::translate("NonvegDialog", "tandoori", 0));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget->item(8, 1);
        ___qtablewidgetitem33->setText(QApplication::translate("NonvegDialog", "130 Rs", 0));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget->item(9, 0);
        ___qtablewidgetitem34->setText(QApplication::translate("NonvegDialog", "chicken legs ", 0));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget->item(9, 1);
        ___qtablewidgetitem35->setText(QApplication::translate("NonvegDialog", "110 Rs", 0));
        tableWidget->setSortingEnabled(__sortingEnabled);

        pushButton_2->setText(QApplication::translate("NonvegDialog", "Place Order", 0));
        pushButton->setText(QApplication::translate("NonvegDialog", "Grand Total", 0));
        pushButton_3->setText(QApplication::translate("NonvegDialog", "Go Back", 0));
    } // retranslateUi

};

namespace Ui {
    class NonvegDialog: public Ui_NonvegDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NONVEGDIALOG_H

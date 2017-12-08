/********************************************************************************
** Form generated from reading UI file 'vegdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEGDIALOG_H
#define UI_VEGDIALOG_H

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

class Ui_vegDialog
{
public:
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
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

    void setupUi(QDialog *vegDialog)
    {
        if (vegDialog->objectName().isEmpty())
            vegDialog->setObjectName(QStringLiteral("vegDialog"));
        vegDialog->resize(668, 499);
        tableWidget = new QTableWidget(vegDialog);
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
        tableWidget->setItem(0, 2, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setItem(3, 1, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setItem(4, 0, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setItem(4, 1, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget->setItem(5, 0, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget->setItem(5, 1, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget->setItem(6, 0, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget->setItem(6, 1, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget->setItem(7, 0, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget->setItem(7, 1, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget->setItem(8, 0, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget->setItem(8, 1, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget->setItem(9, 0, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget->setItem(9, 1, __qtablewidgetitem36);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 10, 641, 341));
        pushButton = new QPushButton(vegDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(530, 400, 80, 23));
        pushButton_2 = new QPushButton(vegDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(530, 440, 80, 23));
        lineEdit = new QLineEdit(vegDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(530, 370, 113, 23));
        pushButton_3 = new QPushButton(vegDialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 450, 80, 23));
        pushButton_3->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 255);\n"
"color: rgb(0, 0, 255);"));
        spinBox = new QSpinBox(vegDialog);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(250, 30, 91, 31));
        spinBox_2 = new QSpinBox(vegDialog);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(250, 60, 91, 31));
        spinBox_3 = new QSpinBox(vegDialog);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setGeometry(QRect(250, 90, 91, 31));
        spinBox_4 = new QSpinBox(vegDialog);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));
        spinBox_4->setGeometry(QRect(250, 120, 91, 31));
        spinBox_5 = new QSpinBox(vegDialog);
        spinBox_5->setObjectName(QStringLiteral("spinBox_5"));
        spinBox_5->setGeometry(QRect(250, 150, 91, 31));
        spinBox_6 = new QSpinBox(vegDialog);
        spinBox_6->setObjectName(QStringLiteral("spinBox_6"));
        spinBox_6->setGeometry(QRect(246, 183, 91, 31));
        spinBox_7 = new QSpinBox(vegDialog);
        spinBox_7->setObjectName(QStringLiteral("spinBox_7"));
        spinBox_7->setGeometry(QRect(246, 213, 91, 31));
        spinBox_8 = new QSpinBox(vegDialog);
        spinBox_8->setObjectName(QStringLiteral("spinBox_8"));
        spinBox_8->setGeometry(QRect(246, 243, 91, 31));
        spinBox_9 = new QSpinBox(vegDialog);
        spinBox_9->setObjectName(QStringLiteral("spinBox_9"));
        spinBox_9->setGeometry(QRect(246, 273, 91, 31));
        spinBox_10 = new QSpinBox(vegDialog);
        spinBox_10->setObjectName(QStringLiteral("spinBox_10"));
        spinBox_10->setGeometry(QRect(246, 303, 91, 31));

        retranslateUi(vegDialog);

        QMetaObject::connectSlotsByName(vegDialog);
    } // setupUi

    void retranslateUi(QDialog *vegDialog)
    {
        vegDialog->setWindowTitle(QApplication::translate("vegDialog", "Dialog", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("vegDialog", "MENU", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("vegDialog", "PRICE", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("vegDialog", "QUANTITY", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("vegDialog", "VAT", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("vegDialog", "TAX", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("vegDialog", "TOTAL", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("vegDialog", "0)", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("vegDialog", "1)", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("vegDialog", "2) ", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("vegDialog", "3)", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem10->setText(QApplication::translate("vegDialog", "5)", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem11->setText(QApplication::translate("vegDialog", "6)", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem12->setText(QApplication::translate("vegDialog", "7)", 0));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem13->setText(QApplication::translate("vegDialog", "8)", 0));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem14->setText(QApplication::translate("vegDialog", "9)", 0));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem15->setText(QApplication::translate("vegDialog", "10)", 0));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(0, 0);
        ___qtablewidgetitem16->setText(QApplication::translate("vegDialog", "chapathi", 0));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(0, 1);
        ___qtablewidgetitem17->setText(QApplication::translate("vegDialog", "20(2 pieces)", 0));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(1, 0);
        ___qtablewidgetitem18->setText(QApplication::translate("vegDialog", "alluparata", 0));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(1, 1);
        ___qtablewidgetitem19->setText(QApplication::translate("vegDialog", "30 RS", 0));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(2, 0);
        ___qtablewidgetitem20->setText(QApplication::translate("vegDialog", "geera rice", 0));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(2, 1);
        ___qtablewidgetitem21->setText(QApplication::translate("vegDialog", "50 Rs", 0));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(3, 0);
        ___qtablewidgetitem22->setText(QApplication::translate("vegDialog", "veg meals", 0));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->item(3, 1);
        ___qtablewidgetitem23->setText(QApplication::translate("vegDialog", "60 Rs", 0));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->item(4, 0);
        ___qtablewidgetitem24->setText(QApplication::translate("vegDialog", "veg biryani", 0));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->item(4, 1);
        ___qtablewidgetitem25->setText(QApplication::translate("vegDialog", "50 Rs", 0));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->item(5, 0);
        ___qtablewidgetitem26->setText(QApplication::translate("vegDialog", "veg friedrice", 0));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->item(5, 1);
        ___qtablewidgetitem27->setText(QApplication::translate("vegDialog", "30 Rs", 0));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->item(6, 0);
        ___qtablewidgetitem28->setText(QApplication::translate("vegDialog", "veg manchuriya", 0));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget->item(6, 1);
        ___qtablewidgetitem29->setText(QApplication::translate("vegDialog", "30 Rs", 0));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget->item(7, 0);
        ___qtablewidgetitem30->setText(QApplication::translate("vegDialog", "veg paneer rice", 0));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget->item(7, 1);
        ___qtablewidgetitem31->setText(QApplication::translate("vegDialog", "70 Rs", 0));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget->item(8, 0);
        ___qtablewidgetitem32->setText(QApplication::translate("vegDialog", "roti", 0));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget->item(8, 1);
        ___qtablewidgetitem33->setText(QApplication::translate("vegDialog", "30 Rs", 0));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget->item(9, 0);
        ___qtablewidgetitem34->setText(QApplication::translate("vegDialog", "dosa", 0));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget->item(9, 1);
        ___qtablewidgetitem35->setText(QApplication::translate("vegDialog", "30 Rs", 0));
        tableWidget->setSortingEnabled(__sortingEnabled);

        pushButton->setText(QApplication::translate("vegDialog", "GrandTotal", 0));
        pushButton_2->setText(QApplication::translate("vegDialog", "Place Order", 0));
        pushButton_3->setText(QApplication::translate("vegDialog", "Go Back ", 0));
    } // retranslateUi

};

namespace Ui {
    class vegDialog: public Ui_vegDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEGDIALOG_H

/********************************************************************************
** Form generated from reading UI file 'calci.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCI_H
#define UI_CALCI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calci
{
public:
    QWidget *centralWidget;
    QLineEdit *upper;
    QPushButton *one;
    QPushButton *two;
    QPushButton *plus;
    QPushButton *equals;
    QLineEdit *middle;
    QPushButton *three;
    QPushButton *four;
    QPushButton *mul;
    QPushButton *nine;
    QPushButton *eight;
    QPushButton *seven;
    QPushButton *minus;
    QPushButton *six;
    QPushButton *five;
    QPushButton *divide;
    QPushButton *zero;
    QPushButton *clear;
    QPushButton *modules;
    QPushButton *dot;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *calci)
    {
        if (calci->objectName().isEmpty())
            calci->setObjectName(QStringLiteral("calci"));
        calci->resize(232, 302);
        centralWidget = new QWidget(calci);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        upper = new QLineEdit(centralWidget);
        upper->setObjectName(QStringLiteral("upper"));
        upper->setGeometry(QRect(40, 10, 161, 51));
        one = new QPushButton(centralWidget);
        one->setObjectName(QStringLiteral("one"));
        one->setGeometry(QRect(40, 90, 41, 27));
        two = new QPushButton(centralWidget);
        two->setObjectName(QStringLiteral("two"));
        two->setGeometry(QRect(80, 90, 41, 27));
        plus = new QPushButton(centralWidget);
        plus->setObjectName(QStringLiteral("plus"));
        plus->setGeometry(QRect(160, 90, 41, 27));
        equals = new QPushButton(centralWidget);
        equals->setObjectName(QStringLiteral("equals"));
        equals->setGeometry(QRect(120, 210, 81, 27));
        middle = new QLineEdit(centralWidget);
        middle->setObjectName(QStringLiteral("middle"));
        middle->setGeometry(QRect(40, 60, 161, 31));
        three = new QPushButton(centralWidget);
        three->setObjectName(QStringLiteral("three"));
        three->setGeometry(QRect(120, 90, 41, 27));
        four = new QPushButton(centralWidget);
        four->setObjectName(QStringLiteral("four"));
        four->setGeometry(QRect(40, 120, 41, 27));
        mul = new QPushButton(centralWidget);
        mul->setObjectName(QStringLiteral("mul"));
        mul->setGeometry(QRect(160, 150, 41, 27));
        nine = new QPushButton(centralWidget);
        nine->setObjectName(QStringLiteral("nine"));
        nine->setGeometry(QRect(120, 150, 41, 27));
        eight = new QPushButton(centralWidget);
        eight->setObjectName(QStringLiteral("eight"));
        eight->setGeometry(QRect(80, 150, 41, 27));
        seven = new QPushButton(centralWidget);
        seven->setObjectName(QStringLiteral("seven"));
        seven->setGeometry(QRect(40, 150, 41, 27));
        minus = new QPushButton(centralWidget);
        minus->setObjectName(QStringLiteral("minus"));
        minus->setGeometry(QRect(160, 120, 41, 27));
        six = new QPushButton(centralWidget);
        six->setObjectName(QStringLiteral("six"));
        six->setGeometry(QRect(120, 120, 41, 27));
        five = new QPushButton(centralWidget);
        five->setObjectName(QStringLiteral("five"));
        five->setGeometry(QRect(80, 120, 41, 27));
        divide = new QPushButton(centralWidget);
        divide->setObjectName(QStringLiteral("divide"));
        divide->setGeometry(QRect(160, 180, 41, 27));
        zero = new QPushButton(centralWidget);
        zero->setObjectName(QStringLiteral("zero"));
        zero->setGeometry(QRect(40, 180, 41, 27));
        clear = new QPushButton(centralWidget);
        clear->setObjectName(QStringLiteral("clear"));
        clear->setGeometry(QRect(40, 210, 81, 27));
        modules = new QPushButton(centralWidget);
        modules->setObjectName(QStringLiteral("modules"));
        modules->setGeometry(QRect(120, 180, 41, 27));
        dot = new QPushButton(centralWidget);
        dot->setObjectName(QStringLiteral("dot"));
        dot->setGeometry(QRect(80, 180, 41, 27));
        calci->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(calci);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 232, 25));
        calci->setMenuBar(menuBar);
        mainToolBar = new QToolBar(calci);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        calci->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(calci);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        calci->setStatusBar(statusBar);

        retranslateUi(calci);

        QMetaObject::connectSlotsByName(calci);
    } // setupUi

    void retranslateUi(QMainWindow *calci)
    {
        calci->setWindowTitle(QApplication::translate("calci", "calci", 0));
        one->setText(QApplication::translate("calci", "1", 0));
        two->setText(QApplication::translate("calci", "2", 0));
        plus->setText(QApplication::translate("calci", "+", 0));
        equals->setText(QApplication::translate("calci", "=", 0));
        three->setText(QApplication::translate("calci", "3", 0));
        four->setText(QApplication::translate("calci", "4", 0));
        mul->setText(QApplication::translate("calci", "*", 0));
        nine->setText(QApplication::translate("calci", "9", 0));
        eight->setText(QApplication::translate("calci", "8", 0));
        seven->setText(QApplication::translate("calci", "7", 0));
        minus->setText(QApplication::translate("calci", "-", 0));
        six->setText(QApplication::translate("calci", "6", 0));
        five->setText(QApplication::translate("calci", "5", 0));
        divide->setText(QApplication::translate("calci", "/", 0));
        zero->setText(QApplication::translate("calci", "0", 0));
        clear->setText(QApplication::translate("calci", "CLR", 0));
        modules->setText(QApplication::translate("calci", "%", 0));
        dot->setText(QApplication::translate("calci", ".", 0));
    } // retranslateUi

};

namespace Ui {
    class calci: public Ui_calci {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCI_H

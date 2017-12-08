/********************************************************************************
** Form generated from reading UI file 'calci.ui'
**
** Created: Thu Apr 27 17:12:15 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCI_H
#define UI_CALCI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>

#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

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
            calci->setObjectName(QString::fromUtf8("calci"));
        calci->resize(244, 357);
        centralWidget = new QWidget(calci);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        upper = new QLineEdit(centralWidget);
        upper->setObjectName(QString::fromUtf8("upper"));
        upper->setGeometry(QRect(40, 10, 161, 51));
        one = new QPushButton(centralWidget);
        one->setObjectName(QString::fromUtf8("one"));
        one->setGeometry(QRect(40, 90, 41, 27));
        two = new QPushButton(centralWidget);
        two->setObjectName(QString::fromUtf8("two"));
        two->setGeometry(QRect(80, 90, 41, 27));
        plus = new QPushButton(centralWidget);
        plus->setObjectName(QString::fromUtf8("plus"));
        plus->setGeometry(QRect(160, 90, 41, 27));
        equals = new QPushButton(centralWidget);
        equals->setObjectName(QString::fromUtf8("equals"));
        equals->setGeometry(QRect(120, 210, 81, 27));
        middle = new QLineEdit(centralWidget);
        middle->setObjectName(QString::fromUtf8("middle"));
        middle->setGeometry(QRect(40, 60, 161, 31));
        three = new QPushButton(centralWidget);
        three->setObjectName(QString::fromUtf8("three"));
        three->setGeometry(QRect(120, 90, 41, 27));
        four = new QPushButton(centralWidget);
        four->setObjectName(QString::fromUtf8("four"));
        four->setGeometry(QRect(40, 120, 41, 27));
        mul = new QPushButton(centralWidget);
        mul->setObjectName(QString::fromUtf8("mul"));
        mul->setGeometry(QRect(160, 150, 41, 27));
        nine = new QPushButton(centralWidget);
        nine->setObjectName(QString::fromUtf8("nine"));
        nine->setGeometry(QRect(120, 150, 41, 27));
        eight = new QPushButton(centralWidget);
        eight->setObjectName(QString::fromUtf8("eight"));
        eight->setGeometry(QRect(80, 150, 41, 27));
        seven = new QPushButton(centralWidget);
        seven->setObjectName(QString::fromUtf8("seven"));
        seven->setGeometry(QRect(40, 150, 41, 27));
        minus = new QPushButton(centralWidget);
        minus->setObjectName(QString::fromUtf8("minus"));
        minus->setGeometry(QRect(160, 120, 41, 27));
        six = new QPushButton(centralWidget);
        six->setObjectName(QString::fromUtf8("six"));
        six->setGeometry(QRect(120, 120, 41, 27));
        five = new QPushButton(centralWidget);
        five->setObjectName(QString::fromUtf8("five"));
        five->setGeometry(QRect(80, 120, 41, 27));
        divide = new QPushButton(centralWidget);
        divide->setObjectName(QString::fromUtf8("divide"));
        divide->setGeometry(QRect(160, 180, 41, 27));
        zero = new QPushButton(centralWidget);
        zero->setObjectName(QString::fromUtf8("zero"));
        zero->setGeometry(QRect(40, 180, 41, 27));
        clear = new QPushButton(centralWidget);
        clear->setObjectName(QString::fromUtf8("clear"));
        clear->setGeometry(QRect(40, 210, 81, 27));
        modules = new QPushButton(centralWidget);
        modules->setObjectName(QString::fromUtf8("modules"));
        modules->setGeometry(QRect(120, 180, 41, 27));
        dot = new QPushButton(centralWidget);
        dot->setObjectName(QString::fromUtf8("dot"));
        dot->setGeometry(QRect(80, 180, 41, 27));
        calci->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(calci);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 244, 19));
        calci->setMenuBar(menuBar);
        mainToolBar = new QToolBar(calci);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        calci->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(calci);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        calci->setStatusBar(statusBar);

        retranslateUi(calci);

        QMetaObject::connectSlotsByName(calci);
    } // setupUi

    void retranslateUi(QMainWindow *calci)
    {
        calci->setWindowTitle(QApplication::translate("calci", "calci", 0, QApplication::UnicodeUTF8));
        one->setText(QApplication::translate("calci", "1", 0, QApplication::UnicodeUTF8));
        two->setText(QApplication::translate("calci", "2", 0, QApplication::UnicodeUTF8));
        plus->setText(QApplication::translate("calci", "+", 0, QApplication::UnicodeUTF8));
        equals->setText(QApplication::translate("calci", "=", 0, QApplication::UnicodeUTF8));
        three->setText(QApplication::translate("calci", "3", 0, QApplication::UnicodeUTF8));
        four->setText(QApplication::translate("calci", "4", 0, QApplication::UnicodeUTF8));
        mul->setText(QApplication::translate("calci", "*", 0, QApplication::UnicodeUTF8));
        nine->setText(QApplication::translate("calci", "9", 0, QApplication::UnicodeUTF8));
        eight->setText(QApplication::translate("calci", "8", 0, QApplication::UnicodeUTF8));
        seven->setText(QApplication::translate("calci", "7", 0, QApplication::UnicodeUTF8));
        minus->setText(QApplication::translate("calci", "-", 0, QApplication::UnicodeUTF8));
        six->setText(QApplication::translate("calci", "6", 0, QApplication::UnicodeUTF8));
        five->setText(QApplication::translate("calci", "5", 0, QApplication::UnicodeUTF8));
        divide->setText(QApplication::translate("calci", "/", 0, QApplication::UnicodeUTF8));
        zero->setText(QApplication::translate("calci", "0", 0, QApplication::UnicodeUTF8));
        clear->setText(QApplication::translate("calci", "CLR", 0, QApplication::UnicodeUTF8));
        modules->setText(QApplication::translate("calci", "%", 0, QApplication::UnicodeUTF8));
        dot->setText(QApplication::translate("calci", ".", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class calci: public Ui_calci {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCI_H

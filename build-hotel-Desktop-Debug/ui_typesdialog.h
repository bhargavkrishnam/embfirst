/********************************************************************************
** Form generated from reading UI file 'typesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TYPESDIALOG_H
#define UI_TYPESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_typesDialog
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QDialog *typesDialog)
    {
        if (typesDialog->objectName().isEmpty())
            typesDialog->setObjectName(QStringLiteral("typesDialog"));
        typesDialog->resize(562, 300);
        pushButton = new QPushButton(typesDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 80, 121, 31));
        pushButton_2 = new QPushButton(typesDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 130, 131, 31));
        label = new QLabel(typesDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(86, 19, 331, 41));
        label->setStyleSheet(QLatin1String("font: oblique 26pt \"Sans Serif\";\n"
"text-decoration: underline;"));

        retranslateUi(typesDialog);

        QMetaObject::connectSlotsByName(typesDialog);
    } // setupUi

    void retranslateUi(QDialog *typesDialog)
    {
        typesDialog->setWindowTitle(QApplication::translate("typesDialog", "Dialog", 0));
        pushButton->setText(QApplication::translate("typesDialog", "VEGETERIAN ", 0));
        pushButton_2->setText(QApplication::translate("typesDialog", "NON-VEGETERIAN", 0));
        label->setText(QApplication::translate("typesDialog", " TODAY'S SPECIALS", 0));
    } // retranslateUi

};

namespace Ui {
    class typesDialog: public Ui_typesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TYPESDIALOG_H

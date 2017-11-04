#ifndef VEGDIALOG_H
#define VEGDIALOG_H

#include <QDialog>
#include "vegdialog.h"

namespace Ui {
class vegDialog;
}

class vegDialog : public QDialog
{
    Q_OBJECT

public:
    explicit vegDialog(QWidget *parent = 0);
    ~vegDialog();

private slots:
    void on_spinBox_valueChanged(int arg1);

    void on_spinBox_2_valueChanged(int arg1);

    void on_spinBox_3_valueChanged(int arg1);

    void on_spinBox_4_valueChanged(int arg1);

    void on_spinBox_5_valueChanged(int arg1);

    void on_pushButton_3_clicked();

    void on_spinBox_6_valueChanged(int arg1);

    void on_spinBox_7_valueChanged(int arg1);

    void on_spinBox_8_valueChanged(int arg1);

    void on_spinBox_9_valueChanged(int arg1);

    void on_spinBox_10_valueChanged(int arg1);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::vegDialog *ui;

};

#endif // VEGDIALOG_H

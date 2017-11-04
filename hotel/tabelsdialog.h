#ifndef TABELSDIALOG_H
#define TABELSDIALOG_H

#include <QDialog>
#include "typesdialog.h"

namespace Ui {
class tabelsDialog;
}

class tabelsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit tabelsDialog(QWidget *parent = 0);
    ~tabelsDialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::tabelsDialog *ui;

    typesDialog  *tydailog;
};

#endif // TABELSDIALOG_H

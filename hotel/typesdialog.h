#ifndef TYPESDIALOG_H
#define TYPESDIALOG_H

#include <QDialog>
#include "vegdialog.h"
#include "nonvegdialog.h"

namespace Ui {
class typesDialog;
}

class typesDialog : public QDialog
{
    Q_OBJECT

public:
    explicit typesDialog(QWidget *parent = 0);
    ~typesDialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::typesDialog *ui;
     vegDialog *veggdialog;
     NonvegDialog *nonvgdialog;
};

#endif // TYPESDIALOG_H

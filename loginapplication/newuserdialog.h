#ifndef NEWUSERDIALOG_H
#define NEWUSERDIALOG_H

#include <QDialog>

namespace Ui {
class newuserDialog;
}

class newuserDialog : public QDialog
{
    Q_OBJECT

public:
    explicit newuserDialog(QWidget *parent = 0);
    ~newuserDialog();

private slots:
    //void on__register_clicked();

    void on_pushButton_register_clicked();

    void on_pushButton_clicked();

private:
    Ui::newuserDialog *ui;
};

#endif // NEWUSERDIALOG_H

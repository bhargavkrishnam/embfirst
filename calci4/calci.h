#ifndef CALCI_H
#define CALCI_H

#include <QMainWindow>

namespace Ui {
class calci;
}

class calci : public QMainWindow
{
    Q_OBJECT

public:
    explicit calci(QWidget *parent = 0);
    ~calci();

private slots:
    void on_one_clicked();

    void on_two_clicked();

    void on_equals_clicked();

    void on_plus_clicked();

    void on_minus_clicked();

    void on_mul_clicked();

    void on_divide_clicked();

    void on_three_clicked();

    void on_four_clicked();

    void on_five_clicked();



    void on_seven_clicked();

    void on_eight_clicked();

    void on_nine_clicked();

    void on_zero_clicked();

    void on_six_clicked();

    void on_clear_clicked();

    void on_modules_clicked();

    void on_dot_clicked();




private:
    Ui::calci *ui;
};

#endif // CALCI_H

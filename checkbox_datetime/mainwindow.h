#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_checkBox_min_clicked();

   void on_checkbox_max_clicked();



    void on_dateTimeEdit_2_dateTimeChanged(const QDateTime &dateTime);

   // void on_dateTimeEdit_2_dateChanged(const QDate &date);

    void on_dateTimeEdit_3_dateTimeChanged(const QDateTime &dateTime);

    void on_pushButton_clicked();

    void on_dateTimeEdit_dateTimeChanged(const QDateTime &dateTime);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

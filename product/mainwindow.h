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
    //void on_pushButton_clicked();

    void on_pushButton_add_clicked();

   void on_pushButton_update_clicked();

    void on_pushButton_save_clicked();

    void on_pushButton_close_clicked();

    void on_tableWidget_cellClicked(int row, int column);

   // void on_pushButton_remove_clicked();

    //void on_tableWidget_activated(const QModelIndex &index);

    void on_tableWidget_customContextMenuRequested(const QPoint &pos);

    void on_pushButton_send_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

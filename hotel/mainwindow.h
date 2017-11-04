#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "tabelsdialog.h"
//#include "typesdialog.h"

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
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    //secDialog *secodialog;
    tabelsDialog *tabdialog;
   // typesDialog  *typdailog;
};

#endif // MAINWINDOW_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"QTcpSocket"
#include"qtcpserver.h"
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
    void on_pushButton_clicked();
    void StartReading();
    void AcceptConnection();
private:
    Ui::MainWindow *ui;
    QTcpServer *Server;
    QTcpSocket *Socket;

};

#endif // MAINWINDOW_H

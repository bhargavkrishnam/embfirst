#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tabelsdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    hide();
    tabdialog = new tabelsDialog(this);
    tabdialog->show();
}

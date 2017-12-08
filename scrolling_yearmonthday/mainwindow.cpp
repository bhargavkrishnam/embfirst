#include "mainwindow.h"
#include "ui_mainwindow.h"

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


QString stryears,strdays;

void MainWindow::on_columnView_objectNameChanged(const QString &objectName)
{

}

void MainWindow::on_spinBox_valueChanged(const QString &arg1)
{
    strdays = arg1;
}

void MainWindow::on_spinBox_2_valueChanged(const QString &arg1)
{
     stryears = arg1;

}

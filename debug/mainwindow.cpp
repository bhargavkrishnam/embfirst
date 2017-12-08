#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Qstring str1,str2,str3;


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString a,b;
    int c;
    a=ui->lineEdit->text();
    int z=a.toInt();
    b=ui->lineEdit_2->text();
    int x=b.toInt();

    c=z+x;
    ui->lineEdit_3->setText(QString::number(c));


}

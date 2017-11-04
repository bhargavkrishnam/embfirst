#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDateTime>
#include <QTextStream>
#include "string.h"
#include <stdio.h>

#include"QDebug"
QDateTime da1,da2;
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

QDateTime  datetimemin,datetimeuser,datetimemax;

void MainWindow::on_checkBox_min_clicked()
{

       //if(datetimemin == datetimeuser)
       //{

         if(datetimemin>datetimeuser)
         {
             QMessageBox::information(this ,"minimum"," not in minimum range....");
          }
        else
         {
            QMessageBox::information(this ,"minimum","  within minimum range....");
         }

       // QMessageBox::information(this ,"minimum","the given date and time are equal......");
      //}
}

void MainWindow::on_dateTimeEdit_2_dateTimeChanged(const QDateTime &dateTime)
{
    datetimemin=dateTime;
    qDebug()<<dateTime<<"datetime"<<endl<<da1;
    //qDebug()<<"hi";
}

void MainWindow::on_dateTimeEdit_3_dateTimeChanged(const QDateTime &dateTime)
{
   datetimeuser=dateTime;
   qDebug()<<dateTime<<"datetime"<<endl<<da1;
}

void MainWindow::on_pushButton_clicked()
{
    if(datetimemin>datetimeuser)
    {
     QMessageBox::information(this,"minimum","this is not in range");

    }
    else
    {
        QMessageBox::information(this,"minimum","this is in minimumrange");
    }
}

void MainWindow::on_checkbox_max_clicked()
{
    if(datetimeuser<datetimemax)
    {
     QMessageBox::information(this,"minimum","this is in maximum range");

    }
    else
    {
        QMessageBox::information(this,"minimum","this is not in  maxmimum range");
    }
}

void MainWindow::on_dateTimeEdit_dateTimeChanged(const QDateTime &dateTime)
{
    datetimemax=dateTime;
    qDebug()<<dateTime<<"datetime"<<endl<<da1;
}

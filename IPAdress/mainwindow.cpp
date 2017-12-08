#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QCheckBox>


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

   QString line1 = ui->lineEdit->text();
   int line11 = line1.toInt();

   QString line2 = ui->lineEdit_2->text();
   int line22 = line2.toInt();

   QString line3 = ui->lineEdit_3->text();
   int line33 = line3.toInt();

   QString line4= ui->lineEdit_4->text();
   int line44 = line4.toInt();

if(((line11>0 && line11<=255) &&(line22>=0 && line22<=255) && (line33>=0 && line33<=255) &&(line44>=0 && line44<=255)))
{
      QMessageBox::information(this ,"address","entered IP Address is correct.. ");
}
 else
{
       QMessageBox::information(this ,"address","entered IP Address is wrong.. ");
}

}


void MainWindow::on_checkBox_clicked()
{
    QString line1 = ui->lineEdit->text();
    int line11 = line1.toInt();

    QString line2 = ui->lineEdit_2->text();
    int line22 = line2.toInt();

    QString line3 = ui->lineEdit_3->text();
    int line33 = line3.toInt();

    QString line4= ui->lineEdit_4->text();
    int line44 = line4.toInt();

    if (ui->checkBox->isChecked())
        {

         if(((line11>0 && line11<=255) &&(line22>=0 && line22<=255) && (line33>=0 && line33<=255) &&(line44>=0 && line44<=255)))
          {
              QMessageBox::information(this ,"address","entered IP Address is correct.. ");
          }
          else
          {
              QMessageBox::information(this ,"address","entered IP Address is wrong.. ");
          }
       }
}

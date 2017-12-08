#include "newuserdialog.h"
#include "ui_newuserdialog.h"
#include "mainwindow.h"
#include <QFile>
#include <QMessageBox>
#include<QTextStream>
#include<QIODevice>

newuserDialog::newuserDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newuserDialog)
{
    ui->setupUi(this);
}

newuserDialog::~newuserDialog()
{
    delete ui;
}

int s=2;  QString text11,text22;
void newuserDialog::on_pushButton_register_clicked()
{
    QString Username = ui->lineEdit_NUsername->text();
    QString Password = ui->lineEdit_NPassword->text();

    QFile file("/home/bhargava/qt working/loginapplication/registerdata.txt");

   if(file.open(QIODevice::ReadOnly ))
       {
          QTextStream in(&file);
          while(!in.atEnd())
          {
           text11 =in.readLine();
           text22=in.readLine();

              if(text11 == Username && text22 == Password)
               {
                   s=1; //

               }
          }
       }
     file.close();

      if(s==2)    // checking for already exist or not
      {

          if(file.open(QIODevice::WriteOnly))
          {
               QTextStream out(&file);

               out<<Username<<endl;
               out<<Password<<endl;


          QMessageBox::information(this, "Register","your username and password succesful....");

          }

       }
      if(s==1)
     {
      QMessageBox::information(this,"Register","newusername and password is already exists");
     }
       file.close();
}


void newuserDialog::on_pushButton_clicked()
{

   hide();
  MainWindow *main = new MainWindow(this);
    main->show();
}

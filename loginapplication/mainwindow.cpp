#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
//#include <QTimer>
//#include <QDateTime>
#include"newuserdialog.h"

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

QString text,text1;
void MainWindow::on_pushButton_Login_clicked()
{
    QString Username = ui->lineEdit_username->text();
    QString Password = ui->lineEdit_Password->text();

    QFile file("/home/bhargava/qt working/loginapplication/registerdata.txt");

    if(file.open(QIODevice::ReadOnly))
        {
           QTextStream in(&file);
           while(!in.atEnd())
           {
             text =in.readLine();
             text1=in.readLine();

             if(Username == text && Password == text1)
              {
                      //QMessageBox::information(this,"Login","wait loging..........");
                   hide();
                   secodialog = new secDialog(this);
                   secodialog->show();
                   //ui->statusBar->showMessage("wait logging.......",3000);
              }
             else
             {
              QMessageBox::warning(this,"Login","username and password is wrong...");
              // ui->statusBar->showMessage("username and password is wrong...",3000);
             }
          }
    }
    file.close();
}

void MainWindow::on_pushButton_NewUserlogin_clicked()
{
         hide();
        newuserdialog = new newuserDialog(this);
        newuserdialog->show();

}


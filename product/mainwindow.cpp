#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QString>
#include<QTableWidget>
#include<QDebug>
#include<QFile>
#include<QTextStream>
#include<QMenu>
#include<QMessageBox>
#include<QAction>
#include<QtCore>
#include<QPoint>
#include<QWidget>
#include<QStringList>
#include<QSplitter>
#include<QList>
#include<QDoubleValidator>
#include"QTcpSocket"
#include<QRegExpValidator>


int i=1;

int j;

QString str0,str1,str2,str3;

QTcpSocket *socket;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /////////////////////////////////////////////////////////////////////////////////////////////////////////

    ui->tableWidget->setContextMenuPolicy(Qt::CustomContextMenu);

    ui->tableWidget->setColumnCount(4);

    ui->lineEdit_credit->setText("0.000000");
    ui->lineEdit_mcapital->setText("0.000000");
    ui->lineEdit_volume->setText("0");

   // QRegExp re("[A-Za-z][1-9][0-9]{0,2}");
    //QRegExpValidator *validator = new QRegExpValidator(re, this);
    //ui->lineEdit_productname->setValidator(validator);


  //  QRegExp rx("“[A-Za-z][1-9][0-9]{0,2}”");
  // ui->lineEdit_productname->setValidator(new QRegExp(rx,this));

   ui->lineEdit_volume->setValidator(new QIntValidator(0,100000,this));
    ui->lineEdit_mcapital->setValidator(new QDoubleValidator);
   ui->lineEdit_credit->setValidator(new QDoubleValidator);

 QFile file("/home/bhargava/qt working/product/report.csv");
    if(file.open(QIODevice::ReadOnly))
    {
        QTextStream in(&file);
        while(!in.atEnd())
        {
            ui->tableWidget->setRowCount(i);
         QString text=in.readLine();
          QStringList stri= text.split(',');
      //    qDebug()<<"str"<<stri;
        //  qDebug()<<"i"<<i<<stri[0];
          ui->tableWidget->setItem(i-1,0,new QTableWidgetItem(stri[0]));
          ui->tableWidget->setItem(i-1,1,new QTableWidgetItem(stri[1]));
          ui->tableWidget->setItem(i-1,2,new QTableWidgetItem(stri[2]));
          ui->tableWidget->setItem(i-1,3,new QTableWidgetItem(stri[3]));
          i++;
          //qDebug()<<"ii"<<i;

        }
    }
    file.close();
   // QMessageBox::information(this,"starting","loaded saved data into tablewidget succesfull...");

 // for TCP/IP //

   socket=new QTcpSocket();
   socket->connectToHost("192.168.1.100",1234);

 }

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_add_clicked()
{
   QString str_product=ui->lineEdit_productname->text();
   QString str_volume=ui->lineEdit_volume->text();
   QString str_market=ui->lineEdit_mcapital->text();
   QString str_credit=ui->lineEdit_credit->text();

  QFile file2("/home/bhargava/qt working/product/report.csv");
  int b=2;

  if(file2.open(QIODevice::ReadOnly))
  {
      QTextStream in(&file2);
      while(!in.atEnd())
      {

       QString textadd=in.readLine();
       QStringList strin= textadd.split(',');

       if(strin[0] == str_product)
       {     b=1;

           QMessageBox::information(this,"ADD","ALREADY EXISTS....");
            //exit(0);
       }
      }
  }
file2.close();
     if(b==2)
      {
       ui->tableWidget->setRowCount(i);
       ui->tableWidget->setColumnCount(4);


       ui->tableWidget->setItem(i-1,0,new QTableWidgetItem(str_product));
       ui->tableWidget->setItem(i-1,1,new QTableWidgetItem(str_volume));
       ui->tableWidget->setItem(i-1,2,new QTableWidgetItem(str_market));
       ui->tableWidget->setItem(i-1,3,new QTableWidgetItem(str_credit));

       i++;

       ui->statusBar->showMessage("added to the table...",5000);

        ui->lineEdit_credit->setText("0.000000");
        ui->lineEdit_mcapital->setText("0.000000");
        ui->lineEdit_productname->setText("");
        ui->lineEdit_volume->setText("0");
     }

  //file2.close();
}

void MainWindow::on_pushButton_update_clicked()
{
    QString str00=ui->lineEdit_productname->text();
    QString str11=ui->lineEdit_volume->text();
    QString str22=ui->lineEdit_mcapital->text();
    QString str33=ui->lineEdit_credit->text();

  if(str00 !=NULL)
    {
    qDebug()<<"update";
    ui->tableWidget->setItem(j,0,new QTableWidgetItem(str00));
    ui->tableWidget->setItem(j,1,new QTableWidgetItem(str11));
    ui->tableWidget->setItem(j,2,new QTableWidgetItem(str22));
    ui->tableWidget->setItem(j,3,new QTableWidgetItem(str33));

    ui->statusBar->showMessage("Updated succesfully...",5000);

    ui->lineEdit_credit->setText("0.000000");
    ui->lineEdit_mcapital->setText("0.000000");
    ui->lineEdit_productname->setText("");
    ui->lineEdit_volume->setText("0");
    }
}
void MainWindow::on_pushButton_save_clicked()
{

    QFile file("/home/bhargava/qt working/product/report.csv");
    //qDebug()<<"file"<<"i"<<i;

    if(file.open(QIODevice::WriteOnly))
    {
        for(int k=0;k<i-1;k++)
        {
            qDebug()<<"k"<<k;
        QString product_str=ui->tableWidget->item(k,0)->text();
        QString volume_str=ui->tableWidget->item(k,1)->text();
        QString market_str =ui->tableWidget->item(k,2)->text();
        QString credit_str=ui->tableWidget->item(k,3)->text();


        QTextStream out(&file);
        out<<product_str<<","<<volume_str<<","<<market_str<<","
                                               <<credit_str<<endl;
        }
    }
    file.close();

    //QMessageBox::information(this,"SAVED"," the available data is saved successfully");
    ui->statusBar->showMessage("Saved successfully......",3000);

}

void MainWindow::on_pushButton_close_clicked()
{
   hide();
}

void MainWindow::on_tableWidget_cellClicked(int row, int column)
{
   j=row;
  // qDebug()<<"hai";

    str0=ui->tableWidget->item(row,0)->text();
    str1=ui->tableWidget->item(row,1)->text();
    str2=ui->tableWidget->item(row,2)->text();
    str3=ui->tableWidget->item(row,3)->text();

    //qDebug()<<"hai bhaar";


   ui->lineEdit_productname->setText(str0);
   ui->lineEdit_volume->setText(str1);
   ui->lineEdit_mcapital->setText(str2);
   ui->lineEdit_credit->setText(str3);

}
/*
void MainWindow::on_pushButton_remove_clicked()
{
    connect(ui->on_tableWidget_cellClicked,SIGNAL(released()),this,SLOT(item("")));
}

void MainWindow::on_tableWidget_activated(const QModelIndex &index)
{

}*/

void MainWindow::on_tableWidget_customContextMenuRequested(const QPoint &pos)
{

    //QPoint var=pos;
   qDebug()<<"del";

    QMenu *menu = new QMenu(this);

    QAction *delaction = new QAction("delete",this);
    //QAction *del=new QAction("del",this);
   // menu->addAction(del);
    menu->addAction(delaction);

    menu->exec(QCursor::pos());

    ui->tableWidget->removeRow(ui->tableWidget->currentRow());
    i--;
    ui->statusBar->showMessage("Deleted the row ...",5000);
}


void MainWindow::on_pushButton_send_clicked()////client
{

    QString strtc;
    QByteArray data;

   for(int t=0;t<i-1;t++)
   {
       for(int c=0;c<4;c++)
       {

         QTableWidgetItem *item=ui->tableWidget->item(t,c);

         strtc=item->text();


         data.append(strtc);
         data.append("\t");

       }
   }
        socket->write(data);
        socket->flush();

        ui->statusBar->showMessage("Sending data to server...",5000);
        qDebug()<<"sending";
}

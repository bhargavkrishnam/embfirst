#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QTcpServer"
#include <QTableWidget>
#include<QTableWidgetItem>
#include <QDebug>


int rowcount;
char client;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


  ////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ui->tableWidget->verticalHeader()->setVisible(false);
    Server = new QTcpServer(this);
    if(!Server->listen(QHostAddress::Any,1234)){
        qDebug() << "Server not started:" << Server->errorString();
    }else{
        qDebug() << "Server started";
    }
    connect(Server,SIGNAL(newConnection()),this,SLOT(AcceptConnection()));
}

MainWindow::~MainWindow()
{
    delete ui;
   Socket->close();
    Server->close();
}
void MainWindow::AcceptConnection()// server
{
            Socket = new QTcpSocket(this);
            Socket = Server->nextPendingConnection();
            if(!Socket){
                ui->statusBar->showMessage("Connection Refused",3000);
                qDebug() << "Connection Refused:" << Socket->errorString();
            }else{
                ui->statusBar->showMessage("Connectioned....",3000);
                qDebug() << "Connection Accepted:";
            }

            connect(Socket,SIGNAL(readyRead()),this,SLOT(StartReading()));
}

void MainWindow::StartReading()
{

            char buffer[512] = {0};
            Socket->read(buffer,Socket->bytesAvailable());

            qDebug()<<"reading from client: "<<buffer;
           // QString msg="RECEIVED........";
          //  Socket->write(QString(msg+"\n").toUtf8());
          //   qDebug()<<"writing to  client: "<<msg;

           QString string(buffer);
            QStringList stringlist = string.split("\t",QString::SkipEmptyParts);
            rowcount=1;
            int l=0,k=0;
            qDebug() << stringlist;
            for(int i=0;i<stringlist.count()/4;i++){
                ui->tableWidget->setRowCount(rowcount);
                ui->tableWidget->setColumnCount(4);
                 ui->tableWidget->setItem((rowcount-1),l,new QTableWidgetItem(stringlist.at(k++)));
                    ui->tableWidget->setItem((rowcount-1),l+1,new QTableWidgetItem(stringlist.at(k++)));
                    ui->tableWidget->setItem((rowcount-1),l+2,new QTableWidgetItem(stringlist.at(k++)));
                    ui->tableWidget->setItem((rowcount-1),l+3,new QTableWidgetItem(stringlist.at(k++)));
                rowcount++;
            }
           buffer[64]={0};
            ui->statusBar->showMessage("Started reading data....",3000);
}

void MainWindow::on_pushButton_clicked()
{
    this->close();
}


/*
 void client::sendRequest()
{
QString msg = msglineEdit->text();
tcpSocket->write(QString(msg + "\n").toUtf8());
qDebug() << "Sending to server: " << msg;
char buffer[1024] = {0};
// what will be read and how much? Could be that the message is still not arrived (or not processed by server) to server.
// of course waitForReadyRead could be used but that does not guarantees anything worth and suspends GUI.
tcpSocket->read(buffer, tcpSocket->bytesAvailable());
qDebug() << "Reading from server: " << buffer;
responsetextEdit->append( buffer);
}
*/

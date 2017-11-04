#include "vegdialog.h"
#include "ui_vegdialog.h"
#include "typesdialog.h"
#include <QTableWidget>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QIODevice>
#include"QDebug"
vegDialog::vegDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::vegDialog)
{
    ui->setupUi(this);
}

vegDialog::~vegDialog()
{
    delete ui;
}
int total[10]={0},quan=0, wholetot[10]={0},chap_pr=20;

void vegDialog::on_spinBox_valueChanged(int arg1)
{
  // int chap_pr =20;
   quan=arg1;
    total[0] = chap_pr*quan;
    int vat= ((5*total[0])/100);
     int tax= ((14*total[0])/100);

    wholetot[0] =total[0]+vat+tax;

  qDebug()<<"spi1";
  // QString str=total.toString(total);
  // ui->lineEdit_2->setText(QString::number(total));
   ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString::number(vat)));
    ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString::number(tax)));
   ui->tableWidget->setItem(0,5,new QTableWidgetItem(QString::number(wholetot[0])));
   //qDebug()<<"tot"<<total;
}

void vegDialog::on_spinBox_2_valueChanged(int arg1)
{
    int allparo_pr =30;

    quan=arg1;
    total[1]=allparo_pr*quan;
    int vat= ((5*total[1])/100);
     int tax= ((14*total[1])/100);

    wholetot[1] =total[1]+vat+tax;
     ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString::number(vat)));
      ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString::number(tax)));
    ui->tableWidget->setItem(1,5,new QTableWidgetItem(QString::number(wholetot[1])));
}

void vegDialog::on_spinBox_3_valueChanged(int arg1)
{
    int geera_pr =50;

    quan=arg1;
    total[2]=geera_pr*quan;
    int vat= ((5*total[2])/100);
     int tax= ((14*total[2])/100);

    wholetot[2] =total[2]+vat+tax;
     ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString::number(vat)));
      ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString::number(tax)));
    ui->tableWidget->setItem(2,5,new QTableWidgetItem(QString::number(wholetot[2])));
}

void vegDialog::on_spinBox_4_valueChanged(int arg1)
{
    int vegmeal_pr =60;

    quan=arg1;
    total[3]=vegmeal_pr*quan;
    int vat= ((5*total[3])/100);
     int tax= ((14*total[3])/100);

   wholetot[3] =total[3]+vat+tax;
    ui->tableWidget->setItem(3,3,new QTableWidgetItem(QString::number(vat)));
     ui->tableWidget->setItem(3,4,new QTableWidgetItem(QString::number(tax)));
    ui->tableWidget->setItem(3,5,new QTableWidgetItem(QString::number(wholetot[3])));
}

void vegDialog::on_spinBox_5_valueChanged(int arg1)
{
    int vegbiryani_pr =50;

    quan=arg1;
    total[4]=vegbiryani_pr*quan;
    int vat= ((5*total[4])/100);
     int tax= ((14*total[4])/100);

    wholetot[4] =total[4]+vat+tax;
     ui->tableWidget->setItem(4,3,new QTableWidgetItem(QString::number(vat)));
      ui->tableWidget->setItem(4,4,new QTableWidgetItem(QString::number(tax)));

    ui->tableWidget->setItem(4,5,new QTableWidgetItem(QString::number(wholetot[4])));
}

void vegDialog::on_spinBox_6_valueChanged(int arg1)
{
    int vegfried_pr =30;

    quan=arg1;
    total[5]=vegfried_pr*quan;
    int vat= ((5*total[5])/100);
     int tax= ((14*total[5])/100);

    wholetot[5] =total[5]+vat+tax;
     ui->tableWidget->setItem(5,3,new QTableWidgetItem(QString::number(vat)));
      ui->tableWidget->setItem(5,4,new QTableWidgetItem(QString::number(tax)));
    ui->tableWidget->setItem(5,5,new QTableWidgetItem(QString::number(wholetot[5])));
}

void vegDialog::on_spinBox_7_valueChanged(int arg1)
{
    int vegmanchu_pr =30;

    quan=arg1;
    total[6]=vegmanchu_pr*quan;
    int vat= ((5*total[6])/100);
     int tax= ((14*total[6])/100);

    wholetot[6] =total[6]+vat+tax;
     ui->tableWidget->setItem(6,3,new QTableWidgetItem(QString::number(vat)));
      ui->tableWidget->setItem(6,4,new QTableWidgetItem(QString::number(tax)));
    ui->tableWidget->setItem(6,5,new QTableWidgetItem(QString::number(wholetot[6])));
}

void vegDialog::on_spinBox_8_valueChanged(int arg1)
{
    int vegpaneer_pr =70;

    quan=arg1;
    total[7]=vegpaneer_pr*quan;
    int vat= ((5*total[7])/100);
     int tax= ((14*total[7])/100);

    wholetot[7] =total[7]+vat+tax;
     ui->tableWidget->setItem(7,3,new QTableWidgetItem(QString::number(vat)));
      ui->tableWidget->setItem(7,4,new QTableWidgetItem(QString::number(tax)));
    ui->tableWidget->setItem(7,5,new QTableWidgetItem(QString::number(wholetot[7])));
}

void vegDialog::on_spinBox_9_valueChanged(int arg1)
{
    int vegroti_pr =30;

    quan=arg1;
    total[8]=vegroti_pr*quan;
    int vat= ((5*total[8])/100);
     int tax= ((14*total[8])/100);

    wholetot[8] =total[8]+vat+tax;
     ui->tableWidget->setItem(8,3,new QTableWidgetItem(QString::number(vat)));
      ui->tableWidget->setItem(8,4,new QTableWidgetItem(QString::number(tax)));
    ui->tableWidget->setItem(8,5,new QTableWidgetItem(QString::number(wholetot[8])));
}

void vegDialog::on_spinBox_10_valueChanged(int arg1)
{
    int vegdosa_pr =30;

    quan=arg1;
    total[9]=vegdosa_pr*quan;
    int vat= ((5*total[9])/100);
     int tax= ((14*total[9])/100);

    wholetot[9] =total[9]+vat+tax;
     ui->tableWidget->setItem(9,3,new QTableWidgetItem(QString::number(vat)));
     ui->tableWidget->setItem(9,4,new QTableWidgetItem(QString::number(tax)));
     ui->tableWidget->setItem(9,5,new QTableWidgetItem(QString::number(wholetot[9])));
}

void vegDialog::on_pushButton_3_clicked()
{
        hide();
     typesDialog  *tydailog = new typesDialog(this);
       tydailog->show();
}

void vegDialog::on_pushButton_clicked()
{
    int grandsum=0;
    for(int i=0;i<10;i++)
    {
        grandsum+=wholetot[i];
    }

    ui->lineEdit->setText(QString::number(grandsum));
}

void vegDialog::on_pushButton_2_clicked()
{
  QFile file("/home/bhargava/qt working/hotel/placeord.txt");

  if(file.open(QIODevice::WriteOnly))
    {
       for(int i=0;i<10;i++) // rows
          {

           QString distota = ui->tableWidget->item(i,5)->text();

           int tot = distota.toInt();

            if(tot == 0 )
            {
                 continue;

               //QMessageBox::information(this,"Items","NOT SELECTED ANY ITEM....");
            }
           else
           {

             QString item=ui->tableWidget->item(i,0)->text();
             QString price=ui->tableWidget->item(i,1)->text();
             QString svat =ui->tableWidget->item(i,3)->text();
             QString tax =ui->tableWidget->item(i,4)->text();
             QString total =ui->tableWidget->item(i,5)->text();

             QTextStream out(&file);
 out<<(i)<<"item"<<"="<<item<<","<<"price"<<"="<<price<<","<<"svat"<<"="<<svat<<","<<"tax"<<"="<<tax<<","<<"total"<<"="<<total<<endl;
          /* out<<item<<endl;
           out<<price<<endl;
           out<<svat<<endl;
           out<<tax<<endl;
           out<<total<<endl;*/

           //QMessageBox::information(this, "ORDER","your order succesfully placed...!!!!.");
           }

      }
}
   file.close();
   QMessageBox::information(this, "ORDER","your order succesfully placed...!!!!.");
}

#include "nonvegdialog.h"
#include "ui_nonvegdialog.h"

#include "typesdialog.h"
#include <QString>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

NonvegDialog::NonvegDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NonvegDialog)
{
    ui->setupUi(this);
}

NonvegDialog::~NonvegDialog()
{
    delete ui;
}

int totalnon[10]={0},quan1=0,nonwholetot[10]={0};
void NonvegDialog::on_pushButton_3_clicked()
{
    hide();
 typesDialog  *tydailog = new typesDialog(this);
   tydailog->show();
}

void NonvegDialog::on_spinBox_valueChanged(int arg1)
{
    int chickenbiryani_pr =130;

    quan1=arg1;
    totalnon[0]=chickenbiryani_pr*quan1;
    int vat= ((5*totalnon[0])/100);
     int tax= ((14*totalnon[0])/100);

    nonwholetot[0] =totalnon[0]+vat+tax;
     ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString::number(vat)));
      ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString::number(tax)));
    ui->tableWidget->setItem(0,5,new QTableWidgetItem(QString::number(nonwholetot[0])));
}

void NonvegDialog::on_spinBox_2_valueChanged(int arg1)
{
    int muttonbiryani_pr =200;
     quan1=arg1;
     totalnon[1]=muttonbiryani_pr*quan1;
     int vat= ((5*totalnon[1])/100);
     int tax= ((14*totalnon[1])/100);
     nonwholetot[1] =totalnon[1]+vat+tax;
     ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString::number(vat)));
      ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString::number(tax)));
    ui->tableWidget->setItem(1,5,new QTableWidgetItem(QString::number(nonwholetot[1])));
}

void NonvegDialog::on_spinBox_3_valueChanged(int arg1)
{
    int fishbiryani_pr =250;

    quan1=arg1;
    totalnon[2]=fishbiryani_pr*quan1;
    int vat= ((5*totalnon[2])/100);
     int tax= ((14*totalnon[2])/100);

    nonwholetot[2] =totalnon[2]+vat+tax;
     ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString::number(vat)));
      ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString::number(tax)));
    ui->tableWidget->setItem(2,5,new QTableWidgetItem(QString::number(nonwholetot[2])));
}

void NonvegDialog::on_spinBox_4_valueChanged(int arg1)
{
    int prawnsbiryani_pr =280;
    quan1=arg1;
    totalnon[3]=prawnsbiryani_pr*quan1;
    int vat= ((5*totalnon[3])/100);
     int tax= ((14*totalnon[3])/100);

    nonwholetot[3] =totalnon[3]+vat+tax;
     ui->tableWidget->setItem(3,3,new QTableWidgetItem(QString::number(vat)));
      ui->tableWidget->setItem(3,4,new QTableWidgetItem(QString::number(tax)));
    ui->tableWidget->setItem(3,5,new QTableWidgetItem(QString::number(nonwholetot[3])));
}

void NonvegDialog::on_spinBox_5_valueChanged(int arg1)
{
    int eggbiryani_pr =80;

    quan1=arg1;
    totalnon[4]=eggbiryani_pr*quan1;
    int vat= ((5*totalnon[4])/100);
     int tax= ((14*totalnon[4])/100);

    nonwholetot[4] =totalnon[4]+vat+tax;
     ui->tableWidget->setItem(4,3,new QTableWidgetItem(QString::number(vat)));
      ui->tableWidget->setItem(4,4,new QTableWidgetItem(QString::number(tax)));
    ui->tableWidget->setItem(4,5,new QTableWidgetItem(QString::number(nonwholetot[4])));
}

void NonvegDialog::on_spinBox_6_valueChanged(int arg1)
{
    int chickenmanchuriya_pr =50;

    quan1=arg1;
    totalnon[5]=chickenmanchuriya_pr*quan1;
    int vat= ((5*totalnon[5])/100);
     int tax= ((14*totalnon[5])/100);

    nonwholetot[5] =totalnon[5]+vat+tax;
     ui->tableWidget->setItem(5,3,new QTableWidgetItem(QString::number(vat)));
      ui->tableWidget->setItem(5,4,new QTableWidgetItem(QString::number(tax)));
    ui->tableWidget->setItem(5,5,new QTableWidgetItem(QString::number(nonwholetot[5])));
}

void NonvegDialog::on_spinBox_7_valueChanged(int arg1)
{
    int grillledchicken_pr =130;

    quan1=arg1;
    totalnon[6]=grillledchicken_pr*quan1;
    int vat= ((5*totalnon[6])/100);
     int tax= ((14*totalnon[6])/100);

    nonwholetot[6] =totalnon[6]+vat+tax;
     ui->tableWidget->setItem(6,3,new QTableWidgetItem(QString::number(vat)));
      ui->tableWidget->setItem(6,4,new QTableWidgetItem(QString::number(tax)));
    ui->tableWidget->setItem(6,5,new QTableWidgetItem(QString::number(nonwholetot[6])));
}


void NonvegDialog::on_spinBox_8_valueChanged(int arg1)
{
    int chickenfried_pr =40;

    quan1=arg1;
    totalnon[7]=chickenfried_pr*quan1;
    int vat= ((5*totalnon[7])/100);
     int tax= ((14*totalnon[7])/100);

    nonwholetot[7] =totalnon[7]+vat+tax;
     ui->tableWidget->setItem(7,3,new QTableWidgetItem(QString::number(vat)));
      ui->tableWidget->setItem(7,4,new QTableWidgetItem(QString::number(tax)));
    ui->tableWidget->setItem(7,5,new QTableWidgetItem(QString::number(nonwholetot[7])));
}

void NonvegDialog::on_spinBox_9_valueChanged(int arg1)
{
    int tandoori_pr =130;

    quan1=arg1;
    totalnon[8]=tandoori_pr*quan1;
    int vat= ((5*totalnon[8])/100);
     int tax= ((14*totalnon[8])/100);

    nonwholetot[8] =totalnon[8]+vat+tax;
     ui->tableWidget->setItem(8,3,new QTableWidgetItem(QString::number(vat)));
      ui->tableWidget->setItem(8,4,new QTableWidgetItem(QString::number(tax)));
    ui->tableWidget->setItem(8,5,new QTableWidgetItem(QString::number(nonwholetot[8])));
}

void NonvegDialog::on_spinBox_10_valueChanged(int arg1)
{
    int chickenlegs_pr =110;

    quan1=arg1;
    totalnon[9]=chickenlegs_pr*quan1;
    int vat= ((5*totalnon[9])/100);
     int tax= ((14*totalnon[9])/100);
    nonwholetot[9] =totalnon[9]+vat+tax;

     ui->tableWidget->setItem(9,3,new QTableWidgetItem(QString::number(vat)));
     ui->tableWidget->setItem(9,4,new QTableWidgetItem(QString::number(tax)));
     ui->tableWidget->setItem(9,5,new QTableWidgetItem(QString::number(nonwholetot[9])));
}

void NonvegDialog::on_pushButton_clicked()
{
    int grandsumnon=0;
    for(int i=0;i<10;i++)
    {
        grandsumnon+=nonwholetot[i];
    }

    ui->lineEdit_non->setText(QString::number(grandsumnon));
}

void NonvegDialog::on_pushButton_2_clicked()
{
    QFile file("/home/bhargava/qt working/hotel/placeord.txt");

    if(file.open(QIODevice::WriteOnly))
      {
         for(int i=0;i<10;i++) // rows
            {

             QString distota1 = ui->tableWidget->item(i,5)->text();

             int tot1 = distota1.toInt();

              if(tot1 == 0 )
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
   out<<i<<"item"<<"="<<item<<","<<"price"<<"="<<price<<","<<"svat"<<"="<<svat<<","<<"tax"<<"="<<tax<<","<<"total"<<"="<<total<<endl;
            /* out<<item<<endl;
             out<<price<<endl;
             out<<svat<<endl;
             out<<tax<<endl;
             out<<total<<endl;*/

             QMessageBox::information(this, "ORDER","your order succesfully placed...!!!!.");
             }

        }
  }
     file.close();
     QMessageBox::information(this, "ORDER","your order succesfully placed...!!!!.");
}

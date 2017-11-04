#include "tabelsdialog.h"
#include "ui_tabelsdialog.h"
#include "typesdialog.h"

tabelsDialog::tabelsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tabelsDialog)
{
    ui->setupUi(this);
}

tabelsDialog::~tabelsDialog()
{
    delete ui;
}

void tabelsDialog::on_pushButton_clicked()
{
     hide();
     tydailog = new typesDialog(this);
     tydailog->show();
}
void tabelsDialog::on_pushButton_2_clicked()
{
    hide();
    tydailog = new typesDialog(this);
    tydailog->show();
}

void tabelsDialog::on_pushButton_3_clicked()
{

   hide();
  tydailog = new typesDialog(this);
   tydailog->show();
}
void tabelsDialog::on_pushButton_4_clicked()
{
    hide();
    tydailog = new typesDialog(this);
    tydailog->show();
}

#include "typesdialog.h"
#include "ui_typesdialog.h"

typesDialog::typesDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::typesDialog)
{
    ui->setupUi(this);
}

typesDialog::~typesDialog()
{
    delete ui;
}

void typesDialog::on_pushButton_clicked()
{
    hide();
    veggdialog = new vegDialog(this);
    veggdialog->show();
}

void typesDialog::on_pushButton_2_clicked()
{
    hide();
    nonvgdialog = new NonvegDialog(this);
    nonvgdialog->show();
}

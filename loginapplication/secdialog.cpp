#include "secdialog.h"
#include "ui_secdialog.h"
#include"mainwindow.h"

secDialog::secDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secDialog)
{
    ui->setupUi(this);
}

secDialog::~secDialog()
{
    delete ui;
}

void secDialog::on_pushButton_clicked()
{
    hide();
    MainWindow *main2=new MainWindow(this);
    main2->show();
}

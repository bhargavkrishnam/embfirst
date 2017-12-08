#include "calci.h"
#include "ui_calci.h"
#include"QDebug"
#include"string"
calci::calci(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::calci)
{
    ui->setupUi(this);
}

calci::~calci()
{
    delete ui;
}

QString var,varm,varb;  //Two strings for two lineedits
char a[20];        //To store operators
float num[20],res;  //To store operands and result
int i=0,j=0,k,len,mod,mod1,len_upper,len_lower;  //for loop purpose and storing of length




    void calci::on_one_clicked()
{
    varm=ui->middle->text();  //show typed numbers in lower lineedit
    var+='1';                //append these number to the string'var'
    varm+='1';               // append these number to the string'varm'
    ui->upper->setText(var);   //shows var string in upper lineedit
    ui->middle->setText(varm); //shows 'varm' string in lower lineedit


}

void calci::on_two_clicked()
{
    varm=ui->middle->text();
    var+='2';
     varm+='2';
    ui->upper->setText(var);
    ui->middle->setText(varm);


}



void calci::on_three_clicked()
{
    varm=ui->middle->text();
    var+='3';
    varm+='3';

    ui->upper->setText(var);
    ui->middle->setText(varm);


}

void calci::on_four_clicked()
{
    varm=ui->middle->text();
    var+='4';
    varm+='4';

    ui->upper->setText(var);
    ui->middle->setText(varm);


}

void calci::on_five_clicked()
{
    varm=ui->middle->text();
    var+='5';
    varm+='5';

    ui->upper->setText(var);
    ui->middle->setText(varm);

}
void calci::on_six_clicked()
{
    varm=ui->middle->text();
    var+='6';
    varm+='6';

    ui->upper->setText(var);
    ui->middle->setText(varm);

}


void calci::on_seven_clicked()
{
    varm=ui->middle->text();
    var+='7';
    varm+='7';

    ui->upper->setText(var);
    ui->middle->setText(varm);

}

void calci::on_eight_clicked()
{
    varm=ui->middle->text();
    var+='8';
    varm+='8';

    ui->upper->setText(var);
    ui->middle->setText(varm);


}

void calci::on_nine_clicked()
{
    varm=ui->middle->text();
    var+='9';
    varm+='9';

    ui->upper->setText(var);
    ui->middle->setText(varm);

}

void calci::on_zero_clicked()
{
    varm=ui->middle->text();
    var+='0';
    varm+='0';

    ui->upper->setText(var);
    ui->middle->setText(varm);


}









void calci::on_plus_clicked()
{
    num[j]=ui->middle->text().toFloat();  //Convert lower lineedit string into float and store in num[j] array
                                           //It stores the all operands in num array.


    //num[j]=ui->middle->text().toInt();
    a[j]='+';    //it stores the  operators
    j++;        //increment the array location

   // n2=ui->lower->text().toInt();
    //ui->lower->setText("");
    ui->middle->setText("");

    var+='+';
    ui->upper->setText(var);
    //res=n2+n1;


    //ui->lower->setText(QString::number(res));



}

void calci::on_minus_clicked()
{
    //num[i]=ui->middle->text().toInt();
    //a[i]='-';
    //i++;
    //num[j]=ui->middle->text().toInt();
    num[j]=ui->middle->text().toFloat();
    a[j]='-';
    j++;
    //n2=ui->lower->text().toInt();
    //ui->lower->setText("");
    ui->middle->setText("");

    var+='-';
    ui->upper->setText(var);
    //res=n2-n1;
    //ui->lower->setText(QString::number(res));

}

void calci::on_mul_clicked()
{
    //num[j]=ui->middle->text().toInt();
    num[j]=ui->middle->text().toFloat();
    a[j]='*';
    j++;

   // n2=ui->lower->text().toInt();
    //ui->lower->setText("");
    ui->middle->setText("");

    var+='*';
    ui->upper->setText(var);
}

void calci::on_divide_clicked()
{
    //num[j]=ui->middle->text().toInt();
    num[j]=ui->middle->text().toFloat();
    a[j]='/';
    j++;

   // n2=ui->lower->text().toInt();
    //ui->lower->setText("");
    ui->middle->setText("");

    var+='/';
    ui->upper->setText(var);
}



void calci::on_equals_clicked()
{
    //num[j]=ui->middle->text().toInt();
    num[j]=ui->middle->text().toFloat();  //stores the last operand
    len=strlen(a);
    for(i=0;i<len;i++)
    {
    if(a[i]=='+')
    {
    res=num[i]+num[i+1];
    num[i+1]=res;
    }
    if(a[i]=='-')
    {
    res=num[i]-num[i+1];
    num[i+1]=res;
    }

    if(a[i]=='*')
    {
    res=num[i]*num[i+1];
    num[i+1]=res;
    }

    if(a[i]=='/')
    {
    res=num[i]/num[i+1];
    num[i+1]=res;
    }

    if(a[i]=='%')
    {
        mod=(int)num[i];
        mod1=(int)num[i+1];
        res=mod%mod1;
        num[i+1]=res;
    }



    }
  //  ui->lower->setText(QString::number(res));
    ui->middle->setText("");
     ui->middle->setText(QString::number(res));

/*
    for(k=0;k<len;k++)
    {
        a[k]='\0';
        num[k]='\0';
        num[k+1]='\0';
    }*/

     a[0]=num[0]='\0';
    i=0;j=0;
    var="Ans";


     //ui->upper->setText(QString::number(var));
      ui->upper->setText("Answer=");
     //var=


}



void calci::on_clear_clicked()
{
    var="";
    ui->upper->setText(var);
     ui->middle->setText("");
      //ui->lower->setText("");

      for(k=0;k<len;k++)
      {
          a[k]='\0';
          num[k]='\0';
          num[k+1]='\0';
      }
      i=0;j=0;


}

void calci::on_modules_clicked()
{
    //num[j]=ui->middle->text().toInt();
    num[j]=ui->middle->text().toFloat();
    a[j]='%';
    j++;

   // n2=ui->lower->text().toInt();
    //ui->lower->setText("");
    ui->middle->setText("");

    var+='%';
    ui->upper->setText(var);

}

void calci::on_dot_clicked()
{

    varm=ui->middle->text();
    var+='.';
    varm+='.';

    ui->upper->setText(var);
    ui->middle->setText(varm);

}







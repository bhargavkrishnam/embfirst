#include <QCoreApplication>
#include<QtSql>
#include<QString>
#include<QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString servername ="LOCALHOST\SQLEXPRESS";
    QString dbname ="test";

    QSqlDatabase db = QSqlDatabase::addDatabase("QODC");

    db.setConnectOptions();

    QString dsn= QString ("DRIVER=(SQL native  client);SERVER=%1;DATABASE=%2;trusted_connection=Yes;").arg(servername).arg(dbname);

    db.setDatabaseName(dsn);

    if(db.open())
    {
       qDebug() <<"opened";
       db.close();
    }
    else
    {
        qDebug() <<"Error ="<<db.lastError().text();
    }
    return a.exec();
}

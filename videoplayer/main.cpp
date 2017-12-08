#include "mainwindow.h"
#include <QApplication>
#include<QMediaPlayer>
#include<QVideoWidget>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // MainWindow w;
   // w.show();

    QMediaPlayer *player = new QMediaPlayer;
    QVideoWidget *vw = new QVideoWidget;

    player->setVideoOutput(vw);
    player->setMedia(QUrl::fromLocalFile("/home/bhargava/Desktop/C++ mini-project ATM & Banking .mp4"));

    vw->setGeometry(100,100,300,400);
    vw->show();

    player->play();
    qDebug()<<player->state();

return a.exec();
}

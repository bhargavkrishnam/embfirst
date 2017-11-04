#-------------------------------------------------
#
# Project created by QtCreator 2017-07-31T21:47:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = hotel
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    tabelsdialog.cpp \
    typesdialog.cpp \
    vegdialog.cpp \
    nonvegdialog.cpp

HEADERS  += mainwindow.h \
    tabelsdialog.h \
    typesdialog.h \
    vegdialog.h \
    nonvegdialog.h

FORMS    += mainwindow.ui \
    tabelsdialog.ui \
    typesdialog.ui \
    vegdialog.ui \
    nonvegdialog.ui

RESOURCES += \
    ../../Pictures/Wallpapers/ho.qrc

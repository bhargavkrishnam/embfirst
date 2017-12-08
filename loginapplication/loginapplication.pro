#-------------------------------------------------
#
# Project created by QtCreator 2017-07-18T21:26:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = loginapplication
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    secdialog.cpp \
    newuserdialog.cpp

HEADERS  += mainwindow.h \
    secdialog.h \
    newuserdialog.h

FORMS    += mainwindow.ui \
    secdialog.ui \
    newuserdialog.ui

RESOURCES += \
    resource.qrc

#-------------------------------------------------
#
# Project created by QtCreator 2015-12-10T17:23:57
#
#-------------------------------------------------

QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtZombiegiene
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    misctools.cpp

HEADERS  += mainwindow.h \
    misctools.h

FORMS    += mainwindow.ui

CONFIG += mobility
MOBILITY = 

RESOURCES += \
    resources.qrc


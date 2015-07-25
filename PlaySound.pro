#-------------------------------------------------
#
# Project created by QtCreator 2015-07-25T18:15:22
#
#-------------------------------------------------

QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PlaySound
TEMPLATE = app


CONFIG += static
static {
    CONFIG += static
    QTPLUGIN += qsqloci qgif
    DEFINES += STATIC
    message("Static build.")
}

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

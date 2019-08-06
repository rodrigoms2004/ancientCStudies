#-------------------------------------------------
#
# Project created by QtCreator 2015-06-01T11:19:32
#
#-------------------------------------------------

QT       += core
QT       += network
QT       -= gui

TARGET = QTcpServerThreadPool1
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    myserver.cpp \
    myclient.cpp \
    mytask.cpp

HEADERS += \
    myserver.h \
    myclient.h \
    mytask.h

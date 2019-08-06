#-------------------------------------------------
#
# Project created by QtCreator 2016-10-08T14:38:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = mdi
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    form.cpp \
    webform.cpp

HEADERS  += mainwindow.h \
    form.h \
    webform.h

FORMS    += mainwindow.ui \
    form.ui \
    webform.ui

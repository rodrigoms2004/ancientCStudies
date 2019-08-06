#-------------------------------------------------
#
# Project created by QtCreator 2015-08-07T10:06:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Calculadora
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h \
    matematica.h \
    matematica_global.h

FORMS    += mainwindow.ui

#LIBS += -L/home/herik/CPP_Sabado/build-Matematica-Desktop_Qt_5_5_0_GCC_64bit-Debug
#LIBS +=  /home/herik/CPP_Sabado/build-Matematica-Desktop_Qt_5_5_0_GCC_64bit-Debug/libMatematica.so

# mapeando a pasta
LIBS += -L/home/rodrigo/Documents/cstudy/Agit/CPP/build-Matematica-Desktop_Qt_5_5_0_GCC_64bit-Debug

# mapeando a biblioteca
LIBS += /home/rodrigo/Documents/cstudy/Agit/CPP/build-Matematica-Desktop_Qt_5_5_0_GCC_64bit-Debug/libMatematica.so

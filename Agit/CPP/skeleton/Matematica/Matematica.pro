#-------------------------------------------------
#
# Project created by QtCreator 2015-08-07T10:05:23
#
#-------------------------------------------------

QT       -= gui

TARGET = Matematica
TEMPLATE = lib

DEFINES += MATEMATICA_LIBRARY

SOURCES += matematica.cpp

HEADERS += matematica.h\
        matematica_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

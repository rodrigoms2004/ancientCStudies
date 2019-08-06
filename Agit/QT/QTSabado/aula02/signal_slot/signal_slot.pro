QT += core

TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
#CONFIG -= qt

SOURCES += main.cpp \
    test.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    test.h


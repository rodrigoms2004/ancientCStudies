TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    calculadora.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    calculadora.h


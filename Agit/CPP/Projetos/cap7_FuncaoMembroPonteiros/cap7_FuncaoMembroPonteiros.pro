TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    data.cpp \
    pagar.cpp \
    receber.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    data.h \
    pagar.h \
    receber.h


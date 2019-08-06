TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    datacliente.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    datacliente.h

QMAKE_CXXFLAGS += -std=c++11

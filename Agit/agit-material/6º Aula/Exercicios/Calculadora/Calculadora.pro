TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    padrao.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    padrao.h


TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    node.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    node.h


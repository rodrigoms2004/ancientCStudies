TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    singleton.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    singleton.h


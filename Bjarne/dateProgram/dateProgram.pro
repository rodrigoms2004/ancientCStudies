TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    chrono.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    chrono.h


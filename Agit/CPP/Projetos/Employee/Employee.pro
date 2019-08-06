TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    employee.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    employee.h


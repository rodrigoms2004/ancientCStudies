TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    conta.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    conta.h \
    vetor.h


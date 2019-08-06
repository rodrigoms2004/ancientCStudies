TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    conta.cpp \
    vetor.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    conta.h \
    vetor.h


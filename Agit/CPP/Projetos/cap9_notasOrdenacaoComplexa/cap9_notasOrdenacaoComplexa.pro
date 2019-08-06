TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    aluno.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    aluno.h


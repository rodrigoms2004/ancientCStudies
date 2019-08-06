TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    funcoes.cpp \
    interfaceusuario.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    funcoes.h \
    interfaceusuario.h


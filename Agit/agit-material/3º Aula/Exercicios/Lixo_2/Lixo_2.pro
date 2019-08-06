TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    funcoesuteis.cpp \
    testafuncoes.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    funcoesuteis.h \
    testafuncoes.h


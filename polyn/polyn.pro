QT += core
QT -= gui

CONFIG += c++11

TARGET = polyn
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    polynomials.cpp

HEADERS += \
    polynomials.h

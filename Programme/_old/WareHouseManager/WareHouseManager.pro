#-------------------------------------------------
#
# Project created by QtCreator 2018-02-21T17:47:19
#
#-------------------------------------------------

QT += sql

# QT       += core gui

# RC_FILE += icone.rc

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = WareHouseManager
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    database.cpp \
    produit.cpp \
    utilisateur.cpp \
    emballage.cpp \
    login.cpp \
    fournisseur.cpp

HEADERS += \
        mainwindow.h \
    database.h \
    produit.h \
    utilisateur.h \
    emballage.h \
    login.h \
    fournisseur.h

FORMS += \
        mainwindow.ui \
    login.ui

RESOURCES += \
    icone.qrc

DISTFILES +=
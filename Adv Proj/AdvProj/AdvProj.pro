#-------------------------------------------------
#
# Project created by QtCreator 2016-09-28T18:54:30
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AdvProj
TEMPLATE = app


SOURCES += main.cpp\
           mainwindow.cpp \
           game.cpp \
           hero.cpp \
           item.cpp \
           maze.cpp \
           room.cpp \
           shopwindow.cpp \
           monster.cpp \
           battle.cpp \
           battledialog.cpp

HEADERS  += mainwindow.h \
            game.h \
            hero.h \
            item.h \
            maze.h \
            room.h \
            shopwindow.h \
            monster.h \
            battle.h \
            battledialog.h

FORMS    += mainwindow.ui \
            shopwindow.ui \
            battledialog.ui

#-------------------------------------------------
#
# Project created by QtCreator 2017-02-22T21:19:22
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QuizMaster
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    global.cpp \
    quiz.cpp

HEADERS  += mainwindow.h \
    global.h \
    quiz.h

FORMS    += mainwindow.ui \
    quiz.ui

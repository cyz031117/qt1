QT += core gui
greaterThan(QT_MAJOR_VERSION, 5): QT += core5compat
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Guide
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    kid.cpp \
    check1.cpp \
    setting.cpp

HEADERS += \
    mainwindow.h \
    kid.h \
    check1.h \
    setting.h

FORMS += \
    mainwindow.ui \
    kid.ui \
    check1.ui \
    setting.ui

RC_ICONS = guide.ico

RESOURCES += \
    qrf.qrc

HEADERS += \
    mainwindow.h \
    menuwidg.h

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    menuwidg.cpp

QT += widgets
QT += sql
INCLUDEPATH += $$PWD/../BD
DEPENDPATH += $$PWD/../BD
FORMS += \
    mainwindow.ui \
    menuwidg.ui

RESOURCES += \
    stylesheet.qrc

QT       += core socketio
QT       -= gui

TARGET = echoclient
CONFIG   += console c++11
CONFIG   -= app_bundle

TEMPLATE = app

SOURCES += \
    main.cpp \
    echoclient.cpp

HEADERS += \
    echoclient.h
macx {
QMAKE_MAC_SDK = macosx10.9
}

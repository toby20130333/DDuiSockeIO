QT = core socketio qml

TARGETPATH = Qt/SocketIo
macx {
QMAKE_MAC_SDK = macosx10.9
}
HEADERS += 
SOURCES += 

load(qml_plugin)

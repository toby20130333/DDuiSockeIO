TEMPLATE = subdirs
CONFIG += ordered
macx {
QMAKE_MAC_SDK = macosx10.9
}
SUBDIRS += socketio
qtHaveModule(quick): SUBDIRS += imports

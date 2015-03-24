/****************************************************************************
** Meta object code from reading C++ file 'qsocketioclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qsocketioclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsocketioclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QSocketIoClient_t {
    QByteArrayData data[21];
    char stringdata[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSocketIoClient_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSocketIoClient_t qt_meta_stringdata_QSocketIoClient = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QSocketIoClient"
QT_MOC_LITERAL(1, 16, 15), // "messageReceived"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 7), // "message"
QT_MOC_LITERAL(4, 41, 13), // "errorReceived"
QT_MOC_LITERAL(5, 55, 6), // "reason"
QT_MOC_LITERAL(6, 62, 6), // "advice"
QT_MOC_LITERAL(7, 69, 9), // "connected"
QT_MOC_LITERAL(8, 79, 8), // "endpoint"
QT_MOC_LITERAL(9, 88, 12), // "disconnected"
QT_MOC_LITERAL(10, 101, 17), // "heartbeatReceived"
QT_MOC_LITERAL(11, 119, 9), // "httpError"
QT_MOC_LITERAL(12, 129, 5), // "error"
QT_MOC_LITERAL(13, 135, 7), // "onError"
QT_MOC_LITERAL(14, 143, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(15, 172, 9), // "onMessage"
QT_MOC_LITERAL(16, 182, 11), // "textMessage"
QT_MOC_LITERAL(17, 194, 13), // "sendHeartBeat"
QT_MOC_LITERAL(18, 208, 13), // "replyFinished"
QT_MOC_LITERAL(19, 222, 14), // "QNetworkReply*"
QT_MOC_LITERAL(20, 237, 5) // "reply"

    },
    "QSocketIoClient\0messageReceived\0\0"
    "message\0errorReceived\0reason\0advice\0"
    "connected\0endpoint\0disconnected\0"
    "heartbeatReceived\0httpError\0error\0"
    "onError\0QAbstractSocket::SocketError\0"
    "onMessage\0textMessage\0sendHeartBeat\0"
    "replyFinished\0QNetworkReply*\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSocketIoClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    2,   67,    2, 0x06 /* Public */,
       7,    1,   72,    2, 0x06 /* Public */,
       9,    1,   75,    2, 0x06 /* Public */,
      10,    0,   78,    2, 0x06 /* Public */,
      11,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   82,    2, 0x08 /* Private */,
      15,    1,   85,    2, 0x08 /* Private */,
      17,    0,   88,    2, 0x08 /* Private */,
      18,    1,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 14,   12,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,

       0        // eod
};

void QSocketIoClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QSocketIoClient *_t = static_cast<QSocketIoClient *>(_o);
        switch (_id) {
        case 0: _t->messageReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->errorReceived((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->connected((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->disconnected((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->heartbeatReceived(); break;
        case 5: _t->httpError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->onError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 7: _t->onMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->sendHeartBeat(); break;
        case 9: _t->replyFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QSocketIoClient::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSocketIoClient::messageReceived)) {
                *result = 0;
            }
        }
        {
            typedef void (QSocketIoClient::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSocketIoClient::errorReceived)) {
                *result = 1;
            }
        }
        {
            typedef void (QSocketIoClient::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSocketIoClient::connected)) {
                *result = 2;
            }
        }
        {
            typedef void (QSocketIoClient::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSocketIoClient::disconnected)) {
                *result = 3;
            }
        }
        {
            typedef void (QSocketIoClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSocketIoClient::heartbeatReceived)) {
                *result = 4;
            }
        }
        {
            typedef void (QSocketIoClient::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSocketIoClient::httpError)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject QSocketIoClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QSocketIoClient.data,
      qt_meta_data_QSocketIoClient,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QSocketIoClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSocketIoClient::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QSocketIoClient.stringdata))
        return static_cast<void*>(const_cast< QSocketIoClient*>(this));
    return QObject::qt_metacast(_clname);
}

int QSocketIoClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QSocketIoClient::messageReceived(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QSocketIoClient::errorReceived(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QSocketIoClient::connected(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QSocketIoClient::disconnected(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QSocketIoClient::heartbeatReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void QSocketIoClient::httpError(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE

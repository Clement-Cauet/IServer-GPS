/****************************************************************************
** Meta object code from reading C++ file 'iServerGPS.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../iServerGPS.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'iServerGPS.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_iServerGPS_t {
    QByteArrayData data[13];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_iServerGPS_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_iServerGPS_t qt_meta_stringdata_iServerGPS = {
    {
QT_MOC_LITERAL(0, 0, 10), // "iServerGPS"
QT_MOC_LITERAL(1, 11, 15), // "onNewConnection"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 18), // "socketDisconnected"
QT_MOC_LITERAL(4, 47, 18), // "processTextMessage"
QT_MOC_LITERAL(5, 66, 7), // "message"
QT_MOC_LITERAL(6, 74, 17), // "onSerialReadyRead"
QT_MOC_LITERAL(7, 92, 14), // "onTCPReadyRead"
QT_MOC_LITERAL(8, 107, 12), // "processTrame"
QT_MOC_LITERAL(9, 120, 4), // "data"
QT_MOC_LITERAL(10, 125, 7), // "timerOn"
QT_MOC_LITERAL(11, 133, 11), // "insertValue"
QT_MOC_LITERAL(12, 145, 11) // "selectValue"

    },
    "iServerGPS\0onNewConnection\0\0"
    "socketDisconnected\0processTextMessage\0"
    "message\0onSerialReadyRead\0onTCPReadyRead\0"
    "processTrame\0data\0timerOn\0insertValue\0"
    "selectValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_iServerGPS[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    1,   61,    2, 0x08 /* Private */,
       6,    0,   64,    2, 0x08 /* Private */,
       7,    0,   65,    2, 0x08 /* Private */,
       8,    1,   66,    2, 0x08 /* Private */,
      10,    0,   69,    2, 0x08 /* Private */,
      11,    0,   70,    2, 0x08 /* Private */,
      12,    0,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void iServerGPS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<iServerGPS *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onNewConnection(); break;
        case 1: _t->socketDisconnected(); break;
        case 2: _t->processTextMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onSerialReadyRead(); break;
        case 4: _t->onTCPReadyRead(); break;
        case 5: _t->processTrame((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->timerOn(); break;
        case 7: _t->insertValue(); break;
        case 8: _t->selectValue(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject iServerGPS::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_iServerGPS.data,
    qt_meta_data_iServerGPS,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *iServerGPS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *iServerGPS::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_iServerGPS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int iServerGPS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

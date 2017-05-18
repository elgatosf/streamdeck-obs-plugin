/****************************************************************************
** Meta object code from reading C++ file 'window-basic-status-bar.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../UI/window-basic-status-bar.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window-basic-status-bar.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OBSBasicStatusBar_t {
    QByteArrayData data[7];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OBSBasicStatusBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OBSBasicStatusBar_t qt_meta_stringdata_OBSBasicStatusBar = {
    {
QT_MOC_LITERAL(0, 0, 17), // "OBSBasicStatusBar"
QT_MOC_LITERAL(1, 18, 9), // "Reconnect"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 7), // "seconds"
QT_MOC_LITERAL(4, 37, 16), // "ReconnectSuccess"
QT_MOC_LITERAL(5, 54, 15), // "UpdateStatusBar"
QT_MOC_LITERAL(6, 70, 14) // "UpdateCPUUsage"

    },
    "OBSBasicStatusBar\0Reconnect\0\0seconds\0"
    "ReconnectSuccess\0UpdateStatusBar\0"
    "UpdateCPUUsage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OBSBasicStatusBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       4,    0,   37,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OBSBasicStatusBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OBSBasicStatusBar *_t = static_cast<OBSBasicStatusBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Reconnect((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->ReconnectSuccess(); break;
        case 2: _t->UpdateStatusBar(); break;
        case 3: _t->UpdateCPUUsage(); break;
        default: ;
        }
    }
}

const QMetaObject OBSBasicStatusBar::staticMetaObject = {
    { &QStatusBar::staticMetaObject, qt_meta_stringdata_OBSBasicStatusBar.data,
      qt_meta_data_OBSBasicStatusBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OBSBasicStatusBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSBasicStatusBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OBSBasicStatusBar.stringdata0))
        return static_cast<void*>(const_cast< OBSBasicStatusBar*>(this));
    return QStatusBar::qt_metacast(_clname);
}

int OBSBasicStatusBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStatusBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

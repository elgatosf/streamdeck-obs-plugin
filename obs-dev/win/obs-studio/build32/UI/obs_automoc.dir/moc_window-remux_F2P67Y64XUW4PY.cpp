/****************************************************************************
** Meta object code from reading C++ file 'window-remux.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../UI/window-remux.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window-remux.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OBSRemux_t {
    QByteArrayData data[9];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OBSRemux_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OBSRemux_t qt_meta_stringdata_OBSRemux = {
    {
QT_MOC_LITERAL(0, 0, 8), // "OBSRemux"
QT_MOC_LITERAL(1, 9, 5), // "remux"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 12), // "inputChanged"
QT_MOC_LITERAL(4, 29, 3), // "str"
QT_MOC_LITERAL(5, 33, 14), // "updateProgress"
QT_MOC_LITERAL(6, 48, 7), // "percent"
QT_MOC_LITERAL(7, 56, 13), // "remuxFinished"
QT_MOC_LITERAL(8, 70, 7) // "success"

    },
    "OBSRemux\0remux\0\0inputChanged\0str\0"
    "updateProgress\0percent\0remuxFinished\0"
    "success"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OBSRemux[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x08 /* Private */,
       5,    1,   38,    2, 0x0a /* Public */,
       7,    1,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void, QMetaType::Bool,    8,

       0        // eod
};

void OBSRemux::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OBSRemux *_t = static_cast<OBSRemux *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->remux(); break;
        case 1: _t->inputChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->updateProgress((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->remuxFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OBSRemux::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OBSRemux::remux)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject OBSRemux::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_OBSRemux.data,
      qt_meta_data_OBSRemux,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OBSRemux::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSRemux::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OBSRemux.stringdata0))
        return static_cast<void*>(const_cast< OBSRemux*>(this));
    return QDialog::qt_metacast(_clname);
}

int OBSRemux::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void OBSRemux::remux()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_RemuxWorker_t {
    QByteArrayData data[7];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RemuxWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RemuxWorker_t qt_meta_stringdata_RemuxWorker = {
    {
QT_MOC_LITERAL(0, 0, 11), // "RemuxWorker"
QT_MOC_LITERAL(1, 12, 14), // "updateProgress"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "percent"
QT_MOC_LITERAL(4, 36, 13), // "remuxFinished"
QT_MOC_LITERAL(5, 50, 7), // "success"
QT_MOC_LITERAL(6, 58, 5) // "remux"

    },
    "RemuxWorker\0updateProgress\0\0percent\0"
    "remuxFinished\0success\0remux"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RemuxWorker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void RemuxWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RemuxWorker *_t = static_cast<RemuxWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateProgress((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->remuxFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->remux(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RemuxWorker::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RemuxWorker::updateProgress)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (RemuxWorker::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RemuxWorker::remuxFinished)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject RemuxWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RemuxWorker.data,
      qt_meta_data_RemuxWorker,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RemuxWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RemuxWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RemuxWorker.stringdata0))
        return static_cast<void*>(const_cast< RemuxWorker*>(this));
    return QObject::qt_metacast(_clname);
}

int RemuxWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void RemuxWorker::updateProgress(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RemuxWorker::remuxFinished(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'source-label.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../UI/source-label.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'source-label.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OBSSourceLabel_t {
    QByteArrayData data[7];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OBSSourceLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OBSSourceLabel_t qt_meta_stringdata_OBSSourceLabel = {
    {
QT_MOC_LITERAL(0, 0, 14), // "OBSSourceLabel"
QT_MOC_LITERAL(1, 15, 7), // "Renamed"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 11), // "const char*"
QT_MOC_LITERAL(4, 36, 4), // "name"
QT_MOC_LITERAL(5, 41, 7), // "Removed"
QT_MOC_LITERAL(6, 49, 9) // "Destroyed"

    },
    "OBSSourceLabel\0Renamed\0\0const char*\0"
    "name\0Removed\0Destroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OBSSourceLabel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    0,   32,    2, 0x06 /* Public */,
       6,    0,   33,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OBSSourceLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OBSSourceLabel *_t = static_cast<OBSSourceLabel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Renamed((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 1: _t->Removed(); break;
        case 2: _t->Destroyed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OBSSourceLabel::*_t)(const char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OBSSourceLabel::Renamed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (OBSSourceLabel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OBSSourceLabel::Removed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (OBSSourceLabel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OBSSourceLabel::Destroyed)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject OBSSourceLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_OBSSourceLabel.data,
      qt_meta_data_OBSSourceLabel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OBSSourceLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSSourceLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OBSSourceLabel.stringdata0))
        return static_cast<void*>(const_cast< OBSSourceLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int OBSSourceLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
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
void OBSSourceLabel::Renamed(const char * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OBSSourceLabel::Removed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void OBSSourceLabel::Destroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

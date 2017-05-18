/****************************************************************************
** Meta object code from reading C++ file 'volume-control.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../UI/volume-control.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'volume-control.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VolumeMeter_t {
    QByteArrayData data[5];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VolumeMeter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VolumeMeter_t qt_meta_stringdata_VolumeMeter = {
    {
QT_MOC_LITERAL(0, 0, 11), // "VolumeMeter"
QT_MOC_LITERAL(1, 12, 7), // "bkColor"
QT_MOC_LITERAL(2, 20, 8), // "magColor"
QT_MOC_LITERAL(3, 29, 9), // "peakColor"
QT_MOC_LITERAL(4, 39, 13) // "peakHoldColor"

    },
    "VolumeMeter\0bkColor\0magColor\0peakColor\0"
    "peakHoldColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VolumeMeter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QColor, 0x00095103,
       2, QMetaType::QColor, 0x00095103,
       3, QMetaType::QColor, 0x00095103,
       4, QMetaType::QColor, 0x00095103,

       0        // eod
};

void VolumeMeter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        VolumeMeter *_t = static_cast<VolumeMeter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->getBkColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->getMagColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getPeakColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->getPeakHoldColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        VolumeMeter *_t = static_cast<VolumeMeter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBkColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setMagColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setPeakColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setPeakHoldColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject VolumeMeter::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VolumeMeter.data,
      qt_meta_data_VolumeMeter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VolumeMeter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VolumeMeter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VolumeMeter.stringdata0))
        return static_cast<void*>(const_cast< VolumeMeter*>(this));
    return QWidget::qt_metacast(_clname);
}

int VolumeMeter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_VolumeMeterTimer_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VolumeMeterTimer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VolumeMeterTimer_t qt_meta_stringdata_VolumeMeterTimer = {
    {
QT_MOC_LITERAL(0, 0, 16) // "VolumeMeterTimer"

    },
    "VolumeMeterTimer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VolumeMeterTimer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void VolumeMeterTimer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject VolumeMeterTimer::staticMetaObject = {
    { &QTimer::staticMetaObject, qt_meta_stringdata_VolumeMeterTimer.data,
      qt_meta_data_VolumeMeterTimer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VolumeMeterTimer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VolumeMeterTimer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VolumeMeterTimer.stringdata0))
        return static_cast<void*>(const_cast< VolumeMeterTimer*>(this));
    return QTimer::qt_metacast(_clname);
}

int VolumeMeterTimer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTimer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_VolControl_t {
    QByteArrayData data[15];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VolControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VolControl_t qt_meta_stringdata_VolControl = {
    {
QT_MOC_LITERAL(0, 0, 10), // "VolControl"
QT_MOC_LITERAL(1, 11, 13), // "ConfigClicked"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 13), // "VolumeChanged"
QT_MOC_LITERAL(4, 40, 11), // "VolumeMuted"
QT_MOC_LITERAL(5, 52, 5), // "muted"
QT_MOC_LITERAL(6, 58, 11), // "VolumeLevel"
QT_MOC_LITERAL(7, 70, 3), // "mag"
QT_MOC_LITERAL(8, 74, 4), // "peak"
QT_MOC_LITERAL(9, 79, 8), // "peakHold"
QT_MOC_LITERAL(10, 88, 8), // "SetMuted"
QT_MOC_LITERAL(11, 97, 7), // "checked"
QT_MOC_LITERAL(12, 105, 13), // "SliderChanged"
QT_MOC_LITERAL(13, 119, 3), // "vol"
QT_MOC_LITERAL(14, 123, 10) // "updateText"

    },
    "VolControl\0ConfigClicked\0\0VolumeChanged\0"
    "VolumeMuted\0muted\0VolumeLevel\0mag\0"
    "peak\0peakHold\0SetMuted\0checked\0"
    "SliderChanged\0vol\0updateText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VolControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x08 /* Private */,
       4,    1,   51,    2, 0x08 /* Private */,
       6,    4,   54,    2, 0x08 /* Private */,
      10,    1,   63,    2, 0x08 /* Private */,
      12,    1,   66,    2, 0x08 /* Private */,
      14,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Bool,    7,    8,    9,    5,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,

       0        // eod
};

void VolControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VolControl *_t = static_cast<VolControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ConfigClicked(); break;
        case 1: _t->VolumeChanged(); break;
        case 2: _t->VolumeMuted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->VolumeLevel((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 4: _t->SetMuted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->SliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->updateText(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VolControl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VolControl::ConfigClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject VolControl::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VolControl.data,
      qt_meta_data_VolControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VolControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VolControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VolControl.stringdata0))
        return static_cast<void*>(const_cast< VolControl*>(this));
    return QWidget::qt_metacast(_clname);
}

int VolControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void VolControl::ConfigClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'hotkey-edit.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../UI/hotkey-edit.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hotkey-edit.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OBSHotkeyLabel_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OBSHotkeyLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OBSHotkeyLabel_t qt_meta_stringdata_OBSHotkeyLabel = {
    {
QT_MOC_LITERAL(0, 0, 14) // "OBSHotkeyLabel"

    },
    "OBSHotkeyLabel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OBSHotkeyLabel[] = {

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

void OBSHotkeyLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject OBSHotkeyLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_OBSHotkeyLabel.data,
      qt_meta_data_OBSHotkeyLabel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OBSHotkeyLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSHotkeyLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OBSHotkeyLabel.stringdata0))
        return static_cast<void*>(const_cast< OBSHotkeyLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int OBSHotkeyLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_OBSHotkeyEdit_t {
    QByteArrayData data[7];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OBSHotkeyEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OBSHotkeyEdit_t qt_meta_stringdata_OBSHotkeyEdit = {
    {
QT_MOC_LITERAL(0, 0, 13), // "OBSHotkeyEdit"
QT_MOC_LITERAL(1, 14, 10), // "KeyChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 21), // "obs_key_combination_t"
QT_MOC_LITERAL(4, 48, 15), // "ReloadKeyLayout"
QT_MOC_LITERAL(5, 64, 8), // "ResetKey"
QT_MOC_LITERAL(6, 73, 8) // "ClearKey"

    },
    "OBSHotkeyEdit\0KeyChanged\0\0"
    "obs_key_combination_t\0ReloadKeyLayout\0"
    "ResetKey\0ClearKey"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OBSHotkeyEdit[] = {

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
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   37,    2, 0x0a /* Public */,
       5,    0,   38,    2, 0x0a /* Public */,
       6,    0,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OBSHotkeyEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OBSHotkeyEdit *_t = static_cast<OBSHotkeyEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->KeyChanged((*reinterpret_cast< obs_key_combination_t(*)>(_a[1]))); break;
        case 1: _t->ReloadKeyLayout(); break;
        case 2: _t->ResetKey(); break;
        case 3: _t->ClearKey(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OBSHotkeyEdit::*_t)(obs_key_combination_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OBSHotkeyEdit::KeyChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject OBSHotkeyEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_OBSHotkeyEdit.data,
      qt_meta_data_OBSHotkeyEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OBSHotkeyEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSHotkeyEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OBSHotkeyEdit.stringdata0))
        return static_cast<void*>(const_cast< OBSHotkeyEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int OBSHotkeyEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
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
void OBSHotkeyEdit::KeyChanged(obs_key_combination_t _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_OBSHotkeyWidget_t {
    QByteArrayData data[6];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OBSHotkeyWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OBSHotkeyWidget_t qt_meta_stringdata_OBSHotkeyWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "OBSHotkeyWidget"
QT_MOC_LITERAL(1, 16, 10), // "KeyChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 21), // "HandleChangedBindings"
QT_MOC_LITERAL(4, 50, 13), // "obs_hotkey_id"
QT_MOC_LITERAL(5, 64, 3) // "id_"

    },
    "OBSHotkeyWidget\0KeyChanged\0\0"
    "HandleChangedBindings\0obs_hotkey_id\0"
    "id_"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OBSHotkeyWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void OBSHotkeyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OBSHotkeyWidget *_t = static_cast<OBSHotkeyWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->KeyChanged(); break;
        case 1: _t->HandleChangedBindings((*reinterpret_cast< obs_hotkey_id(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OBSHotkeyWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OBSHotkeyWidget::KeyChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject OBSHotkeyWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OBSHotkeyWidget.data,
      qt_meta_data_OBSHotkeyWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OBSHotkeyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSHotkeyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OBSHotkeyWidget.stringdata0))
        return static_cast<void*>(const_cast< OBSHotkeyWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int OBSHotkeyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void OBSHotkeyWidget::KeyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'window-basic-source-select.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../UI/window-basic-source-select.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window-basic-source-select.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OBSBasicSourceSelect_t {
    QByteArrayData data[8];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OBSBasicSourceSelect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OBSBasicSourceSelect_t qt_meta_stringdata_OBSBasicSourceSelect = {
    {
QT_MOC_LITERAL(0, 0, 20), // "OBSBasicSourceSelect"
QT_MOC_LITERAL(1, 21, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 21), // "on_buttonBox_rejected"
QT_MOC_LITERAL(4, 66, 11), // "SourceAdded"
QT_MOC_LITERAL(5, 78, 9), // "OBSSource"
QT_MOC_LITERAL(6, 88, 6), // "source"
QT_MOC_LITERAL(7, 95, 13) // "SourceRemoved"

    },
    "OBSBasicSourceSelect\0on_buttonBox_accepted\0"
    "\0on_buttonBox_rejected\0SourceAdded\0"
    "OBSSource\0source\0SourceRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OBSBasicSourceSelect[] = {

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
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    1,   36,    2, 0x08 /* Private */,
       7,    1,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void OBSBasicSourceSelect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OBSBasicSourceSelect *_t = static_cast<OBSBasicSourceSelect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_buttonBox_accepted(); break;
        case 1: _t->on_buttonBox_rejected(); break;
        case 2: _t->SourceAdded((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 3: _t->SourceRemoved((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject OBSBasicSourceSelect::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_OBSBasicSourceSelect.data,
      qt_meta_data_OBSBasicSourceSelect,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OBSBasicSourceSelect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSBasicSourceSelect::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OBSBasicSourceSelect.stringdata0))
        return static_cast<void*>(const_cast< OBSBasicSourceSelect*>(this));
    return QDialog::qt_metacast(_clname);
}

int OBSBasicSourceSelect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE

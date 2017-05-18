/****************************************************************************
** Meta object code from reading C++ file 'window-basic-transform.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../UI/window-basic-transform.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window-basic-transform.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OBSBasicTransform_t {
    QByteArrayData data[11];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OBSBasicTransform_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OBSBasicTransform_t qt_meta_stringdata_OBSBasicTransform = {
    {
QT_MOC_LITERAL(0, 0, 17), // "OBSBasicTransform"
QT_MOC_LITERAL(1, 18, 15), // "RefreshControls"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 9), // "SetItemQt"
QT_MOC_LITERAL(4, 45, 12), // "OBSSceneItem"
QT_MOC_LITERAL(5, 58, 7), // "newItem"
QT_MOC_LITERAL(6, 66, 12), // "OnBoundsType"
QT_MOC_LITERAL(7, 79, 5), // "index"
QT_MOC_LITERAL(8, 85, 16), // "OnControlChanged"
QT_MOC_LITERAL(9, 102, 13), // "OnCropChanged"
QT_MOC_LITERAL(10, 116, 22) // "on_resetButton_clicked"

    },
    "OBSBasicTransform\0RefreshControls\0\0"
    "SetItemQt\0OBSSceneItem\0newItem\0"
    "OnBoundsType\0index\0OnControlChanged\0"
    "OnCropChanged\0on_resetButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OBSBasicTransform[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    1,   45,    2, 0x08 /* Private */,
       6,    1,   48,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,
       9,    0,   52,    2, 0x08 /* Private */,
      10,    0,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OBSBasicTransform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OBSBasicTransform *_t = static_cast<OBSBasicTransform *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->RefreshControls(); break;
        case 1: _t->SetItemQt((*reinterpret_cast< OBSSceneItem(*)>(_a[1]))); break;
        case 2: _t->OnBoundsType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->OnControlChanged(); break;
        case 4: _t->OnCropChanged(); break;
        case 5: _t->on_resetButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject OBSBasicTransform::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_OBSBasicTransform.data,
      qt_meta_data_OBSBasicTransform,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OBSBasicTransform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSBasicTransform::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OBSBasicTransform.stringdata0))
        return static_cast<void*>(const_cast< OBSBasicTransform*>(this));
    return QDialog::qt_metacast(_clname);
}

int OBSBasicTransform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

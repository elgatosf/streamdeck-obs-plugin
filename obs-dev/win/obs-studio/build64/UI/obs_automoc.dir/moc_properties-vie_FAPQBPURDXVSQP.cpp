/****************************************************************************
** Meta object code from reading C++ file 'properties-view.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../UI/properties-view.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'properties-view.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WidgetInfo_t {
    QByteArrayData data[11];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WidgetInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WidgetInfo_t qt_meta_stringdata_WidgetInfo = {
    {
QT_MOC_LITERAL(0, 0, 10), // "WidgetInfo"
QT_MOC_LITERAL(1, 11, 14), // "ControlChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "EditListAdd"
QT_MOC_LITERAL(4, 39, 15), // "EditListAddText"
QT_MOC_LITERAL(5, 55, 16), // "EditListAddFiles"
QT_MOC_LITERAL(6, 72, 14), // "EditListAddDir"
QT_MOC_LITERAL(7, 87, 14), // "EditListRemove"
QT_MOC_LITERAL(8, 102, 12), // "EditListEdit"
QT_MOC_LITERAL(9, 115, 10), // "EditListUp"
QT_MOC_LITERAL(10, 126, 12) // "EditListDown"

    },
    "WidgetInfo\0ControlChanged\0\0EditListAdd\0"
    "EditListAddText\0EditListAddFiles\0"
    "EditListAddDir\0EditListRemove\0"
    "EditListEdit\0EditListUp\0EditListDown"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WidgetInfo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WidgetInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WidgetInfo *_t = static_cast<WidgetInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ControlChanged(); break;
        case 1: _t->EditListAdd(); break;
        case 2: _t->EditListAddText(); break;
        case 3: _t->EditListAddFiles(); break;
        case 4: _t->EditListAddDir(); break;
        case 5: _t->EditListRemove(); break;
        case 6: _t->EditListEdit(); break;
        case 7: _t->EditListUp(); break;
        case 8: _t->EditListDown(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject WidgetInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WidgetInfo.data,
      qt_meta_data_WidgetInfo,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WidgetInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WidgetInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WidgetInfo.stringdata0))
        return static_cast<void*>(const_cast< WidgetInfo*>(this));
    return QObject::qt_metacast(_clname);
}

int WidgetInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_OBSPropertiesView_t {
    QByteArrayData data[7];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OBSPropertiesView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OBSPropertiesView_t qt_meta_stringdata_OBSPropertiesView = {
    {
QT_MOC_LITERAL(0, 0, 17), // "OBSPropertiesView"
QT_MOC_LITERAL(1, 18, 17), // "PropertiesResized"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 7), // "Changed"
QT_MOC_LITERAL(4, 45, 16), // "ReloadProperties"
QT_MOC_LITERAL(5, 62, 17), // "RefreshProperties"
QT_MOC_LITERAL(6, 80, 13) // "SignalChanged"

    },
    "OBSPropertiesView\0PropertiesResized\0"
    "\0Changed\0ReloadProperties\0RefreshProperties\0"
    "SignalChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OBSPropertiesView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OBSPropertiesView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OBSPropertiesView *_t = static_cast<OBSPropertiesView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->PropertiesResized(); break;
        case 1: _t->Changed(); break;
        case 2: _t->ReloadProperties(); break;
        case 3: _t->RefreshProperties(); break;
        case 4: _t->SignalChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OBSPropertiesView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OBSPropertiesView::PropertiesResized)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (OBSPropertiesView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OBSPropertiesView::Changed)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject OBSPropertiesView::staticMetaObject = {
    { &VScrollArea::staticMetaObject, qt_meta_stringdata_OBSPropertiesView.data,
      qt_meta_data_OBSPropertiesView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OBSPropertiesView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSPropertiesView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OBSPropertiesView.stringdata0))
        return static_cast<void*>(const_cast< OBSPropertiesView*>(this));
    return VScrollArea::qt_metacast(_clname);
}

int OBSPropertiesView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void OBSPropertiesView::PropertiesResized()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void OBSPropertiesView::Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

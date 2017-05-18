/****************************************************************************
** Meta object code from reading C++ file 'auto-scene-switcher.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../UI/frontend-plugins/frontend-tools/auto-scene-switcher.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'auto-scene-switcher.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SceneSwitcher_t {
    QByteArrayData data[15];
    char stringdata0[289];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SceneSwitcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SceneSwitcher_t qt_meta_stringdata_SceneSwitcher = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SceneSwitcher"
QT_MOC_LITERAL(1, 14, 29), // "on_switches_currentRowChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 3), // "idx"
QT_MOC_LITERAL(4, 49, 16), // "on_close_clicked"
QT_MOC_LITERAL(5, 66, 14), // "on_add_clicked"
QT_MOC_LITERAL(6, 81, 17), // "on_remove_clicked"
QT_MOC_LITERAL(7, 99, 28), // "on_noMatchDontSwitch_clicked"
QT_MOC_LITERAL(8, 128, 24), // "on_noMatchSwitch_clicked"
QT_MOC_LITERAL(9, 153, 24), // "on_startAtLaunch_toggled"
QT_MOC_LITERAL(10, 178, 5), // "value"
QT_MOC_LITERAL(11, 184, 40), // "on_noMatchSwitchScene_current..."
QT_MOC_LITERAL(12, 225, 4), // "text"
QT_MOC_LITERAL(13, 230, 29), // "on_checkInterval_valueChanged"
QT_MOC_LITERAL(14, 260, 28) // "on_toggleStartButton_clicked"

    },
    "SceneSwitcher\0on_switches_currentRowChanged\0"
    "\0idx\0on_close_clicked\0on_add_clicked\0"
    "on_remove_clicked\0on_noMatchDontSwitch_clicked\0"
    "on_noMatchSwitch_clicked\0"
    "on_startAtLaunch_toggled\0value\0"
    "on_noMatchSwitchScene_currentTextChanged\0"
    "text\0on_checkInterval_valueChanged\0"
    "on_toggleStartButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SceneSwitcher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x0a /* Public */,
       4,    0,   67,    2, 0x0a /* Public */,
       5,    0,   68,    2, 0x0a /* Public */,
       6,    0,   69,    2, 0x0a /* Public */,
       7,    0,   70,    2, 0x0a /* Public */,
       8,    0,   71,    2, 0x0a /* Public */,
       9,    1,   72,    2, 0x0a /* Public */,
      11,    1,   75,    2, 0x0a /* Public */,
      13,    1,   78,    2, 0x0a /* Public */,
      14,    0,   81,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,

       0        // eod
};

void SceneSwitcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SceneSwitcher *_t = static_cast<SceneSwitcher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_switches_currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_close_clicked(); break;
        case 2: _t->on_add_clicked(); break;
        case 3: _t->on_remove_clicked(); break;
        case 4: _t->on_noMatchDontSwitch_clicked(); break;
        case 5: _t->on_noMatchSwitch_clicked(); break;
        case 6: _t->on_startAtLaunch_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_noMatchSwitchScene_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_checkInterval_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_toggleStartButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject SceneSwitcher::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SceneSwitcher.data,
      qt_meta_data_SceneSwitcher,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SceneSwitcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SceneSwitcher::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SceneSwitcher.stringdata0))
        return static_cast<void*>(const_cast< SceneSwitcher*>(this));
    return QDialog::qt_metacast(_clname);
}

int SceneSwitcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

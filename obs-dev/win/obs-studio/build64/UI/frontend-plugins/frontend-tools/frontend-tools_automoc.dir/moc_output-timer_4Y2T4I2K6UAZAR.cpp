/****************************************************************************
** Meta object code from reading C++ file 'output-timer.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../UI/frontend-plugins/frontend-tools/output-timer.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'output-timer.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OutputTimer_t {
    QByteArrayData data[13];
    char stringdata0[224];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OutputTimer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OutputTimer_t qt_meta_stringdata_OutputTimer = {
    {
QT_MOC_LITERAL(0, 0, 11), // "OutputTimer"
QT_MOC_LITERAL(1, 12, 20), // "StreamingTimerButton"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 20), // "RecordingTimerButton"
QT_MOC_LITERAL(4, 55, 16), // "StreamTimerStart"
QT_MOC_LITERAL(5, 72, 16), // "RecordTimerStart"
QT_MOC_LITERAL(6, 89, 15), // "StreamTimerStop"
QT_MOC_LITERAL(7, 105, 15), // "RecordTimerStop"
QT_MOC_LITERAL(8, 121, 24), // "UpdateStreamTimerDisplay"
QT_MOC_LITERAL(9, 146, 24), // "UpdateRecordTimerDisplay"
QT_MOC_LITERAL(10, 171, 14), // "ShowHideDialog"
QT_MOC_LITERAL(11, 186, 18), // "EventStopStreaming"
QT_MOC_LITERAL(12, 205, 18) // "EventStopRecording"

    },
    "OutputTimer\0StreamingTimerButton\0\0"
    "RecordingTimerButton\0StreamTimerStart\0"
    "RecordTimerStart\0StreamTimerStop\0"
    "RecordTimerStop\0UpdateStreamTimerDisplay\0"
    "UpdateRecordTimerDisplay\0ShowHideDialog\0"
    "EventStopStreaming\0EventStopRecording"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OutputTimer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x0a /* Public */,
      10,    0,   77,    2, 0x0a /* Public */,
      11,    0,   78,    2, 0x0a /* Public */,
      12,    0,   79,    2, 0x0a /* Public */,

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
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OutputTimer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OutputTimer *_t = static_cast<OutputTimer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->StreamingTimerButton(); break;
        case 1: _t->RecordingTimerButton(); break;
        case 2: _t->StreamTimerStart(); break;
        case 3: _t->RecordTimerStart(); break;
        case 4: _t->StreamTimerStop(); break;
        case 5: _t->RecordTimerStop(); break;
        case 6: _t->UpdateStreamTimerDisplay(); break;
        case 7: _t->UpdateRecordTimerDisplay(); break;
        case 8: _t->ShowHideDialog(); break;
        case 9: _t->EventStopStreaming(); break;
        case 10: _t->EventStopRecording(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject OutputTimer::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_OutputTimer.data,
      qt_meta_data_OutputTimer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OutputTimer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OutputTimer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OutputTimer.stringdata0))
        return static_cast<void*>(const_cast< OutputTimer*>(this));
    return QDialog::qt_metacast(_clname);
}

int OutputTimer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

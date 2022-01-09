/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../untitled42/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[32];
    char stringdata0[305];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(33, 0), // ""
QT_MOC_LITERAL(34, 16), // "on_Enter_clicked"
QT_MOC_LITERAL(51, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(75, 25), // "on_checkBox1_stateChanged"
QT_MOC_LITERAL(101, 4), // "arg1"
QT_MOC_LITERAL(106, 24), // "on_checkBox_stateChanged"
QT_MOC_LITERAL(131, 24), // "on_radioButton_5_clicked"
QT_MOC_LITERAL(156, 24), // "on_radioButton_6_clicked"
QT_MOC_LITERAL(181, 19), // "on_action_triggered"
QT_MOC_LITERAL(201, 17), // "on_action_hovered"
QT_MOC_LITERAL(219, 21), // "on_action_2_triggered"
QT_MOC_LITERAL(241, 19), // "on_action_3_hovered"
QT_MOC_LITERAL(261, 21), // "on_action_3_triggered"
QT_MOC_LITERAL(283, 21) // "on_action_6_triggered"

    },
    "MainWindow\0on_pushButton_clicked\0\0"
    "on_Enter_clicked\0on_pushButton_2_clicked\0"
    "on_checkBox1_stateChanged\0arg1\0"
    "on_checkBox_stateChanged\0"
    "on_radioButton_5_clicked\0"
    "on_radioButton_6_clicked\0on_action_triggered\0"
    "on_action_hovered\0on_action_2_triggered\0"
    "on_action_3_hovered\0on_action_3_triggered\0"
    "on_action_6_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x08,    1 /* Private */,
       3,    0,   93,    2, 0x08,    2 /* Private */,
       4,    0,   94,    2, 0x08,    3 /* Private */,
       5,    1,   95,    2, 0x08,    4 /* Private */,
       7,    1,   98,    2, 0x08,    6 /* Private */,
       8,    0,  101,    2, 0x08,    8 /* Private */,
       9,    0,  102,    2, 0x08,    9 /* Private */,
      10,    0,  103,    2, 0x08,   10 /* Private */,
      11,    0,  104,    2, 0x08,   11 /* Private */,
      12,    0,  105,    2, 0x08,   12 /* Private */,
      13,    0,  106,    2, 0x08,   13 /* Private */,
      14,    0,  107,    2, 0x08,   14 /* Private */,
      15,    0,  108,    2, 0x08,   15 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
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

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_Enter_clicked(); break;
        case 2: _t->on_pushButton_2_clicked(); break;
        case 3: _t->on_checkBox1_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_checkBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_radioButton_5_clicked(); break;
        case 6: _t->on_radioButton_6_clicked(); break;
        case 7: _t->on_action_triggered(); break;
        case 8: _t->on_action_hovered(); break;
        case 9: _t->on_action_2_triggered(); break;
        case 10: _t->on_action_3_hovered(); break;
        case 11: _t->on_action_3_triggered(); break;
        case 12: _t->on_action_6_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

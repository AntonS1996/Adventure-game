/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../AdvProj/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[22];
    char stringdata0[310];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 7), // "victory"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 9), // "showMoney"
QT_MOC_LITERAL(4, 30, 5), // "money"
QT_MOC_LITERAL(5, 36, 10), // "showHealth"
QT_MOC_LITERAL(6, 47, 6), // "health"
QT_MOC_LITERAL(7, 54, 20), // "on_TakeMoney_clicked"
QT_MOC_LITERAL(8, 75, 18), // "on_suicide_clicked"
QT_MOC_LITERAL(9, 94, 9), // "enterRoom"
QT_MOC_LITERAL(10, 104, 4), // "room"
QT_MOC_LITERAL(11, 109, 13), // "battleStarted"
QT_MOC_LITERAL(12, 123, 7), // "Battle*"
QT_MOC_LITERAL(13, 131, 6), // "battle"
QT_MOC_LITERAL(14, 138, 22), // "on_NorthButton_clicked"
QT_MOC_LITERAL(15, 161, 21), // "on_EastButton_clicked"
QT_MOC_LITERAL(16, 183, 21), // "on_WestButton_clicked"
QT_MOC_LITERAL(17, 205, 22), // "on_SouthButton_clicked"
QT_MOC_LITERAL(18, 228, 21), // "on_ShopButton_clicked"
QT_MOC_LITERAL(19, 250, 25), // "on_listView_doubleClicked"
QT_MOC_LITERAL(20, 276, 5), // "index"
QT_MOC_LITERAL(21, 282, 27) // "on_listView_2_doubleClicked"

    },
    "MainWindow\0victory\0\0showMoney\0money\0"
    "showHealth\0health\0on_TakeMoney_clicked\0"
    "on_suicide_clicked\0enterRoom\0room\0"
    "battleStarted\0Battle*\0battle\0"
    "on_NorthButton_clicked\0on_EastButton_clicked\0"
    "on_WestButton_clicked\0on_SouthButton_clicked\0"
    "on_ShopButton_clicked\0on_listView_doubleClicked\0"
    "index\0on_listView_2_doubleClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   85,    2, 0x08 /* Private */,
       5,    1,   88,    2, 0x08 /* Private */,
       7,    0,   91,    2, 0x08 /* Private */,
       8,    0,   92,    2, 0x08 /* Private */,
       9,    1,   93,    2, 0x08 /* Private */,
      11,    1,   96,    2, 0x08 /* Private */,
      14,    0,   99,    2, 0x08 /* Private */,
      15,    0,  100,    2, 0x08 /* Private */,
      16,    0,  101,    2, 0x08 /* Private */,
      17,    0,  102,    2, 0x08 /* Private */,
      18,    0,  103,    2, 0x08 /* Private */,
      19,    1,  104,    2, 0x08 /* Private */,
      21,    1,  107,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   20,
    QMetaType::Void, QMetaType::QModelIndex,   20,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->victory(); break;
        case 1: _t->showMoney((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->showHealth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_TakeMoney_clicked(); break;
        case 4: _t->on_suicide_clicked(); break;
        case 5: _t->enterRoom((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->battleStarted((*reinterpret_cast< Battle*(*)>(_a[1]))); break;
        case 7: _t->on_NorthButton_clicked(); break;
        case 8: _t->on_EastButton_clicked(); break;
        case 9: _t->on_WestButton_clicked(); break;
        case 10: _t->on_SouthButton_clicked(); break;
        case 11: _t->on_ShopButton_clicked(); break;
        case 12: _t->on_listView_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 13: _t->on_listView_2_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Battle* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::victory)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::victory()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'battledialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../AdvProj/battledialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'battledialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BattleDialog_t {
    QByteArrayData data[12];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BattleDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BattleDialog_t qt_meta_stringdata_BattleDialog = {
    {
QT_MOC_LITERAL(0, 0, 12), // "BattleDialog"
QT_MOC_LITERAL(1, 13, 6), // "attack"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 10), // "battle_hit"
QT_MOC_LITERAL(4, 32, 5), // "Hero*"
QT_MOC_LITERAL(5, 38, 1), // "h"
QT_MOC_LITERAL(6, 40, 8), // "Monster*"
QT_MOC_LITERAL(7, 49, 1), // "m"
QT_MOC_LITERAL(8, 51, 6), // "damage"
QT_MOC_LITERAL(9, 58, 1), // "i"
QT_MOC_LITERAL(10, 60, 22), // "on_buttonFight_clicked"
QT_MOC_LITERAL(11, 83, 22) // "on_buttonEvade_clicked"

    },
    "BattleDialog\0attack\0\0battle_hit\0Hero*\0"
    "h\0Monster*\0m\0damage\0i\0on_buttonFight_clicked\0"
    "on_buttonEvade_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BattleDialog[] = {

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
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    4,   35,    2, 0x08 /* Private */,
      10,    0,   44,    2, 0x08 /* Private */,
      11,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6, QMetaType::Int, QMetaType::Int,    5,    7,    8,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BattleDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BattleDialog *_t = static_cast<BattleDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->attack(); break;
        case 1: _t->battle_hit((*reinterpret_cast< Hero*(*)>(_a[1])),(*reinterpret_cast< Monster*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: _t->on_buttonFight_clicked(); break;
        case 3: _t->on_buttonEvade_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Hero* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Monster* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BattleDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BattleDialog::attack)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject BattleDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BattleDialog.data,
      qt_meta_data_BattleDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BattleDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BattleDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BattleDialog.stringdata0))
        return static_cast<void*>(const_cast< BattleDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int BattleDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void BattleDialog::attack()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

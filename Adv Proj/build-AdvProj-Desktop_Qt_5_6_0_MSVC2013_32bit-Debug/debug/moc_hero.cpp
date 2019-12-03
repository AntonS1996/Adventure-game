/****************************************************************************
** Meta object code from reading C++ file 'hero.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../AdvProj/hero.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hero.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Hero_t {
    QByteArrayData data[18];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Hero_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Hero_t qt_meta_stringdata_Hero = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Hero"
QT_MOC_LITERAL(1, 5, 8), // "heroDead"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 9), // "hero_dead"
QT_MOC_LITERAL(4, 25, 12), // "moneyChanged"
QT_MOC_LITERAL(5, 38, 5), // "money"
QT_MOC_LITERAL(6, 44, 13), // "healthChanged"
QT_MOC_LITERAL(7, 58, 6), // "health"
QT_MOC_LITERAL(8, 65, 10), // "hero_moved"
QT_MOC_LITERAL(9, 76, 4), // "room"
QT_MOC_LITERAL(10, 81, 17), // "inventory_changed"
QT_MOC_LITERAL(11, 99, 24), // "QList<shared_ptr<Item> >"
QT_MOC_LITERAL(12, 124, 5), // "items"
QT_MOC_LITERAL(13, 130, 4), // "move"
QT_MOC_LITERAL(14, 135, 10), // "Directions"
QT_MOC_LITERAL(15, 146, 9), // "direction"
QT_MOC_LITERAL(16, 156, 7), // "useItem"
QT_MOC_LITERAL(17, 164, 5) // "index"

    },
    "Hero\0heroDead\0\0hero_dead\0moneyChanged\0"
    "money\0healthChanged\0health\0hero_moved\0"
    "room\0inventory_changed\0QList<shared_ptr<Item> >\0"
    "items\0move\0Directions\0direction\0useItem\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Hero[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    1,   56,    2, 0x06 /* Public */,
       6,    1,   59,    2, 0x06 /* Public */,
       8,    1,   62,    2, 0x06 /* Public */,
      10,    1,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   68,    2, 0x0a /* Public */,
      16,    1,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, 0x80000000 | 11,   12,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::QModelIndex,   17,

       0        // eod
};

void Hero::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Hero *_t = static_cast<Hero *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->heroDead(); break;
        case 1: _t->hero_dead(); break;
        case 2: _t->moneyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->healthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->hero_moved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->inventory_changed((*reinterpret_cast< QList<shared_ptr<Item> >(*)>(_a[1]))); break;
        case 6: _t->move((*reinterpret_cast< Directions(*)>(_a[1]))); break;
        case 7: _t->useItem((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Hero::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Hero::heroDead)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Hero::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Hero::hero_dead)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Hero::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Hero::moneyChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Hero::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Hero::healthChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Hero::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Hero::hero_moved)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Hero::*_t)(QList<shared_ptr<Item>> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Hero::inventory_changed)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject Hero::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_Hero.data,
      qt_meta_data_Hero,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Hero::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Hero::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Hero.stringdata0))
        return static_cast<void*>(const_cast< Hero*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int Hero::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Hero::heroDead()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Hero::hero_dead()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Hero::moneyChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Hero::healthChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Hero::hero_moved(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Hero::inventory_changed(QList<shared_ptr<Item>> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE

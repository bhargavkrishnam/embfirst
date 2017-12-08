/****************************************************************************
** Meta object code from reading C++ file 'vegdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hotel/vegdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vegdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_vegDialog_t {
    QByteArrayData data[16];
    char stringdata[346];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_vegDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_vegDialog_t qt_meta_stringdata_vegDialog = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 23),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 4),
QT_MOC_LITERAL(4, 40, 25),
QT_MOC_LITERAL(5, 66, 25),
QT_MOC_LITERAL(6, 92, 25),
QT_MOC_LITERAL(7, 118, 25),
QT_MOC_LITERAL(8, 144, 23),
QT_MOC_LITERAL(9, 168, 25),
QT_MOC_LITERAL(10, 194, 25),
QT_MOC_LITERAL(11, 220, 25),
QT_MOC_LITERAL(12, 246, 25),
QT_MOC_LITERAL(13, 272, 26),
QT_MOC_LITERAL(14, 299, 21),
QT_MOC_LITERAL(15, 321, 23)
    },
    "vegDialog\0on_spinBox_valueChanged\0\0"
    "arg1\0on_spinBox_2_valueChanged\0"
    "on_spinBox_3_valueChanged\0"
    "on_spinBox_4_valueChanged\0"
    "on_spinBox_5_valueChanged\0"
    "on_pushButton_3_clicked\0"
    "on_spinBox_6_valueChanged\0"
    "on_spinBox_7_valueChanged\0"
    "on_spinBox_8_valueChanged\0"
    "on_spinBox_9_valueChanged\0"
    "on_spinBox_10_valueChanged\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_vegDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x08,
       4,    1,   82,    2, 0x08,
       5,    1,   85,    2, 0x08,
       6,    1,   88,    2, 0x08,
       7,    1,   91,    2, 0x08,
       8,    0,   94,    2, 0x08,
       9,    1,   95,    2, 0x08,
      10,    1,   98,    2, 0x08,
      11,    1,  101,    2, 0x08,
      12,    1,  104,    2, 0x08,
      13,    1,  107,    2, 0x08,
      14,    0,  110,    2, 0x08,
      15,    0,  111,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void vegDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        vegDialog *_t = static_cast<vegDialog *>(_o);
        switch (_id) {
        case 0: _t->on_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_spinBox_2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_spinBox_3_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_spinBox_4_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_spinBox_5_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_pushButton_3_clicked(); break;
        case 6: _t->on_spinBox_6_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_spinBox_7_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_spinBox_8_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_spinBox_9_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_spinBox_10_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_pushButton_clicked(); break;
        case 12: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject vegDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_vegDialog.data,
      qt_meta_data_vegDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *vegDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *vegDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_vegDialog.stringdata))
        return static_cast<void*>(const_cast< vegDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int vegDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

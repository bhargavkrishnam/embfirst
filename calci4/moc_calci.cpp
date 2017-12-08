/****************************************************************************
** Meta object code from reading C++ file 'calci.h'
**
** Created: Thu Apr 27 17:12:19 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "calci.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calci.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_calci[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x08,
      24,    6,    6,    6, 0x08,
      41,    6,    6,    6, 0x08,
      61,    6,    6,    6, 0x08,
      79,    6,    6,    6, 0x08,
      98,    6,    6,    6, 0x08,
     115,    6,    6,    6, 0x08,
     135,    6,    6,    6, 0x08,
     154,    6,    6,    6, 0x08,
     172,    6,    6,    6, 0x08,
     190,    6,    6,    6, 0x08,
     209,    6,    6,    6, 0x08,
     228,    6,    6,    6, 0x08,
     246,    6,    6,    6, 0x08,
     264,    6,    6,    6, 0x08,
     281,    6,    6,    6, 0x08,
     300,    6,    6,    6, 0x08,
     321,    6,    6,    6, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_calci[] = {
    "calci\0\0on_one_clicked()\0on_two_clicked()\0"
    "on_equals_clicked()\0on_plus_clicked()\0"
    "on_minus_clicked()\0on_mul_clicked()\0"
    "on_divide_clicked()\0on_three_clicked()\0"
    "on_four_clicked()\0on_five_clicked()\0"
    "on_seven_clicked()\0on_eight_clicked()\0"
    "on_nine_clicked()\0on_zero_clicked()\0"
    "on_six_clicked()\0on_clear_clicked()\0"
    "on_modules_clicked()\0on_dot_clicked()\0"
};

const QMetaObject calci::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_calci,
      qt_meta_data_calci, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &calci::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *calci::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *calci::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_calci))
        return static_cast<void*>(const_cast< calci*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int calci::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_one_clicked(); break;
        case 1: on_two_clicked(); break;
        case 2: on_equals_clicked(); break;
        case 3: on_plus_clicked(); break;
        case 4: on_minus_clicked(); break;
        case 5: on_mul_clicked(); break;
        case 6: on_divide_clicked(); break;
        case 7: on_three_clicked(); break;
        case 8: on_four_clicked(); break;
        case 9: on_five_clicked(); break;
        case 10: on_seven_clicked(); break;
        case 11: on_eight_clicked(); break;
        case 12: on_nine_clicked(); break;
        case 13: on_zero_clicked(); break;
        case 14: on_six_clicked(); break;
        case 15: on_clear_clicked(); break;
        case 16: on_modules_clicked(); break;
        case 17: on_dot_clicked(); break;
        default: ;
        }
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

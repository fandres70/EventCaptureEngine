/* Copyright (c) <2014> Author Vance King Saxbe. A, and contributors Power Dominion Enterprise, Precieux Consulting and other contributors. Modelled, Architected and designed by Vance King Saxbe. A. with the geeks from GoldSax Consulting and GoldSax Technologies email @vsaxbe@yahoo.com. Development teams from Power Dominion Enterprise, Precieux Consulting. Project sponsored by GoldSax Foundation, GoldSax Group and executed by GoldSax Manager.*//****************************************************************************
** Meta object code from reading C++ file 'replace.h'
**
** Created: Thu Sep 26 13:47:05 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/replace.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'replace.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Replace[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Replace[] = {
    "Replace\0\0btnReplace_Clicked()\0"
};

const QMetaObject Replace::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Replace,
      qt_meta_data_Replace, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Replace::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Replace::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Replace::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Replace))
        return static_cast<void*>(const_cast< Replace*>(this));
    return QDialog::qt_metacast(_clname);
}

int Replace::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: btnReplace_Clicked(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

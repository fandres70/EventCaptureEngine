/****************************************************************************
** Meta object code from reading C++ file 'filesdetails.h'
**
** Created: Thu Sep 26 16:48:01 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/filesdetails.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filesdetails.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FilesDetails[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      32,   13,   13,   13, 0x08,
      51,   13,   13,   13, 0x08,
      69,   67,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FilesDetails[] = {
    "FilesDetails\0\0btnPlus_Clicked()\0"
    "btnMinus_Clicked()\0btnOK_Clicked()\0,\0"
    "tblFiles_indexChange(int,int)\0"
};

const QMetaObject FilesDetails::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FilesDetails,
      qt_meta_data_FilesDetails, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FilesDetails::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FilesDetails::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FilesDetails::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FilesDetails))
        return static_cast<void*>(const_cast< FilesDetails*>(this));
    return QDialog::qt_metacast(_clname);
}

int FilesDetails::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: btnPlus_Clicked(); break;
        case 1: btnMinus_Clicked(); break;
        case 2: btnOK_Clicked(); break;
        case 3: tblFiles_indexChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'SpellTextEdit.h'
**
** Created: Thu Sep 26 13:47:00 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/SpellTextEdit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SpellTextEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SpellTextEdit[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   15,   14,   14, 0x05,
      37,   14,   14,   14, 0x05,
      53,   51,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      86,   14,   14,   14, 0x08,
     100,   14,   14,   14, 0x08,
     115,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SpellTextEdit[] = {
    "SpellTextEdit\0\0word\0addWord(QString)\0"
    "checkedText()\0,\0applySpellCheck(QString,QString)\0"
    "correctWord()\0slot_addWord()\0"
    "slot_ignoreWord()\0"
};

const QMetaObject SpellTextEdit::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_SpellTextEdit,
      qt_meta_data_SpellTextEdit, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SpellTextEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SpellTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SpellTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SpellTextEdit))
        return static_cast<void*>(const_cast< SpellTextEdit*>(this));
    return QTextEdit::qt_metacast(_clname);
}

int SpellTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: addWord((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: checkedText(); break;
        case 2: applySpellCheck((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: correctWord(); break;
        case 4: slot_addWord(); break;
        case 5: slot_ignoreWord(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void SpellTextEdit::addWord(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SpellTextEdit::checkedText()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void SpellTextEdit::applySpellCheck(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
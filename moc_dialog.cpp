/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,
      26,    7,    7,    7, 0x08,
      44,    7,    7,    7, 0x08,
      51,    7,    7,    7, 0x08,
      60,   58,    7,    7, 0x08,
      87,    7,    7,    7, 0x08,
     109,    7,    7,    7, 0x08,
     131,    7,    7,    7, 0x08,
     152,    7,    7,    7, 0x08,
     173,    7,    7,    7, 0x08,
     195,    7,    7,    7, 0x08,
     217,    7,    7,    7, 0x08,
     240,    7,    7,    7, 0x08,
     263,    7,    7,    7, 0x08,
     285,    7,    7,    7, 0x08,
     307,    7,    7,    7, 0x08,
     329,    7,    7,    7, 0x08,
     351,    7,    7,    7, 0x08,
     376,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dialog[] = {
    "Dialog\0\0on_Load_clicked()\0on_Save_clicked()\0"
    "Load()\0Save()\0,\0traverseNode(QDomNode,int)\0"
    "on_pushARMp_clicked()\0on_pushARMm_clicked()\0"
    "on_pushPOp_clicked()\0on_pushPOm_clicked()\0"
    "on_pushSZIp_clicked()\0on_pushSZIm_clicked()\0"
    "on_pushVTSSp_clicked()\0on_pushVTSSm_clicked()\0"
    "on_pushKIAp_clicked()\0on_pushKIAm_clicked()\0"
    "on_pushCSCp_clicked()\0on_pushCSCm_clicked()\0"
    "on_pushRESULTp_clicked()\0"
    "on_pushRESULTm_clicked()\0"
};

void Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Dialog *_t = static_cast<Dialog *>(_o);
        switch (_id) {
        case 0: _t->on_Load_clicked(); break;
        case 1: _t->on_Save_clicked(); break;
        case 2: _t->Load(); break;
        case 3: _t->Save(); break;
        case 4: _t->traverseNode((*reinterpret_cast< const QDomNode(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->on_pushARMp_clicked(); break;
        case 6: _t->on_pushARMm_clicked(); break;
        case 7: _t->on_pushPOp_clicked(); break;
        case 8: _t->on_pushPOm_clicked(); break;
        case 9: _t->on_pushSZIp_clicked(); break;
        case 10: _t->on_pushSZIm_clicked(); break;
        case 11: _t->on_pushVTSSp_clicked(); break;
        case 12: _t->on_pushVTSSm_clicked(); break;
        case 13: _t->on_pushKIAp_clicked(); break;
        case 14: _t->on_pushKIAm_clicked(); break;
        case 15: _t->on_pushCSCp_clicked(); break;
        case 16: _t->on_pushCSCm_clicked(); break;
        case 17: _t->on_pushRESULTp_clicked(); break;
        case 18: _t->on_pushRESULTm_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog,
      qt_meta_data_Dialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog))
        return static_cast<void*>(const_cast< Dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

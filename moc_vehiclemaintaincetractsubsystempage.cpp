/****************************************************************************
** Meta object code from reading C++ file 'vehiclemaintaincetractsubsystempage.h'
**
** Created: Thu Jul 19 19:26:25 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vehiclemaintaincetractsubsystempage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehiclemaintaincetractsubsystempage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehicleMaintainceTractSubsystemPage[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      37,   36,   36,   36, 0x08,
      58,   36,   36,   36, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehicleMaintainceTractSubsystemPage[] = {
    "VehicleMaintainceTractSubsystemPage\0"
    "\0on_BTNHome_pressed()\0on_BTN1_pressed()\0"
};

const QMetaObject VehicleMaintainceTractSubsystemPage::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_VehicleMaintainceTractSubsystemPage,
      qt_meta_data_VehicleMaintainceTractSubsystemPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehicleMaintainceTractSubsystemPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehicleMaintainceTractSubsystemPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehicleMaintainceTractSubsystemPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleMaintainceTractSubsystemPage))
        return static_cast<void*>(const_cast< VehicleMaintainceTractSubsystemPage*>(this));
    return MyBase::qt_metacast(_clname);
}

int VehicleMaintainceTractSubsystemPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_BTNHome_pressed(); break;
        case 1: on_BTN1_pressed(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

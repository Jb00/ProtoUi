/****************************************************************************
** Meta object code from reading C++ file 'facilitywindow.h'
**
** Created: Wed Jan 26 11:11:56 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../FacilityFolder/FacilityWindow/facilitywindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'facilitywindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FacilityWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      32,   15,   15,   15, 0x08,
      50,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FacilityWindow[] = {
    "FacilityWindow\0\0btn_Occ_click()\0"
    "btn_Total_click()\0btn_avai_Click()\0"
};

const QMetaObject FacilityWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_FacilityWindow,
      qt_meta_data_FacilityWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FacilityWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FacilityWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FacilityWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FacilityWindow))
        return static_cast<void*>(const_cast< FacilityWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int FacilityWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: btn_Occ_click(); break;
        case 1: btn_Total_click(); break;
        case 2: btn_avai_Click(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

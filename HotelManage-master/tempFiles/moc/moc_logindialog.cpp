/****************************************************************************
** Meta object code from reading C++ file 'logindialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Src/logindialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logindialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LoginDialog_t {
    QByteArrayData data[11];
    char stringdata[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoginDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoginDialog_t qt_meta_stringdata_LoginDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "LoginDialog"
QT_MOC_LITERAL(1, 12, 19), // "on_btnLogin_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 22), // "on_btnMenu_Min_clicked"
QT_MOC_LITERAL(4, 56, 24), // "on_btnMenu_Close_clicked"
QT_MOC_LITERAL(5, 81, 23), // "on_btnresgister_clicked"
QT_MOC_LITERAL(6, 105, 30), // "on_radioButtonCustomer_clicked"
QT_MOC_LITERAL(7, 136, 27), // "on_radioButtonAdmin_clicked"
QT_MOC_LITERAL(8, 164, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(9, 186, 16), // "on_ceshi_clicked"
QT_MOC_LITERAL(10, 203, 12) // "on_p_clicked"

    },
    "LoginDialog\0on_btnLogin_clicked\0\0"
    "on_btnMenu_Min_clicked\0on_btnMenu_Close_clicked\0"
    "on_btnresgister_clicked\0"
    "on_radioButtonCustomer_clicked\0"
    "on_radioButtonAdmin_clicked\0"
    "on_pushButton_clicked\0on_ceshi_clicked\0"
    "on_p_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoginDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LoginDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LoginDialog *_t = static_cast<LoginDialog *>(_o);
        switch (_id) {
        case 0: _t->on_btnLogin_clicked(); break;
        case 1: _t->on_btnMenu_Min_clicked(); break;
        case 2: _t->on_btnMenu_Close_clicked(); break;
        case 3: _t->on_btnresgister_clicked(); break;
        case 4: _t->on_radioButtonCustomer_clicked(); break;
        case 5: _t->on_radioButtonAdmin_clicked(); break;
        //case 6: _t->on_pushButton_clicked(); break;
        //case 7: _t->on_ceshi_clicked(); break;
        case 8: _t->on_p_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject LoginDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LoginDialog.data,
      qt_meta_data_LoginDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LoginDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoginDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LoginDialog.stringdata))
        return static_cast<void*>(const_cast< LoginDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int LoginDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

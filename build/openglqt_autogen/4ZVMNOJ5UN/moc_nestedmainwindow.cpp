/****************************************************************************
** Meta object code from reading C++ file 'nestedmainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.17)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../UI/include/nestedmainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nestedmainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.17. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NestedMainWindow_t {
    QByteArrayData data[11];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NestedMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NestedMainWindow_t qt_meta_stringdata_NestedMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 16), // "NestedMainWindow"
QT_MOC_LITERAL(1, 17, 8), // "showSlot"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 3), // "pos"
QT_MOC_LITERAL(4, 31, 18), // "actionOneTriggered"
QT_MOC_LITERAL(5, 50, 18), // "actionTwoTriggered"
QT_MOC_LITERAL(6, 69, 45), // "on_gearGroupButton_customCont..."
QT_MOC_LITERAL(7, 115, 20), // "actionThreeTriggered"
QT_MOC_LITERAL(8, 136, 19), // "actionFourTriggered"
QT_MOC_LITERAL(9, 156, 21), // "on_gearButton_clicked"
QT_MOC_LITERAL(10, 178, 26) // "on_gearGroupButton_clicked"

    },
    "NestedMainWindow\0showSlot\0\0pos\0"
    "actionOneTriggered\0actionTwoTriggered\0"
    "on_gearGroupButton_customContextMenuRequested\0"
    "actionThreeTriggered\0actionFourTriggered\0"
    "on_gearButton_clicked\0on_gearGroupButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NestedMainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       4,    0,   57,    2, 0x08 /* Private */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    1,   59,    2, 0x08 /* Private */,
       7,    0,   62,    2, 0x08 /* Private */,
       8,    0,   63,    2, 0x08 /* Private */,
       9,    0,   64,    2, 0x08 /* Private */,
      10,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NestedMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NestedMainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showSlot((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->actionOneTriggered(); break;
        case 2: _t->actionTwoTriggered(); break;
        case 3: _t->on_gearGroupButton_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 4: _t->actionThreeTriggered(); break;
        case 5: _t->actionFourTriggered(); break;
        case 6: _t->on_gearButton_clicked(); break;
        case 7: _t->on_gearGroupButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NestedMainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_NestedMainWindow.data,
    qt_meta_data_NestedMainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NestedMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NestedMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NestedMainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int NestedMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE

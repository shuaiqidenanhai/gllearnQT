/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.17)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../UI/include/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.17. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RenderThread_t {
    QByteArrayData data[3];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RenderThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RenderThread_t qt_meta_stringdata_RenderThread = {
    {
QT_MOC_LITERAL(0, 0, 12), // "RenderThread"
QT_MOC_LITERAL(1, 13, 8), // "finished"
QT_MOC_LITERAL(2, 22, 0) // ""

    },
    "RenderThread\0finished\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RenderThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void RenderThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RenderThread *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RenderThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RenderThread::finished)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject RenderThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_RenderThread.data,
    qt_meta_data_RenderThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RenderThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RenderThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RenderThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int RenderThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void RenderThread::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[34];
    char stringdata0[494];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 13), // "newActionSlot"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 14), // "openActionSlot"
QT_MOC_LITERAL(4, 41, 14), // "saveActionSlot"
QT_MOC_LITERAL(5, 56, 15), // "openNewPageSlot"
QT_MOC_LITERAL(6, 72, 13), // "addActionSlot"
QT_MOC_LITERAL(7, 86, 18), // "detailedActionSlot"
QT_MOC_LITERAL(8, 105, 22), // "addDrawNormalToCentral"
QT_MOC_LITERAL(9, 128, 11), // "drawNoraml*"
QT_MOC_LITERAL(10, 140, 10), // "DrawNormal"
QT_MOC_LITERAL(11, 151, 13), // "addDrawNormal"
QT_MOC_LITERAL(12, 165, 17), // "receiveParameters"
QT_MOC_LITERAL(13, 183, 12), // "addGearNode1"
QT_MOC_LITERAL(14, 196, 15), // "addBearingNode1"
QT_MOC_LITERAL(15, 212, 13), // "addShaftNode1"
QT_MOC_LITERAL(16, 226, 20), // "on_treeView_clicked1"
QT_MOC_LITERAL(17, 247, 11), // "QModelIndex"
QT_MOC_LITERAL(18, 259, 5), // "index"
QT_MOC_LITERAL(19, 265, 9), // "gearPhoto"
QT_MOC_LITERAL(20, 275, 15), // "openTwoPageSlot"
QT_MOC_LITERAL(21, 291, 17), // "openThreePageSlot"
QT_MOC_LITERAL(22, 309, 16), // "openFourPageSlot"
QT_MOC_LITERAL(23, 326, 16), // "openFivePageSlot"
QT_MOC_LITERAL(24, 343, 15), // "openSixPageSlot"
QT_MOC_LITERAL(25, 359, 17), // "openSevenPageSlot"
QT_MOC_LITERAL(26, 377, 17), // "openEightPageSlot"
QT_MOC_LITERAL(27, 395, 16), // "openNinePageSlot"
QT_MOC_LITERAL(28, 412, 25), // "replaceAddComponentWidget"
QT_MOC_LITERAL(29, 438, 8), // "QWidget*"
QT_MOC_LITERAL(30, 447, 9), // "newWidget"
QT_MOC_LITERAL(31, 457, 13), // "hideComponent"
QT_MOC_LITERAL(32, 471, 8), // "nodeName"
QT_MOC_LITERAL(33, 480, 13) // "showComponent"

    },
    "MainWindow\0newActionSlot\0\0openActionSlot\0"
    "saveActionSlot\0openNewPageSlot\0"
    "addActionSlot\0detailedActionSlot\0"
    "addDrawNormalToCentral\0drawNoraml*\0"
    "DrawNormal\0addDrawNormal\0receiveParameters\0"
    "addGearNode1\0addBearingNode1\0addShaftNode1\0"
    "on_treeView_clicked1\0QModelIndex\0index\0"
    "gearPhoto\0openTwoPageSlot\0openThreePageSlot\0"
    "openFourPageSlot\0openFivePageSlot\0"
    "openSixPageSlot\0openSevenPageSlot\0"
    "openEightPageSlot\0openNinePageSlot\0"
    "replaceAddComponentWidget\0QWidget*\0"
    "newWidget\0hideComponent\0nodeName\0"
    "showComponent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  139,    2, 0x08 /* Private */,
       3,    0,  140,    2, 0x08 /* Private */,
       4,    0,  141,    2, 0x08 /* Private */,
       5,    0,  142,    2, 0x08 /* Private */,
       6,    0,  143,    2, 0x08 /* Private */,
       7,    0,  144,    2, 0x08 /* Private */,
       8,    1,  145,    2, 0x08 /* Private */,
      11,    0,  148,    2, 0x08 /* Private */,
      12,    0,  149,    2, 0x08 /* Private */,
      13,    0,  150,    2, 0x08 /* Private */,
      14,    0,  151,    2, 0x08 /* Private */,
      15,    0,  152,    2, 0x08 /* Private */,
      16,    1,  153,    2, 0x08 /* Private */,
      19,    0,  156,    2, 0x08 /* Private */,
      20,    0,  157,    2, 0x08 /* Private */,
      21,    0,  158,    2, 0x08 /* Private */,
      22,    0,  159,    2, 0x08 /* Private */,
      23,    0,  160,    2, 0x08 /* Private */,
      24,    0,  161,    2, 0x08 /* Private */,
      25,    0,  162,    2, 0x08 /* Private */,
      26,    0,  163,    2, 0x08 /* Private */,
      27,    0,  164,    2, 0x08 /* Private */,
      28,    1,  165,    2, 0x08 /* Private */,
      31,    1,  168,    2, 0x08 /* Private */,
      33,    1,  171,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void, QMetaType::QString,   32,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->newActionSlot(); break;
        case 1: _t->openActionSlot(); break;
        case 2: _t->saveActionSlot(); break;
        case 3: _t->openNewPageSlot(); break;
        case 4: _t->addActionSlot(); break;
        case 5: _t->detailedActionSlot(); break;
        case 6: _t->addDrawNormalToCentral((*reinterpret_cast< drawNoraml*(*)>(_a[1]))); break;
        case 7: _t->addDrawNormal(); break;
        case 8: _t->receiveParameters(); break;
        case 9: _t->addGearNode1(); break;
        case 10: _t->addBearingNode1(); break;
        case 11: _t->addShaftNode1(); break;
        case 12: _t->on_treeView_clicked1((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 13: _t->gearPhoto(); break;
        case 14: _t->openTwoPageSlot(); break;
        case 15: _t->openThreePageSlot(); break;
        case 16: _t->openFourPageSlot(); break;
        case 17: _t->openFivePageSlot(); break;
        case 18: _t->openSixPageSlot(); break;
        case 19: _t->openSevenPageSlot(); break;
        case 20: _t->openEightPageSlot(); break;
        case 21: _t->openNinePageSlot(); break;
        case 22: _t->replaceAddComponentWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 23: _t->hideComponent((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->showComponent((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

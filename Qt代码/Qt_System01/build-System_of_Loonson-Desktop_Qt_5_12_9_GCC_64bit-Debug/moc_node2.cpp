/****************************************************************************
** Meta object code from reading C++ file 'node2.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../System_of_Loonson/node2.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'node2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Node2_t {
    QByteArrayData data[12];
    char stringdata0[230];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Node2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Node2_t qt_meta_stringdata_Node2 = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Node2"
QT_MOC_LITERAL(1, 6, 13), // "Signal_Return"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 28), // "on_pushButton_return_clicked"
QT_MOC_LITERAL(4, 50, 26), // "on_pushButton_temp_clicked"
QT_MOC_LITERAL(5, 77, 26), // "on_pushButton_humi_clicked"
QT_MOC_LITERAL(6, 104, 27), // "on_pushButton_light_clicked"
QT_MOC_LITERAL(7, 132, 16), // "Slot_RefreshTime"
QT_MOC_LITERAL(8, 149, 12), // "Slot_Warning"
QT_MOC_LITERAL(9, 162, 11), // "error_index"
QT_MOC_LITERAL(10, 174, 26), // "on_pushButton_data_clicked"
QT_MOC_LITERAL(11, 201, 28) // "on_pushButton_powder_clicked"

    },
    "Node2\0Signal_Return\0\0on_pushButton_return_clicked\0"
    "on_pushButton_temp_clicked\0"
    "on_pushButton_humi_clicked\0"
    "on_pushButton_light_clicked\0"
    "Slot_RefreshTime\0Slot_Warning\0error_index\0"
    "on_pushButton_data_clicked\0"
    "on_pushButton_powder_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Node2[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    1,   65,    2, 0x08 /* Private */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Node2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Node2 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Signal_Return(); break;
        case 1: _t->on_pushButton_return_clicked(); break;
        case 2: _t->on_pushButton_temp_clicked(); break;
        case 3: _t->on_pushButton_humi_clicked(); break;
        case 4: _t->on_pushButton_light_clicked(); break;
        case 5: _t->Slot_RefreshTime(); break;
        case 6: _t->Slot_Warning((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 7: _t->on_pushButton_data_clicked(); break;
        case 8: _t->on_pushButton_powder_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Node2::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Node2::Signal_Return)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Node2::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Node2.data,
    qt_meta_data_Node2,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Node2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Node2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Node2.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Node2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Node2::Signal_Return()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

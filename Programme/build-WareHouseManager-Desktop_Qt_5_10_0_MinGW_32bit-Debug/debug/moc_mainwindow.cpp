/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../WareHouseManager/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[14];
    char stringdata0[387];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 29), // "on_boutonAjoutArticle_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 26), // "on_boutonSupprimer_clicked"
QT_MOC_LITERAL(4, 69, 38), // "on_boutonConsulterFicheProdui..."
QT_MOC_LITERAL(5, 108, 40), // "on_pushButtonCreationUtilisat..."
QT_MOC_LITERAL(6, 149, 25), // "on_boutonModifier_clicked"
QT_MOC_LITERAL(7, 175, 43), // "on_pushButtonValidationModifi..."
QT_MOC_LITERAL(8, 219, 25), // "on_AjoutEmballage_clicked"
QT_MOC_LITERAL(9, 245, 35), // "on_ButonAfficheStockComplet_c..."
QT_MOC_LITERAL(10, 281, 9), // "miseAJour"
QT_MOC_LITERAL(11, 291, 32), // "on_butonAjoutFournisseur_clicked"
QT_MOC_LITERAL(12, 324, 33), // "on_BoutonValiderReception_cli..."
QT_MOC_LITERAL(13, 358, 28) // "on_BoutonExportExcel_clicked"

    },
    "MainWindow\0on_boutonAjoutArticle_clicked\0"
    "\0on_boutonSupprimer_clicked\0"
    "on_boutonConsulterFicheProduit_clicked\0"
    "on_pushButtonCreationUtilisateur_clicked\0"
    "on_boutonModifier_clicked\0"
    "on_pushButtonValidationModification_clicked\0"
    "on_AjoutEmballage_clicked\0"
    "on_ButonAfficheStockComplet_clicked\0"
    "miseAJour\0on_butonAjoutFournisseur_clicked\0"
    "on_BoutonValiderReception_clicked\0"
    "on_BoutonExportExcel_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_boutonAjoutArticle_clicked(); break;
        case 1: _t->on_boutonSupprimer_clicked(); break;
        case 2: _t->on_boutonConsulterFicheProduit_clicked(); break;
        case 3: _t->on_pushButtonCreationUtilisateur_clicked(); break;
        case 4: _t->on_boutonModifier_clicked(); break;
        case 5: _t->on_pushButtonValidationModification_clicked(); break;
        case 6: _t->on_AjoutEmballage_clicked(); break;
        case 7: _t->on_ButonAfficheStockComplet_clicked(); break;
        case 8: _t->miseAJour(); break;
        case 9: _t->on_butonAjoutFournisseur_clicked(); break;
        case 10: _t->on_BoutonValiderReception_clicked(); break;
        case 11: _t->on_BoutonExportExcel_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


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
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

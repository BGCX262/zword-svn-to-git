/****************************************************************************
** Meta object code from reading C++ file 'ZWord_01.h'
**
** Created: Thu Feb 24 00:46:13 2011
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ZWord_01.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ZWord_01.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Zword_01[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      28,   22,    9,    9, 0x08,
      51,   22,    9,    9, 0x08,
      79,    9,    9,    9, 0x08,
      95,    9,    9,    9, 0x08,
     112,    9,    9,    9, 0x08,
     127,    9,    9,    9, 0x08,
     140,    9,    9,    9, 0x08,
     161,    9,    9,    9, 0x08,
     179,    9,    9,    9, 0x08,
     202,    9,    9,    9, 0x08,
     225,    9,    9,    9, 0x08,
     245,    9,    9,    9, 0x08,
     265,    9,    9,    9, 0x08,
     283,    9,    9,    9, 0x08,
     298,    9,    9,    9, 0x08,
     315,    9,    9,    9, 0x08,
     342,    9,    9,    9, 0x08,
     363,    9,    9,    9, 0x08,
     389,    9,    9,    9, 0x08,
     410,    9,    9,    9, 0x08,
     443,  437,    9,    9, 0x08,
     468,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Zword_01[] = {
    "Zword_01\0\0Translate()\0index\0"
    "Translate(QModelIndex)\0"
    "ChangeLanguage(QModelIndex)\0ReadAppConfig()\0"
    "WriteAppConfig()\0OnAddNewWord()\0"
    "OnListLang()\0OnShowFrameAddLang()\0"
    "OnCreateNewLang()\0OnAddNewWordExecute1()\0"
    "OnAddNewWordExecute2()\0OnAddNewWordClose()\0"
    "OnAddNewLangClose()\0OnListLangClose()\0"
    "OnAppSetting()\0OnSettingClose()\0"
    "OnChangeStyle(QModelIndex)\0"
    "OnCBAlwaysOnTop(int)\0OnCBMonitorClipBoard(int)\0"
    "OnClipBoardChanged()\0OnTransparancyChanged(int)\0"
    "event\0closeEvent(QCloseEvent*)\0"
    "OnDictDel()\0"
};

const QMetaObject Zword_01::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Zword_01,
      qt_meta_data_Zword_01, 0 }
};

const QMetaObject *Zword_01::metaObject() const
{
    return &staticMetaObject;
}

void *Zword_01::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Zword_01))
        return static_cast<void*>(const_cast< Zword_01*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Zword_01::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: Translate(); break;
        case 1: Translate((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 2: ChangeLanguage((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 3: ReadAppConfig(); break;
        case 4: WriteAppConfig(); break;
        case 5: OnAddNewWord(); break;
        case 6: OnListLang(); break;
        case 7: OnShowFrameAddLang(); break;
        case 8: OnCreateNewLang(); break;
        case 9: OnAddNewWordExecute1(); break;
        case 10: OnAddNewWordExecute2(); break;
        case 11: OnAddNewWordClose(); break;
        case 12: OnAddNewLangClose(); break;
        case 13: OnListLangClose(); break;
        case 14: OnAppSetting(); break;
        case 15: OnSettingClose(); break;
        case 16: OnChangeStyle((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 17: OnCBAlwaysOnTop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: OnCBMonitorClipBoard((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: OnClipBoardChanged(); break;
        case 20: OnTransparancyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 22: OnDictDel(); break;
        default: ;
        }
        _id -= 23;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'meshmainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mesh/src/meshmainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'meshmainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MeshMainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      45,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      28,   23,   15,   15, 0x0a,
      52,   23,   15,   15, 0x0a,
      76,   15,   15,   15, 0x0a,
     102,   15,   15,   15, 0x0a,
     126,   15,   15,   15, 0x0a,
     151,   15,   15,   15, 0x0a,
     167,   15,   15,   15, 0x0a,
     181,   15,   15,   15, 0x0a,
     197,   15,   15,   15, 0x0a,
     215,   15,   15,   15, 0x0a,
     232,   15,   15,   15, 0x0a,
     249,   15,   15,   15, 0x0a,
     265,   15,   15,   15, 0x0a,
     280,   15,   15,   15, 0x0a,
     294,   15,   15,   15, 0x0a,
     311,   15,   15,   15, 0x0a,
     327,   15,   15,   15, 0x0a,
     343,   15,   15,   15, 0x0a,
     356,   15,   15,   15, 0x0a,
     374,   15,   15,   15, 0x0a,
     396,   15,   15,   15, 0x0a,
     423,   15,   15,   15, 0x0a,
     451,  447,   15,   15, 0x0a,
     473,  447,   15,   15, 0x0a,
     492,   15,   15,   15, 0x0a,
     501,   15,   15,   15, 0x0a,
     529,  523,   15,   15, 0x0a,
     566,  562,   15,   15, 0x0a,
     591,  523,   15,   15, 0x0a,
     625,  623,   15,   15, 0x0a,
     642,  447,   15,   15, 0x0a,
     660,   15,   15,   15, 0x0a,
     682,   15,   15,   15, 0x0a,
     717,  708,  703,   15, 0x0a,
     759,   15,   15,   15, 0x0a,
     798,  784,   15,   15, 0x0a,
     827,  825,   15,   15, 0x0a,
     845,  825,   15,   15, 0x0a,
     864,  825,   15,   15, 0x0a,
     882,  825,   15,   15, 0x0a,
     901,  825,   15,   15, 0x0a,
     920,  825,   15,   15, 0x0a,
     940,  938,   15,   15, 0x0a,
     966,  447,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MeshMainWindow[] = {
    "MeshMainWindow\0\0open()\0name\0"
    "createFunction(QString)\0createPSurface(QString)\0"
    "pickCoordSystem(QAction*)\0"
    "pickPlotStyle(QAction*)\0"
    "pickFloorStyle(QAction*)\0pickAxesColor()\0"
    "pickBgColor()\0pickMeshColor()\0"
    "pickNumberColor()\0pickLabelColor()\0"
    "pickTitleColor()\0pickDataColor()\0"
    "pickLighting()\0resetColors()\0"
    "pickNumberFont()\0pickLabelFont()\0"
    "pickTitleFont()\0resetFonts()\0"
    "setStandardView()\0toggleAnimation(bool)\0"
    "toggleProjectionMode(bool)\0"
    "toggleColorLegend(bool)\0val\0"
    "toggleAutoScale(bool)\0toggleShader(bool)\0"
    "rotate()\0setPolygonOffset(int)\0x,y,z\0"
    "showRotate(double,double,double)\0x,y\0"
    "showShift(double,double)\0"
    "showScale(double,double,double)\0z\0"
    "showZoom(double)\0showNormals(bool)\0"
    "setNormalQuality(int)\0setNormalLength(int)\0"
    "bool\0cv,fname\0openColorMap(Qwt3D::ColorVector&,QString)\0"
    "adaptDataColors(QString)\0majors,minors\0"
    "updateColorLegend(int,int)\0b\0"
    "setLeftGrid(bool)\0setRightGrid(bool)\0"
    "setCeilGrid(bool)\0setFloorGrid(bool)\0"
    "setFrontGrid(bool)\0setBackGrid(bool)\0"
    ",\0setGrid(Qwt3D::SIDE,bool)\0"
    "enableLighting(bool)\0"
};

void MeshMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MeshMainWindow *_t = static_cast<MeshMainWindow *>(_o);
        switch (_id) {
        case 0: _t->open(); break;
        case 1: _t->createFunction((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->createPSurface((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->pickCoordSystem((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 4: _t->pickPlotStyle((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 5: _t->pickFloorStyle((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 6: _t->pickAxesColor(); break;
        case 7: _t->pickBgColor(); break;
        case 8: _t->pickMeshColor(); break;
        case 9: _t->pickNumberColor(); break;
        case 10: _t->pickLabelColor(); break;
        case 11: _t->pickTitleColor(); break;
        case 12: _t->pickDataColor(); break;
        case 13: _t->pickLighting(); break;
        case 14: _t->resetColors(); break;
        case 15: _t->pickNumberFont(); break;
        case 16: _t->pickLabelFont(); break;
        case 17: _t->pickTitleFont(); break;
        case 18: _t->resetFonts(); break;
        case 19: _t->setStandardView(); break;
        case 20: _t->toggleAnimation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->toggleProjectionMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->toggleColorLegend((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->toggleAutoScale((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->toggleShader((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->rotate(); break;
        case 26: _t->setPolygonOffset((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->showRotate((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 28: _t->showShift((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 29: _t->showScale((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 30: _t->showZoom((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 31: _t->showNormals((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->setNormalQuality((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->setNormalLength((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: { bool _r = _t->openColorMap((*reinterpret_cast< Qwt3D::ColorVector(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 35: _t->adaptDataColors((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 36: _t->updateColorLegend((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 37: _t->setLeftGrid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->setRightGrid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->setCeilGrid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->setFloorGrid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: _t->setFrontGrid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->setBackGrid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->setGrid((*reinterpret_cast< Qwt3D::SIDE(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 44: _t->enableLighting((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MeshMainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MeshMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MeshMainWindow,
      qt_meta_data_MeshMainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MeshMainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MeshMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MeshMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MeshMainWindow))
        return static_cast<void*>(const_cast< MeshMainWindow*>(this));
    if (!strcmp(_clname, "Ui::MainWindow"))
        return static_cast< Ui::MainWindow*>(const_cast< MeshMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MeshMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

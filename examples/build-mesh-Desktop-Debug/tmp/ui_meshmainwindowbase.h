/********************************************************************************
** Form generated from reading UI file 'meshmainwindowbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESHMAINWINDOWBASE_H
#define UI_MESHMAINWINDOWBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *openFile;
    QAction *openMeshFile;
    QAction *animation;
    QAction *Exit;
    QAction *Box;
    QAction *Frame;
    QAction *None;
    QAction *front;
    QAction *back;
    QAction *right;
    QAction *left;
    QAction *ceil;
    QAction *floor;
    QAction *pointstyle;
    QAction *wireframe;
    QAction *hiddenline;
    QAction *polygon;
    QAction *filledmesh;
    QAction *nodata;
    QAction *floordata;
    QAction *flooriso;
    QAction *floornone;
    QAction *normals;
    QAction *axescolor;
    QAction *backgroundcolor;
    QAction *meshcolor;
    QAction *numbercolor;
    QAction *labelcolor;
    QAction *titlecolor;
    QAction *datacolor;
    QAction *resetcolor;
    QAction *numberfont;
    QAction *labelfont;
    QAction *titlefont;
    QAction *resetfont;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QHBoxLayout *hboxLayout1;
    QPushButton *normButton;
    QPushButton *lighting;
    QCheckBox *lightingswitch;
    QVBoxLayout *vboxLayout;
    QLabel *label_2;
    QSlider *offsSlider;
    QSpacerItem *spacerItem;
    QVBoxLayout *vboxLayout1;
    QLabel *label_3;
    QSlider *resSlider;
    QSpacerItem *spacerItem1;
    QHBoxLayout *hboxLayout2;
    QFrame *frame;
    QVBoxLayout *vboxLayout2;
    QVBoxLayout *vboxLayout3;
    QCheckBox *projection;
    QCheckBox *colorlegend;
    QCheckBox *autoscale;
    QCheckBox *mouseinput;
    QCheckBox *shader;
    QVBoxLayout *vboxLayout4;
    QLabel *label;
    QHBoxLayout *hboxLayout3;
    QSlider *normalsquality;
    QSlider *normalslength;
    QMenuBar *menuBar;
    QMenu *filemenu;
    QMenu *colormenu;
    QMenu *fontmenu;
    QToolBar *mainToolbar;
    QToolBar *csToolbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        openFile = new QAction(MainWindow);
        openFile->setObjectName(QString::fromUtf8("openFile"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        openFile->setIcon(icon);
        openMeshFile = new QAction(MainWindow);
        openMeshFile->setObjectName(QString::fromUtf8("openMeshFile"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/filecell.png"), QSize(), QIcon::Normal, QIcon::Off);
        openMeshFile->setIcon(icon1);
        animation = new QAction(MainWindow);
        animation->setObjectName(QString::fromUtf8("animation"));
        animation->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/movie.png"), QSize(), QIcon::Normal, QIcon::Off);
        animation->setIcon(icon2);
        Exit = new QAction(MainWindow);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Box = new QAction(MainWindow);
        Box->setObjectName(QString::fromUtf8("Box"));
        Box->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/box.png"), QSize(), QIcon::Normal, QIcon::Off);
        Box->setIcon(icon3);
        Frame = new QAction(MainWindow);
        Frame->setObjectName(QString::fromUtf8("Frame"));
        Frame->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/frame.png"), QSize(), QIcon::Normal, QIcon::Off);
        Frame->setIcon(icon4);
        None = new QAction(MainWindow);
        None->setObjectName(QString::fromUtf8("None"));
        None->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/none.png"), QSize(), QIcon::Normal, QIcon::Off);
        None->setIcon(icon5);
        front = new QAction(MainWindow);
        front->setObjectName(QString::fromUtf8("front"));
        front->setCheckable(true);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/gridfr.png"), QSize(), QIcon::Normal, QIcon::Off);
        front->setIcon(icon6);
        back = new QAction(MainWindow);
        back->setObjectName(QString::fromUtf8("back"));
        back->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/gridb.png"), QSize(), QIcon::Normal, QIcon::Off);
        back->setIcon(icon7);
        right = new QAction(MainWindow);
        right->setObjectName(QString::fromUtf8("right"));
        right->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/gridr.png"), QSize(), QIcon::Normal, QIcon::Off);
        right->setIcon(icon8);
        left = new QAction(MainWindow);
        left->setObjectName(QString::fromUtf8("left"));
        left->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/gridl.png"), QSize(), QIcon::Normal, QIcon::Off);
        left->setIcon(icon9);
        ceil = new QAction(MainWindow);
        ceil->setObjectName(QString::fromUtf8("ceil"));
        ceil->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/gridc.png"), QSize(), QIcon::Normal, QIcon::Off);
        ceil->setIcon(icon10);
        floor = new QAction(MainWindow);
        floor->setObjectName(QString::fromUtf8("floor"));
        floor->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/gridf.png"), QSize(), QIcon::Normal, QIcon::Off);
        floor->setIcon(icon11);
        pointstyle = new QAction(MainWindow);
        pointstyle->setObjectName(QString::fromUtf8("pointstyle"));
        pointstyle->setCheckable(true);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/scattered.png"), QSize(), QIcon::Normal, QIcon::Off);
        pointstyle->setIcon(icon12);
        wireframe = new QAction(MainWindow);
        wireframe->setObjectName(QString::fromUtf8("wireframe"));
        wireframe->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/wireframe.png"), QSize(), QIcon::Normal, QIcon::Off);
        wireframe->setIcon(icon13);
        hiddenline = new QAction(MainWindow);
        hiddenline->setObjectName(QString::fromUtf8("hiddenline"));
        hiddenline->setCheckable(true);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/hiddenline.png"), QSize(), QIcon::Normal, QIcon::Off);
        hiddenline->setIcon(icon14);
        polygon = new QAction(MainWindow);
        polygon->setObjectName(QString::fromUtf8("polygon"));
        polygon->setCheckable(true);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/polygon.png"), QSize(), QIcon::Normal, QIcon::Off);
        polygon->setIcon(icon15);
        filledmesh = new QAction(MainWindow);
        filledmesh->setObjectName(QString::fromUtf8("filledmesh"));
        filledmesh->setCheckable(true);
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/filledmesh.png"), QSize(), QIcon::Normal, QIcon::Off);
        filledmesh->setIcon(icon16);
        nodata = new QAction(MainWindow);
        nodata->setObjectName(QString::fromUtf8("nodata"));
        nodata->setCheckable(true);
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/images/nodata.png"), QSize(), QIcon::Normal, QIcon::Off);
        nodata->setIcon(icon17);
        floordata = new QAction(MainWindow);
        floordata->setObjectName(QString::fromUtf8("floordata"));
        floordata->setCheckable(true);
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/images/floordata.png"), QSize(), QIcon::Normal, QIcon::Off);
        floordata->setIcon(icon18);
        flooriso = new QAction(MainWindow);
        flooriso->setObjectName(QString::fromUtf8("flooriso"));
        flooriso->setCheckable(true);
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/images/flooriso.png"), QSize(), QIcon::Normal, QIcon::Off);
        flooriso->setIcon(icon19);
        floornone = new QAction(MainWindow);
        floornone->setObjectName(QString::fromUtf8("floornone"));
        floornone->setCheckable(true);
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/images/floorempty.png"), QSize(), QIcon::Normal, QIcon::Off);
        floornone->setIcon(icon20);
        normals = new QAction(MainWindow);
        normals->setObjectName(QString::fromUtf8("normals"));
        normals->setCheckable(true);
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/images/normals.png"), QSize(), QIcon::Normal, QIcon::Off);
        normals->setIcon(icon21);
        axescolor = new QAction(MainWindow);
        axescolor->setObjectName(QString::fromUtf8("axescolor"));
        backgroundcolor = new QAction(MainWindow);
        backgroundcolor->setObjectName(QString::fromUtf8("backgroundcolor"));
        meshcolor = new QAction(MainWindow);
        meshcolor->setObjectName(QString::fromUtf8("meshcolor"));
        numbercolor = new QAction(MainWindow);
        numbercolor->setObjectName(QString::fromUtf8("numbercolor"));
        labelcolor = new QAction(MainWindow);
        labelcolor->setObjectName(QString::fromUtf8("labelcolor"));
        titlecolor = new QAction(MainWindow);
        titlecolor->setObjectName(QString::fromUtf8("titlecolor"));
        datacolor = new QAction(MainWindow);
        datacolor->setObjectName(QString::fromUtf8("datacolor"));
        resetcolor = new QAction(MainWindow);
        resetcolor->setObjectName(QString::fromUtf8("resetcolor"));
        numberfont = new QAction(MainWindow);
        numberfont->setObjectName(QString::fromUtf8("numberfont"));
        labelfont = new QAction(MainWindow);
        labelfont->setObjectName(QString::fromUtf8("labelfont"));
        titlefont = new QAction(MainWindow);
        titlefont->setObjectName(QString::fromUtf8("titlefont"));
        resetfont = new QAction(MainWindow);
        resetfont->setObjectName(QString::fromUtf8("resetfont"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
        gridLayout->setContentsMargins(8, 8, 8, 8);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        normButton = new QPushButton(centralWidget);
        normButton->setObjectName(QString::fromUtf8("normButton"));

        hboxLayout1->addWidget(normButton);

        lighting = new QPushButton(centralWidget);
        lighting->setObjectName(QString::fromUtf8("lighting"));
        lighting->setEnabled(false);

        hboxLayout1->addWidget(lighting);

        lightingswitch = new QCheckBox(centralWidget);
        lightingswitch->setObjectName(QString::fromUtf8("lightingswitch"));

        hboxLayout1->addWidget(lightingswitch);

        vboxLayout = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        vboxLayout->addWidget(label_2);

        offsSlider = new QSlider(centralWidget);
        offsSlider->setObjectName(QString::fromUtf8("offsSlider"));
        offsSlider->setMaximum(30);
        offsSlider->setPageStep(5);
        offsSlider->setValue(5);
        offsSlider->setOrientation(Qt::Horizontal);
        offsSlider->setTickPosition(QSlider::TicksAbove);
        offsSlider->setTickInterval(2);

        vboxLayout->addWidget(offsSlider);


        hboxLayout1->addLayout(vboxLayout);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        vboxLayout1 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        vboxLayout1->addWidget(label_3);

        resSlider = new QSlider(centralWidget);
        resSlider->setObjectName(QString::fromUtf8("resSlider"));
        resSlider->setMinimum(1);
        resSlider->setMaximum(100);
        resSlider->setOrientation(Qt::Horizontal);
        resSlider->setTickPosition(QSlider::TicksAbove);
        resSlider->setTickInterval(5);

        vboxLayout1->addWidget(resSlider);


        hboxLayout1->addLayout(vboxLayout1);


        hboxLayout->addLayout(hboxLayout1);

        spacerItem1 = new QSpacerItem(71, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);

        hboxLayout2->addWidget(frame);

        vboxLayout2 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        vboxLayout3 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout3->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        projection = new QCheckBox(centralWidget);
        projection->setObjectName(QString::fromUtf8("projection"));
        projection->setChecked(true);

        vboxLayout3->addWidget(projection);

        colorlegend = new QCheckBox(centralWidget);
        colorlegend->setObjectName(QString::fromUtf8("colorlegend"));

        vboxLayout3->addWidget(colorlegend);

        autoscale = new QCheckBox(centralWidget);
        autoscale->setObjectName(QString::fromUtf8("autoscale"));
        autoscale->setChecked(true);

        vboxLayout3->addWidget(autoscale);

        mouseinput = new QCheckBox(centralWidget);
        mouseinput->setObjectName(QString::fromUtf8("mouseinput"));
        mouseinput->setChecked(true);

        vboxLayout3->addWidget(mouseinput);

        shader = new QCheckBox(centralWidget);
        shader->setObjectName(QString::fromUtf8("shader"));
        shader->setChecked(true);

        vboxLayout3->addWidget(shader);


        vboxLayout2->addLayout(vboxLayout3);

        vboxLayout4 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout4->setSpacing(6);
#endif
        vboxLayout4->setContentsMargins(0, 0, 0, 0);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        vboxLayout4->addWidget(label);

        hboxLayout3 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout3->setSpacing(6);
#endif
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        normalsquality = new QSlider(centralWidget);
        normalsquality->setObjectName(QString::fromUtf8("normalsquality"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(normalsquality->sizePolicy().hasHeightForWidth());
        normalsquality->setSizePolicy(sizePolicy2);
        normalsquality->setMinimum(3);
        normalsquality->setMaximum(32);
        normalsquality->setPageStep(4);
        normalsquality->setValue(3);
        normalsquality->setOrientation(Qt::Vertical);
        normalsquality->setInvertedAppearance(true);
        normalsquality->setTickPosition(QSlider::TicksAbove);

        hboxLayout3->addWidget(normalsquality);

        normalslength = new QSlider(centralWidget);
        normalslength->setObjectName(QString::fromUtf8("normalslength"));
        sizePolicy2.setHeightForWidth(normalslength->sizePolicy().hasHeightForWidth());
        normalslength->setSizePolicy(sizePolicy2);
        normalslength->setMinimum(1);
        normalslength->setMaximum(100);
        normalslength->setPageStep(5);
        normalslength->setValue(8);
        normalslength->setOrientation(Qt::Vertical);
        normalslength->setInvertedAppearance(true);
        normalslength->setTickPosition(QSlider::TicksAbove);

        hboxLayout3->addWidget(normalslength);


        vboxLayout4->addLayout(hboxLayout3);


        vboxLayout2->addLayout(vboxLayout4);


        hboxLayout2->addLayout(vboxLayout2);


        gridLayout->addLayout(hboxLayout2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 18));
        filemenu = new QMenu(menuBar);
        filemenu->setObjectName(QString::fromUtf8("filemenu"));
        colormenu = new QMenu(menuBar);
        colormenu->setObjectName(QString::fromUtf8("colormenu"));
        fontmenu = new QMenu(menuBar);
        fontmenu->setObjectName(QString::fromUtf8("fontmenu"));
        MainWindow->setMenuBar(menuBar);
        mainToolbar = new QToolBar(MainWindow);
        mainToolbar->setObjectName(QString::fromUtf8("mainToolbar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolbar);
        csToolbar = new QToolBar(MainWindow);
        csToolbar->setObjectName(QString::fromUtf8("csToolbar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, csToolbar);

        menuBar->addAction(filemenu->menuAction());
        menuBar->addAction(colormenu->menuAction());
        menuBar->addAction(fontmenu->menuAction());
        filemenu->addAction(openFile);
        filemenu->addAction(openMeshFile);
        filemenu->addAction(animation);
        filemenu->addAction(Exit);
        colormenu->addAction(axescolor);
        colormenu->addAction(backgroundcolor);
        colormenu->addAction(meshcolor);
        colormenu->addAction(numbercolor);
        colormenu->addAction(labelcolor);
        colormenu->addAction(titlecolor);
        colormenu->addAction(datacolor);
        colormenu->addAction(resetcolor);
        fontmenu->addAction(numberfont);
        fontmenu->addAction(labelfont);
        fontmenu->addAction(titlefont);
        fontmenu->addAction(resetfont);
        mainToolbar->addAction(openFile);
        mainToolbar->addAction(openMeshFile);
        mainToolbar->addSeparator();
        mainToolbar->addAction(animation);
        mainToolbar->addSeparator();
        csToolbar->addAction(Box);
        csToolbar->addAction(Frame);
        csToolbar->addAction(None);
        csToolbar->addAction(front);
        csToolbar->addAction(back);
        csToolbar->addAction(right);
        csToolbar->addAction(left);
        csToolbar->addAction(ceil);
        csToolbar->addAction(floor);
        csToolbar->addAction(pointstyle);
        csToolbar->addAction(wireframe);
        csToolbar->addAction(hiddenline);
        csToolbar->addAction(polygon);
        csToolbar->addAction(filledmesh);
        csToolbar->addAction(nodata);
        csToolbar->addAction(floordata);
        csToolbar->addAction(flooriso);
        csToolbar->addAction(floornone);
        csToolbar->addAction(normals);

        retranslateUi(MainWindow);
        QObject::connect(lightingswitch, SIGNAL(toggled(bool)), lighting, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Mesh2", 0, QApplication::UnicodeUTF8));
        openFile->setText(QApplication::translate("MainWindow", "Open File", 0, QApplication::UnicodeUTF8));
        openFile->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        openMeshFile->setText(QApplication::translate("MainWindow", "Open FEM File", 0, QApplication::UnicodeUTF8));
        animation->setText(QApplication::translate("MainWindow", "Animation", 0, QApplication::UnicodeUTF8));
        Exit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        Exit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        Box->setText(QApplication::translate("MainWindow", "Box", 0, QApplication::UnicodeUTF8));
        Frame->setText(QApplication::translate("MainWindow", "Frame", 0, QApplication::UnicodeUTF8));
        None->setText(QApplication::translate("MainWindow", "None", 0, QApplication::UnicodeUTF8));
        front->setText(QApplication::translate("MainWindow", "front", 0, QApplication::UnicodeUTF8));
        back->setText(QApplication::translate("MainWindow", "back", 0, QApplication::UnicodeUTF8));
        right->setText(QApplication::translate("MainWindow", "right", 0, QApplication::UnicodeUTF8));
        left->setText(QApplication::translate("MainWindow", "left", 0, QApplication::UnicodeUTF8));
        ceil->setText(QApplication::translate("MainWindow", "ceil", 0, QApplication::UnicodeUTF8));
        floor->setText(QApplication::translate("MainWindow", "floor", 0, QApplication::UnicodeUTF8));
        pointstyle->setText(QApplication::translate("MainWindow", "pointstyle", 0, QApplication::UnicodeUTF8));
        wireframe->setText(QApplication::translate("MainWindow", "wireframe", 0, QApplication::UnicodeUTF8));
        hiddenline->setText(QApplication::translate("MainWindow", "hiddenline", 0, QApplication::UnicodeUTF8));
        polygon->setText(QApplication::translate("MainWindow", "polygon", 0, QApplication::UnicodeUTF8));
        filledmesh->setText(QApplication::translate("MainWindow", "filledmesh", 0, QApplication::UnicodeUTF8));
        nodata->setText(QApplication::translate("MainWindow", "nodata", 0, QApplication::UnicodeUTF8));
        floordata->setText(QApplication::translate("MainWindow", "floordata", 0, QApplication::UnicodeUTF8));
        flooriso->setText(QApplication::translate("MainWindow", "flooriso", 0, QApplication::UnicodeUTF8));
        floornone->setText(QApplication::translate("MainWindow", "floornone", 0, QApplication::UnicodeUTF8));
        normals->setText(QApplication::translate("MainWindow", "normals", 0, QApplication::UnicodeUTF8));
        axescolor->setText(QApplication::translate("MainWindow", "&Axes", 0, QApplication::UnicodeUTF8));
        backgroundcolor->setText(QApplication::translate("MainWindow", "&Background", 0, QApplication::UnicodeUTF8));
        meshcolor->setText(QApplication::translate("MainWindow", "&Mesh", 0, QApplication::UnicodeUTF8));
        numbercolor->setText(QApplication::translate("MainWindow", "&Numbers", 0, QApplication::UnicodeUTF8));
        labelcolor->setText(QApplication::translate("MainWindow", "&Label", 0, QApplication::UnicodeUTF8));
        titlecolor->setText(QApplication::translate("MainWindow", "&Caption", 0, QApplication::UnicodeUTF8));
        datacolor->setText(QApplication::translate("MainWindow", "Data Color", 0, QApplication::UnicodeUTF8));
        resetcolor->setText(QApplication::translate("MainWindow", "&Reset", 0, QApplication::UnicodeUTF8));
        numberfont->setText(QApplication::translate("MainWindow", "&Scale numbering", 0, QApplication::UnicodeUTF8));
        labelfont->setText(QApplication::translate("MainWindow", "&Axes label", 0, QApplication::UnicodeUTF8));
        titlefont->setText(QApplication::translate("MainWindow", "&Caption", 0, QApplication::UnicodeUTF8));
        resetfont->setText(QApplication::translate("MainWindow", "&Reset", 0, QApplication::UnicodeUTF8));
        normButton->setText(QApplication::translate("MainWindow", "Std", 0, QApplication::UnicodeUTF8));
        lighting->setText(QApplication::translate("MainWindow", "Lighting", 0, QApplication::UnicodeUTF8));
        lightingswitch->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Polygon Offset</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Resolution</p></body></html>", 0, QApplication::UnicodeUTF8));
        projection->setText(QApplication::translate("MainWindow", "Ortho", 0, QApplication::UnicodeUTF8));
        colorlegend->setText(QApplication::translate("MainWindow", "Legend", 0, QApplication::UnicodeUTF8));
        autoscale->setText(QApplication::translate("MainWindow", "Autoscale", 0, QApplication::UnicodeUTF8));
        mouseinput->setText(QApplication::translate("MainWindow", "Mouse", 0, QApplication::UnicodeUTF8));
        shader->setText(QApplication::translate("MainWindow", "Shading", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Normals</p></body></html>", 0, QApplication::UnicodeUTF8));
        filemenu->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        colormenu->setTitle(QApplication::translate("MainWindow", "Color", 0, QApplication::UnicodeUTF8));
        fontmenu->setTitle(QApplication::translate("MainWindow", "Fonts", 0, QApplication::UnicodeUTF8));
        mainToolbar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
        csToolbar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESHMAINWINDOWBASE_H

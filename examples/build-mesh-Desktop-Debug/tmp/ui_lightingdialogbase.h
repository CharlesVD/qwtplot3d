/********************************************************************************
** Form generated from reading UI file 'lightingdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIGHTINGDIALOGBASE_H
#define UI_LIGHTINGDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout1;
    QFrame *frame;
    QHBoxLayout *hboxLayout;
    QPushButton *stdlight;
    QSpacerItem *spacerItem;
    QPushButton *buttonOk;
    QVBoxLayout *vboxLayout;
    QVBoxLayout *vboxLayout1;
    QLabel *label;
    QSlider *ambdiffSL;
    QVBoxLayout *vboxLayout2;
    QLabel *label_2;
    QSlider *specSL;
    QVBoxLayout *vboxLayout3;
    QLabel *label_3;
    QSlider *shinSL;
    QVBoxLayout *vboxLayout4;
    QLabel *label_3_2;
    QSlider *emissSL;
    QVBoxLayout *vboxLayout5;
    QLabel *label_3_2_2;
    QSlider *distSL;

    void setupUi(QDialog *LightingDialogBase)
    {
        if (LightingDialogBase->objectName().isEmpty())
            LightingDialogBase->setObjectName(QString::fromUtf8("LightingDialogBase"));
        LightingDialogBase->resize(428, 330);
        layoutWidget = new QWidget(LightingDialogBase);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 280, 351, 33));
        gridLayout = new QGridLayout(LightingDialogBase);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
        gridLayout->setContentsMargins(8, 8, 8, 8);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout1 = new QGridLayout();
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        frame = new QFrame(LightingDialogBase);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);

        gridLayout1->addWidget(frame, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        stdlight = new QPushButton(LightingDialogBase);
        stdlight->setObjectName(QString::fromUtf8("stdlight"));

        hboxLayout->addWidget(stdlight);

        spacerItem = new QSpacerItem(91, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        buttonOk = new QPushButton(LightingDialogBase);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));

        hboxLayout->addWidget(buttonOk);


        gridLayout1->addLayout(hboxLayout, 1, 0, 1, 1);

        vboxLayout = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout1 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        label = new QLabel(LightingDialogBase);
        label->setObjectName(QString::fromUtf8("label"));

        vboxLayout1->addWidget(label);

        ambdiffSL = new QSlider(LightingDialogBase);
        ambdiffSL->setObjectName(QString::fromUtf8("ambdiffSL"));
        ambdiffSL->setMaximum(100);
        ambdiffSL->setValue(80);
        ambdiffSL->setOrientation(Qt::Horizontal);

        vboxLayout1->addWidget(ambdiffSL);


        vboxLayout->addLayout(vboxLayout1);

        vboxLayout2 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        label_2 = new QLabel(LightingDialogBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        vboxLayout2->addWidget(label_2);

        specSL = new QSlider(LightingDialogBase);
        specSL->setObjectName(QString::fromUtf8("specSL"));
        specSL->setMaximum(100);
        specSL->setValue(30);
        specSL->setSliderPosition(30);
        specSL->setOrientation(Qt::Horizontal);

        vboxLayout2->addWidget(specSL);


        vboxLayout->addLayout(vboxLayout2);

        vboxLayout3 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout3->setSpacing(6);
#endif
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        label_3 = new QLabel(LightingDialogBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        vboxLayout3->addWidget(label_3);

        shinSL = new QSlider(LightingDialogBase);
        shinSL->setObjectName(QString::fromUtf8("shinSL"));
        shinSL->setMaximum(1000);
        shinSL->setValue(500);
        shinSL->setOrientation(Qt::Horizontal);

        vboxLayout3->addWidget(shinSL);


        vboxLayout->addLayout(vboxLayout3);

        vboxLayout4 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout4->setSpacing(6);
#endif
        vboxLayout4->setContentsMargins(0, 0, 0, 0);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        label_3_2 = new QLabel(LightingDialogBase);
        label_3_2->setObjectName(QString::fromUtf8("label_3_2"));

        vboxLayout4->addWidget(label_3_2);

        emissSL = new QSlider(LightingDialogBase);
        emissSL->setObjectName(QString::fromUtf8("emissSL"));
        emissSL->setMaximum(100);
        emissSL->setValue(0);
        emissSL->setOrientation(Qt::Horizontal);

        vboxLayout4->addWidget(emissSL);


        vboxLayout->addLayout(vboxLayout4);

        vboxLayout5 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout5->setSpacing(6);
#endif
        vboxLayout5->setContentsMargins(0, 0, 0, 0);
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        label_3_2_2 = new QLabel(LightingDialogBase);
        label_3_2_2->setObjectName(QString::fromUtf8("label_3_2_2"));

        vboxLayout5->addWidget(label_3_2_2);

        distSL = new QSlider(LightingDialogBase);
        distSL->setObjectName(QString::fromUtf8("distSL"));
        distSL->setMaximum(1000);
        distSL->setValue(100);
        distSL->setOrientation(Qt::Horizontal);

        vboxLayout5->addWidget(distSL);


        vboxLayout->addLayout(vboxLayout5);


        gridLayout1->addLayout(vboxLayout, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout1, 0, 0, 1, 1);


        retranslateUi(LightingDialogBase);

        QMetaObject::connectSlotsByName(LightingDialogBase);
    } // setupUi

    void retranslateUi(QDialog *LightingDialogBase)
    {
        LightingDialogBase->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        stdlight->setText(QApplication::translate("Dialog", "Std", 0, QApplication::UnicodeUTF8));
        buttonOk->setText(QApplication::translate("Dialog", "&Ok", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Ambient &amp; Diffuse Part</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Specular Part</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Dialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Shininess</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3_2->setText(QApplication::translate("Dialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Emission</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3_2_2->setText(QApplication::translate("Dialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Distance</p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIGHTINGDIALOGBASE_H

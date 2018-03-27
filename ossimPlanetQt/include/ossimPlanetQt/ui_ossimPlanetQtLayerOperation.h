/********************************************************************************
** Form generated from reading UI file 'ossimPlanetQtLayerOperation.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OSSIMPLANETQTLAYEROPERATION_H
#define UI_OSSIMPLANETQTLAYEROPERATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ossimPlanetQtLayerOperation
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *theOperationTypeGroupBox;
    QHBoxLayout *hboxLayout;
    QComboBox *theOperationType;
    QGroupBox *theParameterGroupBox;
    QHBoxLayout *hboxLayout1;
    QStackedWidget *theParameterStack;
    QWidget *Opacity;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout2;
    QVBoxLayout *vboxLayout2;
    QLabel *theOpacityReferenceLayerLabel;
    QSlider *theOpacitySlider;
    QVBoxLayout *vboxLayout3;
    QLabel *theOpacityTopLayerLabel;
    QWidget *Swipe;
    QHBoxLayout *hboxLayout3;
    QSlider *theSwipeSlider;
    QWidget *ChangeDetectionPage;
    QVBoxLayout *vboxLayout4;
    QHBoxLayout *hboxLayout4;
    QSpacerItem *spacerItem;
    QPushButton *theCloseButton;

    void setupUi(QDialog *ossimPlanetQtLayerOperation)
    {
        if (ossimPlanetQtLayerOperation->objectName().isEmpty())
            ossimPlanetQtLayerOperation->setObjectName(QString::fromUtf8("ossimPlanetQtLayerOperation"));
        ossimPlanetQtLayerOperation->setWindowModality(Qt::WindowModal);
        ossimPlanetQtLayerOperation->resize(652, 344);
        vboxLayout = new QVBoxLayout(ossimPlanetQtLayerOperation);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        theOperationTypeGroupBox = new QGroupBox(ossimPlanetQtLayerOperation);
        theOperationTypeGroupBox->setObjectName(QString::fromUtf8("theOperationTypeGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(theOperationTypeGroupBox->sizePolicy().hasHeightForWidth());
        theOperationTypeGroupBox->setSizePolicy(sizePolicy);
        hboxLayout = new QHBoxLayout(theOperationTypeGroupBox);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        theOperationType = new QComboBox(theOperationTypeGroupBox);
        theOperationType->setObjectName(QString::fromUtf8("theOperationType"));

        hboxLayout->addWidget(theOperationType);


        vboxLayout->addWidget(theOperationTypeGroupBox);

        theParameterGroupBox = new QGroupBox(ossimPlanetQtLayerOperation);
        theParameterGroupBox->setObjectName(QString::fromUtf8("theParameterGroupBox"));
        hboxLayout1 = new QHBoxLayout(theParameterGroupBox);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        theParameterStack = new QStackedWidget(theParameterGroupBox);
        theParameterStack->setObjectName(QString::fromUtf8("theParameterStack"));
        Opacity = new QWidget();
        Opacity->setObjectName(QString::fromUtf8("Opacity"));
        vboxLayout1 = new QVBoxLayout(Opacity);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        theOpacityReferenceLayerLabel = new QLabel(Opacity);
        theOpacityReferenceLayerLabel->setObjectName(QString::fromUtf8("theOpacityReferenceLayerLabel"));

        vboxLayout2->addWidget(theOpacityReferenceLayerLabel);


        hboxLayout2->addLayout(vboxLayout2);

        theOpacitySlider = new QSlider(Opacity);
        theOpacitySlider->setObjectName(QString::fromUtf8("theOpacitySlider"));
        theOpacitySlider->setMaximum(100);
        theOpacitySlider->setValue(50);
        theOpacitySlider->setOrientation(Qt::Horizontal);

        hboxLayout2->addWidget(theOpacitySlider);

        vboxLayout3 = new QVBoxLayout();
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        theOpacityTopLayerLabel = new QLabel(Opacity);
        theOpacityTopLayerLabel->setObjectName(QString::fromUtf8("theOpacityTopLayerLabel"));

        vboxLayout3->addWidget(theOpacityTopLayerLabel);


        hboxLayout2->addLayout(vboxLayout3);


        vboxLayout1->addLayout(hboxLayout2);

        theParameterStack->addWidget(Opacity);
        Swipe = new QWidget();
        Swipe->setObjectName(QString::fromUtf8("Swipe"));
        hboxLayout3 = new QHBoxLayout(Swipe);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        theSwipeSlider = new QSlider(Swipe);
        theSwipeSlider->setObjectName(QString::fromUtf8("theSwipeSlider"));
        theSwipeSlider->setMinimum(-1024);
        theSwipeSlider->setMaximum(1024);
        theSwipeSlider->setSingleStep(1);
        theSwipeSlider->setOrientation(Qt::Horizontal);

        hboxLayout3->addWidget(theSwipeSlider);

        theParameterStack->addWidget(Swipe);
        ChangeDetectionPage = new QWidget();
        ChangeDetectionPage->setObjectName(QString::fromUtf8("ChangeDetectionPage"));
        vboxLayout4 = new QVBoxLayout(ChangeDetectionPage);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        theParameterStack->addWidget(ChangeDetectionPage);

        hboxLayout1->addWidget(theParameterStack);


        vboxLayout->addWidget(theParameterGroupBox);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem);

        theCloseButton = new QPushButton(ossimPlanetQtLayerOperation);
        theCloseButton->setObjectName(QString::fromUtf8("theCloseButton"));

        hboxLayout4->addWidget(theCloseButton);


        vboxLayout->addLayout(hboxLayout4);


        retranslateUi(ossimPlanetQtLayerOperation);

        theParameterStack->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ossimPlanetQtLayerOperation);
    } // setupUi

    void retranslateUi(QDialog *ossimPlanetQtLayerOperation)
    {
        ossimPlanetQtLayerOperation->setWindowTitle(QApplication::translate("ossimPlanetQtLayerOperation", "Layer Operation", 0, QApplication::UnicodeUTF8));
        theOperationTypeGroupBox->setTitle(QApplication::translate("ossimPlanetQtLayerOperation", "Operation Type", 0, QApplication::UnicodeUTF8));
        theParameterGroupBox->setTitle(QApplication::translate("ossimPlanetQtLayerOperation", "Parameter", 0, QApplication::UnicodeUTF8));
        theOpacityReferenceLayerLabel->setText(QApplication::translate("ossimPlanetQtLayerOperation", "Reference Layer", 0, QApplication::UnicodeUTF8));
        theOpacityTopLayerLabel->setText(QApplication::translate("ossimPlanetQtLayerOperation", "Top Layer", 0, QApplication::UnicodeUTF8));
        theCloseButton->setText(QApplication::translate("ossimPlanetQtLayerOperation", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ossimPlanetQtLayerOperation: public Ui_ossimPlanetQtLayerOperation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OSSIMPLANETQTLAYEROPERATION_H

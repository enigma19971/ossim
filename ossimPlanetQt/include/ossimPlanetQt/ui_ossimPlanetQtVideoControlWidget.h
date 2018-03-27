/********************************************************************************
** Form generated from reading UI file 'ossimPlanetQtVideoControlWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OSSIMPLANETQTVIDEOCONTROLWIDGET_H
#define UI_OSSIMPLANETQTVIDEOCONTROLWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QSlider>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ossimPlanetQtVideoControlWidget
{
public:
    QHBoxLayout *hboxLayout;
    QHBoxLayout *hboxLayout1;
    QToolButton *thePlayButton;
    QSlider *theReferenceTimeSlider;
    QToolButton *theFrameStepLeftButton;
    QToolButton *theFrameStepRightButton;

    void setupUi(QWidget *ossimPlanetQtVideoControlWidget)
    {
        if (ossimPlanetQtVideoControlWidget->objectName().isEmpty())
            ossimPlanetQtVideoControlWidget->setObjectName(QString::fromUtf8("ossimPlanetQtVideoControlWidget"));
        ossimPlanetQtVideoControlWidget->resize(326, 50);
        ossimPlanetQtVideoControlWidget->setAutoFillBackground(true);
        hboxLayout = new QHBoxLayout(ossimPlanetQtVideoControlWidget);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        thePlayButton = new QToolButton(ossimPlanetQtVideoControlWidget);
        thePlayButton->setObjectName(QString::fromUtf8("thePlayButton"));
        thePlayButton->setAutoFillBackground(true);
        thePlayButton->setCheckable(false);
        thePlayButton->setChecked(false);
        thePlayButton->setAutoRaise(true);
        thePlayButton->setArrowType(Qt::NoArrow);

        hboxLayout1->addWidget(thePlayButton);

        theReferenceTimeSlider = new QSlider(ossimPlanetQtVideoControlWidget);
        theReferenceTimeSlider->setObjectName(QString::fromUtf8("theReferenceTimeSlider"));
        theReferenceTimeSlider->setMinimumSize(QSize(128, 0));
        theReferenceTimeSlider->setAutoFillBackground(true);
        theReferenceTimeSlider->setOrientation(Qt::Horizontal);

        hboxLayout1->addWidget(theReferenceTimeSlider);

        theFrameStepLeftButton = new QToolButton(ossimPlanetQtVideoControlWidget);
        theFrameStepLeftButton->setObjectName(QString::fromUtf8("theFrameStepLeftButton"));
        theFrameStepLeftButton->setAutoFillBackground(true);
        theFrameStepLeftButton->setCheckable(false);
        theFrameStepLeftButton->setChecked(false);
        theFrameStepLeftButton->setAutoRaise(true);
        theFrameStepLeftButton->setArrowType(Qt::NoArrow);

        hboxLayout1->addWidget(theFrameStepLeftButton);

        theFrameStepRightButton = new QToolButton(ossimPlanetQtVideoControlWidget);
        theFrameStepRightButton->setObjectName(QString::fromUtf8("theFrameStepRightButton"));
        theFrameStepRightButton->setAutoFillBackground(true);
        theFrameStepRightButton->setCheckable(false);
        theFrameStepRightButton->setChecked(false);
        theFrameStepRightButton->setAutoRaise(true);
        theFrameStepRightButton->setArrowType(Qt::NoArrow);

        hboxLayout1->addWidget(theFrameStepRightButton);


        hboxLayout->addLayout(hboxLayout1);


        retranslateUi(ossimPlanetQtVideoControlWidget);

        QMetaObject::connectSlotsByName(ossimPlanetQtVideoControlWidget);
    } // setupUi

    void retranslateUi(QWidget *ossimPlanetQtVideoControlWidget)
    {
        ossimPlanetQtVideoControlWidget->setWindowTitle(QApplication::translate("ossimPlanetQtVideoControlWidget", "Form", 0, QApplication::UnicodeUTF8));
        thePlayButton->setText(QApplication::translate("ossimPlanetQtVideoControlWidget", ">", 0, QApplication::UnicodeUTF8));
        theFrameStepLeftButton->setText(QApplication::translate("ossimPlanetQtVideoControlWidget", "<|", 0, QApplication::UnicodeUTF8));
        theFrameStepRightButton->setText(QApplication::translate("ossimPlanetQtVideoControlWidget", "|>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ossimPlanetQtVideoControlWidget: public Ui_ossimPlanetQtVideoControlWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OSSIMPLANETQTVIDEOCONTROLWIDGET_H

/********************************************************************************
** Form generated from reading UI file 'ossimPlanetQtRuler.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OSSIMPLANETQTRULER_H
#define UI_OSSIMPLANETQTRULER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ossimPlanetQtRuler
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *theLengthLabel;
    QHBoxLayout *hboxLayout;
    QTableWidget *theLength;
    QVBoxLayout *vboxLayout1;
    QSpacerItem *spacerItem;
    QVBoxLayout *vboxLayout2;
    QCheckBox *theMouseNavigationCheckBox;
    QPushButton *theCloseButton;
    QSpacerItem *spacerItem1;

    void setupUi(QDialog *ossimPlanetQtRuler)
    {
        if (ossimPlanetQtRuler->objectName().isEmpty())
            ossimPlanetQtRuler->setObjectName(QString::fromUtf8("ossimPlanetQtRuler"));
        ossimPlanetQtRuler->resize(438, 358);
        vboxLayout = new QVBoxLayout(ossimPlanetQtRuler);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        theLengthLabel = new QLabel(ossimPlanetQtRuler);
        theLengthLabel->setObjectName(QString::fromUtf8("theLengthLabel"));

        vboxLayout->addWidget(theLengthLabel);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        theLength = new QTableWidget(ossimPlanetQtRuler);
        if (theLength->columnCount() < 2)
            theLength->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        theLength->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        theLength->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        theLength->setObjectName(QString::fromUtf8("theLength"));
        theLength->setEditTriggers(QAbstractItemView::NoEditTriggers);
        theLength->setShowGrid(false);

        hboxLayout->addWidget(theLength);

        vboxLayout1 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);

        vboxLayout2 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        theMouseNavigationCheckBox = new QCheckBox(ossimPlanetQtRuler);
        theMouseNavigationCheckBox->setObjectName(QString::fromUtf8("theMouseNavigationCheckBox"));

        vboxLayout2->addWidget(theMouseNavigationCheckBox);

        theCloseButton = new QPushButton(ossimPlanetQtRuler);
        theCloseButton->setObjectName(QString::fromUtf8("theCloseButton"));

        vboxLayout2->addWidget(theCloseButton);


        vboxLayout1->addLayout(vboxLayout2);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem1);


        hboxLayout->addLayout(vboxLayout1);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(ossimPlanetQtRuler);

        QMetaObject::connectSlotsByName(ossimPlanetQtRuler);
    } // setupUi

    void retranslateUi(QDialog *ossimPlanetQtRuler)
    {
        ossimPlanetQtRuler->setWindowTitle(QApplication::translate("ossimPlanetQtRuler", "Ruler", 0, QApplication::UnicodeUTF8));
        theLengthLabel->setText(QApplication::translate("ossimPlanetQtRuler", "Length:", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = theLength->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ossimPlanetQtRuler", "Value", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = theLength->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ossimPlanetQtRuler", "units", 0, QApplication::UnicodeUTF8));
        theMouseNavigationCheckBox->setText(QApplication::translate("ossimPlanetQtRuler", "Mouse navigation", 0, QApplication::UnicodeUTF8));
        theCloseButton->setText(QApplication::translate("ossimPlanetQtRuler", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ossimPlanetQtRuler: public Ui_ossimPlanetQtRuler {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OSSIMPLANETQTRULER_H

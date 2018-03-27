/********************************************************************************
** Form generated from reading UI file 'ossimPlanetQtActivityWindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OSSIMPLANETQTACTIVITYWINDOW_H
#define UI_OSSIMPLANETQTACTIVITYWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include "ossimPlanetQtActivityWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ossimPlanetQtActivityWindow
{
public:
    QVBoxLayout *vboxLayout;
    ossimPlanetQtActivityWidget *theActivityWidget;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *theDeleteButton;
    QPushButton *theCloseButton;
    QSpacerItem *spacerItem1;

    void setupUi(QDialog *ossimPlanetQtActivityWindow)
    {
        if (ossimPlanetQtActivityWindow->objectName().isEmpty())
            ossimPlanetQtActivityWindow->setObjectName(QString::fromUtf8("ossimPlanetQtActivityWindow"));
        ossimPlanetQtActivityWindow->resize(400, 300);
        vboxLayout = new QVBoxLayout(ossimPlanetQtActivityWindow);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        theActivityWidget = new ossimPlanetQtActivityWidget(ossimPlanetQtActivityWindow);
        theActivityWidget->setObjectName(QString::fromUtf8("theActivityWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(theActivityWidget->sizePolicy().hasHeightForWidth());
        theActivityWidget->setSizePolicy(sizePolicy);
        theActivityWidget->setSelectionMode(QAbstractItemView::MultiSelection);
        theActivityWidget->setColumnCount(1);

        vboxLayout->addWidget(theActivityWidget);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(81, 62, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        theDeleteButton = new QPushButton(ossimPlanetQtActivityWindow);
        theDeleteButton->setObjectName(QString::fromUtf8("theDeleteButton"));
        theDeleteButton->setAutoDefault(false);

        hboxLayout->addWidget(theDeleteButton);

        theCloseButton = new QPushButton(ossimPlanetQtActivityWindow);
        theCloseButton->setObjectName(QString::fromUtf8("theCloseButton"));

        hboxLayout->addWidget(theCloseButton);

        spacerItem1 = new QSpacerItem(101, 62, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(ossimPlanetQtActivityWindow);

        QMetaObject::connectSlotsByName(ossimPlanetQtActivityWindow);
    } // setupUi

    void retranslateUi(QDialog *ossimPlanetQtActivityWindow)
    {
        ossimPlanetQtActivityWindow->setWindowTitle(QApplication::translate("ossimPlanetQtActivityWindow", "Activity Window", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = theActivityWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("ossimPlanetQtActivityWindow", "0", 0, QApplication::UnicodeUTF8));
        theDeleteButton->setText(QApplication::translate("ossimPlanetQtActivityWindow", "Delete", 0, QApplication::UnicodeUTF8));
        theCloseButton->setText(QApplication::translate("ossimPlanetQtActivityWindow", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ossimPlanetQtActivityWindow: public Ui_ossimPlanetQtActivityWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OSSIMPLANETQTACTIVITYWINDOW_H

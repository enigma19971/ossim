/********************************************************************************
** Form generated from reading UI file 'ossimPlanetQtMessageLog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OSSIMPLANETQTMESSAGELOG_H
#define UI_OSSIMPLANETQTMESSAGELOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ossimPlanetQtMessageLog
{
public:
    QVBoxLayout *vboxLayout;
    QTreeWidget *theMessageLog;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *theClearButton;
    QPushButton *theCloseButton;
    QSpacerItem *spacerItem1;

    void setupUi(QDialog *ossimPlanetQtMessageLog)
    {
        if (ossimPlanetQtMessageLog->objectName().isEmpty())
            ossimPlanetQtMessageLog->setObjectName(QString::fromUtf8("ossimPlanetQtMessageLog"));
        ossimPlanetQtMessageLog->resize(745, 279);
        vboxLayout = new QVBoxLayout(ossimPlanetQtMessageLog);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        theMessageLog = new QTreeWidget(ossimPlanetQtMessageLog);
        theMessageLog->setObjectName(QString::fromUtf8("theMessageLog"));
        theMessageLog->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);

        vboxLayout->addWidget(theMessageLog);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        theClearButton = new QPushButton(ossimPlanetQtMessageLog);
        theClearButton->setObjectName(QString::fromUtf8("theClearButton"));
        theClearButton->setAutoDefault(false);

        hboxLayout->addWidget(theClearButton);

        theCloseButton = new QPushButton(ossimPlanetQtMessageLog);
        theCloseButton->setObjectName(QString::fromUtf8("theCloseButton"));

        hboxLayout->addWidget(theCloseButton);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(ossimPlanetQtMessageLog);

        QMetaObject::connectSlotsByName(ossimPlanetQtMessageLog);
    } // setupUi

    void retranslateUi(QDialog *ossimPlanetQtMessageLog)
    {
        ossimPlanetQtMessageLog->setWindowTitle(QApplication::translate("ossimPlanetQtMessageLog", "Message Log", 0, QApplication::UnicodeUTF8));
        theClearButton->setText(QApplication::translate("ossimPlanetQtMessageLog", "Clear", 0, QApplication::UnicodeUTF8));
        theCloseButton->setText(QApplication::translate("ossimPlanetQtMessageLog", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ossimPlanetQtMessageLog: public Ui_ossimPlanetQtMessageLog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OSSIMPLANETQTMESSAGELOG_H

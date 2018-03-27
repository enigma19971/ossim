/********************************************************************************
** Form generated from reading UI file 'ossimPlanetQtAboutDialog.ui'
**
** Created: Wed Dec 11 22:12:41 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OSSIMPLANETQTABOUTDIALOG_H
#define UI_OSSIMPLANETQTABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ossimPlanetQtAboutDialog
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *theVersionInformation;

    void setupUi(QDialog *ossimPlanetQtAboutDialog)
    {
        if (ossimPlanetQtAboutDialog->objectName().isEmpty())
            ossimPlanetQtAboutDialog->setObjectName(QString::fromUtf8("ossimPlanetQtAboutDialog"));
        ossimPlanetQtAboutDialog->resize(354, 143);
        vboxLayout = new QVBoxLayout(ossimPlanetQtAboutDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        theVersionInformation = new QLabel(ossimPlanetQtAboutDialog);
        theVersionInformation->setObjectName(QString::fromUtf8("theVersionInformation"));
        theVersionInformation->setAlignment(Qt::AlignCenter);
        theVersionInformation->setWordWrap(false);

        vboxLayout->addWidget(theVersionInformation);


        retranslateUi(ossimPlanetQtAboutDialog);

        QMetaObject::connectSlotsByName(ossimPlanetQtAboutDialog);
    } // setupUi

    void retranslateUi(QDialog *ossimPlanetQtAboutDialog)
    {
        ossimPlanetQtAboutDialog->setWindowTitle(QApplication::translate("ossimPlanetQtAboutDialog", "About", 0, QApplication::UnicodeUTF8));
        theVersionInformation->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ossimPlanetQtAboutDialog: public Ui_ossimPlanetQtAboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OSSIMPLANETQTABOUTDIALOG_H

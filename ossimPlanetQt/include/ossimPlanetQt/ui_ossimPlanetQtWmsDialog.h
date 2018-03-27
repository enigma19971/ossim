/********************************************************************************
** Form generated from reading UI file 'ossimPlanetQtWmsDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OSSIMPLANETQTWMSDIALOG_H
#define UI_OSSIMPLANETQTWMSDIALOG_H

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
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ossimPlanetQtWmsDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *GroupBox1;
    QVBoxLayout *vboxLayout1;
    QComboBox *theServerConnections;
    QHBoxLayout *hboxLayout;
    QPushButton *theConnectServerButton;
    QPushButton *theNewServerButton;
    QPushButton *theEditServerButton;
    QPushButton *theDeleteServerButton;
    QPushButton *theAddDefaultServersButton;
    QPushButton *theWmsSynchButton;
    QPushButton *theWmsSynchAllButton;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout1;
    QLabel *theCacheDirLabel_2;
    QLineEdit *theCacheDir;
    QPushButton *theCacheDirButton;
    QGroupBox *theGroupImageEncoding;
    QGroupBox *groupBox2;
    QVBoxLayout *vboxLayout2;
    QTreeWidget *theLayersList;
    QHBoxLayout *hboxLayout2;
    QPushButton *theAddButton;
    QPushButton *theCloseButton;

    void setupUi(QDialog *ossimPlanetQtWmsDialog)
    {
        if (ossimPlanetQtWmsDialog->objectName().isEmpty())
            ossimPlanetQtWmsDialog->setObjectName(QString::fromUtf8("ossimPlanetQtWmsDialog"));
        ossimPlanetQtWmsDialog->setWindowModality(Qt::WindowModal);
        ossimPlanetQtWmsDialog->resize(846, 646);
        vboxLayout = new QVBoxLayout(ossimPlanetQtWmsDialog);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        GroupBox1 = new QGroupBox(ossimPlanetQtWmsDialog);
        GroupBox1->setObjectName(QString::fromUtf8("GroupBox1"));
        vboxLayout1 = new QVBoxLayout(GroupBox1);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        theServerConnections = new QComboBox(GroupBox1);
        theServerConnections->setObjectName(QString::fromUtf8("theServerConnections"));

        vboxLayout1->addWidget(theServerConnections);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        theConnectServerButton = new QPushButton(GroupBox1);
        theConnectServerButton->setObjectName(QString::fromUtf8("theConnectServerButton"));
        theConnectServerButton->setEnabled(false);

        hboxLayout->addWidget(theConnectServerButton);

        theNewServerButton = new QPushButton(GroupBox1);
        theNewServerButton->setObjectName(QString::fromUtf8("theNewServerButton"));

        hboxLayout->addWidget(theNewServerButton);

        theEditServerButton = new QPushButton(GroupBox1);
        theEditServerButton->setObjectName(QString::fromUtf8("theEditServerButton"));
        theEditServerButton->setEnabled(false);

        hboxLayout->addWidget(theEditServerButton);

        theDeleteServerButton = new QPushButton(GroupBox1);
        theDeleteServerButton->setObjectName(QString::fromUtf8("theDeleteServerButton"));
        theDeleteServerButton->setEnabled(false);

        hboxLayout->addWidget(theDeleteServerButton);

        theAddDefaultServersButton = new QPushButton(GroupBox1);
        theAddDefaultServersButton->setObjectName(QString::fromUtf8("theAddDefaultServersButton"));

        hboxLayout->addWidget(theAddDefaultServersButton);

        theWmsSynchButton = new QPushButton(GroupBox1);
        theWmsSynchButton->setObjectName(QString::fromUtf8("theWmsSynchButton"));

        hboxLayout->addWidget(theWmsSynchButton);

        theWmsSynchAllButton = new QPushButton(GroupBox1);
        theWmsSynchAllButton->setObjectName(QString::fromUtf8("theWmsSynchAllButton"));

        hboxLayout->addWidget(theWmsSynchAllButton);

        spacerItem = new QSpacerItem(141, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout1->addLayout(hboxLayout);


        vboxLayout->addWidget(GroupBox1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        theCacheDirLabel_2 = new QLabel(ossimPlanetQtWmsDialog);
        theCacheDirLabel_2->setObjectName(QString::fromUtf8("theCacheDirLabel_2"));

        hboxLayout1->addWidget(theCacheDirLabel_2);

        theCacheDir = new QLineEdit(ossimPlanetQtWmsDialog);
        theCacheDir->setObjectName(QString::fromUtf8("theCacheDir"));

        hboxLayout1->addWidget(theCacheDir);

        theCacheDirButton = new QPushButton(ossimPlanetQtWmsDialog);
        theCacheDirButton->setObjectName(QString::fromUtf8("theCacheDirButton"));
        theCacheDirButton->setAutoDefault(false);

        hboxLayout1->addWidget(theCacheDirButton);


        vboxLayout->addLayout(hboxLayout1);

        theGroupImageEncoding = new QGroupBox(ossimPlanetQtWmsDialog);
        theGroupImageEncoding->setObjectName(QString::fromUtf8("theGroupImageEncoding"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(theGroupImageEncoding->sizePolicy().hasHeightForWidth());
        theGroupImageEncoding->setSizePolicy(sizePolicy);
        theGroupImageEncoding->setMinimumSize(QSize(16, 64));

        vboxLayout->addWidget(theGroupImageEncoding);

        groupBox2 = new QGroupBox(ossimPlanetQtWmsDialog);
        groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
        vboxLayout2 = new QVBoxLayout(groupBox2);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        theLayersList = new QTreeWidget(groupBox2);
        theLayersList->setObjectName(QString::fromUtf8("theLayersList"));
        theLayersList->setSelectionMode(QAbstractItemView::ExtendedSelection);
        theLayersList->setSortingEnabled(true);
        theLayersList->setColumnCount(4);

        vboxLayout2->addWidget(theLayersList);


        vboxLayout->addWidget(groupBox2);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        theAddButton = new QPushButton(ossimPlanetQtWmsDialog);
        theAddButton->setObjectName(QString::fromUtf8("theAddButton"));
        theAddButton->setAutoDefault(false);

        hboxLayout2->addWidget(theAddButton);

        theCloseButton = new QPushButton(ossimPlanetQtWmsDialog);
        theCloseButton->setObjectName(QString::fromUtf8("theCloseButton"));
        theCloseButton->setAutoDefault(false);

        hboxLayout2->addWidget(theCloseButton);


        vboxLayout->addLayout(hboxLayout2);

        QWidget::setTabOrder(theServerConnections, theConnectServerButton);
        QWidget::setTabOrder(theConnectServerButton, theNewServerButton);
        QWidget::setTabOrder(theNewServerButton, theEditServerButton);
        QWidget::setTabOrder(theEditServerButton, theDeleteServerButton);
        QWidget::setTabOrder(theDeleteServerButton, theAddDefaultServersButton);
        QWidget::setTabOrder(theAddDefaultServersButton, theCacheDir);
        QWidget::setTabOrder(theCacheDir, theCacheDirButton);
        QWidget::setTabOrder(theCacheDirButton, theLayersList);
        QWidget::setTabOrder(theLayersList, theAddButton);
        QWidget::setTabOrder(theAddButton, theCloseButton);

        retranslateUi(ossimPlanetQtWmsDialog);

        QMetaObject::connectSlotsByName(ossimPlanetQtWmsDialog);
    } // setupUi

    void retranslateUi(QDialog *ossimPlanetQtWmsDialog)
    {
        ossimPlanetQtWmsDialog->setWindowTitle(QApplication::translate("ossimPlanetQtWmsDialog", "WMS Server definitions", 0, QApplication::UnicodeUTF8));
        GroupBox1->setTitle(QApplication::translate("ossimPlanetQtWmsDialog", "Server Connections", 0, QApplication::UnicodeUTF8));
        theConnectServerButton->setText(QApplication::translate("ossimPlanetQtWmsDialog", "C&onnect", 0, QApplication::UnicodeUTF8));
        theNewServerButton->setText(QApplication::translate("ossimPlanetQtWmsDialog", "&New", 0, QApplication::UnicodeUTF8));
        theEditServerButton->setText(QApplication::translate("ossimPlanetQtWmsDialog", "Edit", 0, QApplication::UnicodeUTF8));
        theDeleteServerButton->setText(QApplication::translate("ossimPlanetQtWmsDialog", "Delete", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        theAddDefaultServersButton->setStatusTip(QApplication::translate("ossimPlanetQtWmsDialog", "Adds a few example WMS servers", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        theAddDefaultServersButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        theAddDefaultServersButton->setText(QApplication::translate("ossimPlanetQtWmsDialog", "Add default servers", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        theWmsSynchButton->setStatusTip(QApplication::translate("ossimPlanetQtWmsDialog", "Adds a few example WMS servers", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        theWmsSynchButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        theWmsSynchButton->setText(QApplication::translate("ossimPlanetQtWmsDialog", "Sync", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        theWmsSynchAllButton->setStatusTip(QApplication::translate("ossimPlanetQtWmsDialog", "Adds a few example WMS servers", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        theWmsSynchAllButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        theWmsSynchAllButton->setText(QApplication::translate("ossimPlanetQtWmsDialog", "Sync all", 0, QApplication::UnicodeUTF8));
        theCacheDirLabel_2->setText(QApplication::translate("ossimPlanetQtWmsDialog", "Cache Dir:", 0, QApplication::UnicodeUTF8));
        theCacheDirButton->setText(QApplication::translate("ossimPlanetQtWmsDialog", "...", 0, QApplication::UnicodeUTF8));
        theGroupImageEncoding->setTitle(QApplication::translate("ossimPlanetQtWmsDialog", "Image encoding", 0, QApplication::UnicodeUTF8));
        groupBox2->setTitle(QApplication::translate("ossimPlanetQtWmsDialog", "Layers", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = theLayersList->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("ossimPlanetQtWmsDialog", "3", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("ossimPlanetQtWmsDialog", "2", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("ossimPlanetQtWmsDialog", "1", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("ossimPlanetQtWmsDialog", "1", 0, QApplication::UnicodeUTF8));
        theAddButton->setText(QApplication::translate("ossimPlanetQtWmsDialog", "Add", 0, QApplication::UnicodeUTF8));
        theCloseButton->setText(QApplication::translate("ossimPlanetQtWmsDialog", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ossimPlanetQtWmsDialog: public Ui_ossimPlanetQtWmsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OSSIMPLANETQTWMSDIALOG_H

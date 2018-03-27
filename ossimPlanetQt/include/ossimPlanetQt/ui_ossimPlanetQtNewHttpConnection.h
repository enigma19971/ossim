/********************************************************************************
** Form generated from reading UI file 'ossimPlanetQtNewHttpConnection.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OSSIMPLANETQTNEWHTTPCONNECTION_H
#define UI_OSSIMPLANETQTNEWHTTPCONNECTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ossimPlanetQtNewHttpConnection
{
public:
    QHBoxLayout *hboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *theProxyPassword;
    QLabel *TextLabel1_3;
    QLabel *TextLabel1_3_2;
    QLineEdit *theName;
    QLineEdit *theProxyHost;
    QLabel *TextLabel1;
    QLineEdit *theProxyUser;
    QLineEdit *theProxyPort;
    QLabel *TextLabel1_3_3;
    QLabel *TextLabel1_2;
    QLabel *TextLabel1_3_4;
    QLineEdit *theUrl;
    QVBoxLayout *vboxLayout;
    QPushButton *theOkButton;
    QPushButton *theCancelButton;
    QSpacerItem *spacerItem;

    void setupUi(QDialog *ossimPlanetQtNewHttpConnection)
    {
        if (ossimPlanetQtNewHttpConnection->objectName().isEmpty())
            ossimPlanetQtNewHttpConnection->setObjectName(QString::fromUtf8("ossimPlanetQtNewHttpConnection"));
        ossimPlanetQtNewHttpConnection->resize(481, 258);
        hboxLayout = new QHBoxLayout(ossimPlanetQtNewHttpConnection);
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        groupBox = new QGroupBox(ossimPlanetQtNewHttpConnection);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        theProxyPassword = new QLineEdit(groupBox);
        theProxyPassword->setObjectName(QString::fromUtf8("theProxyPassword"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(theProxyPassword->sizePolicy().hasHeightForWidth());
        theProxyPassword->setSizePolicy(sizePolicy);
        theProxyPassword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(theProxyPassword, 5, 1, 1, 1);

        TextLabel1_3 = new QLabel(groupBox);
        TextLabel1_3->setObjectName(QString::fromUtf8("TextLabel1_3"));
        TextLabel1_3->setMargin(5);

        gridLayout->addWidget(TextLabel1_3, 2, 0, 1, 1);

        TextLabel1_3_2 = new QLabel(groupBox);
        TextLabel1_3_2->setObjectName(QString::fromUtf8("TextLabel1_3_2"));
        TextLabel1_3_2->setMargin(5);

        gridLayout->addWidget(TextLabel1_3_2, 3, 0, 1, 1);

        theName = new QLineEdit(groupBox);
        theName->setObjectName(QString::fromUtf8("theName"));
        theName->setMinimumSize(QSize(0, 0));
        theName->setFrame(true);

        gridLayout->addWidget(theName, 0, 1, 1, 1);

        theProxyHost = new QLineEdit(groupBox);
        theProxyHost->setObjectName(QString::fromUtf8("theProxyHost"));

        gridLayout->addWidget(theProxyHost, 2, 1, 1, 1);

        TextLabel1 = new QLabel(groupBox);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
        TextLabel1->setMargin(5);

        gridLayout->addWidget(TextLabel1, 1, 0, 1, 1);

        theProxyUser = new QLineEdit(groupBox);
        theProxyUser->setObjectName(QString::fromUtf8("theProxyUser"));
        sizePolicy.setHeightForWidth(theProxyUser->sizePolicy().hasHeightForWidth());
        theProxyUser->setSizePolicy(sizePolicy);

        gridLayout->addWidget(theProxyUser, 4, 1, 1, 1);

        theProxyPort = new QLineEdit(groupBox);
        theProxyPort->setObjectName(QString::fromUtf8("theProxyPort"));
        sizePolicy.setHeightForWidth(theProxyPort->sizePolicy().hasHeightForWidth());
        theProxyPort->setSizePolicy(sizePolicy);
        theProxyPort->setMaxLength(5);

        gridLayout->addWidget(theProxyPort, 3, 1, 1, 1);

        TextLabel1_3_3 = new QLabel(groupBox);
        TextLabel1_3_3->setObjectName(QString::fromUtf8("TextLabel1_3_3"));
        TextLabel1_3_3->setMargin(5);

        gridLayout->addWidget(TextLabel1_3_3, 4, 0, 1, 1);

        TextLabel1_2 = new QLabel(groupBox);
        TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));
        TextLabel1_2->setMargin(5);

        gridLayout->addWidget(TextLabel1_2, 0, 0, 1, 1);

        TextLabel1_3_4 = new QLabel(groupBox);
        TextLabel1_3_4->setObjectName(QString::fromUtf8("TextLabel1_3_4"));
        TextLabel1_3_4->setMargin(5);

        gridLayout->addWidget(TextLabel1_3_4, 5, 0, 1, 1);

        theUrl = new QLineEdit(groupBox);
        theUrl->setObjectName(QString::fromUtf8("theUrl"));

        gridLayout->addWidget(theUrl, 1, 1, 1, 1);


        hboxLayout->addWidget(groupBox);

        vboxLayout = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        theOkButton = new QPushButton(ossimPlanetQtNewHttpConnection);
        theOkButton->setObjectName(QString::fromUtf8("theOkButton"));
        theOkButton->setAutoDefault(true);
        theOkButton->setDefault(true);

        vboxLayout->addWidget(theOkButton);

        theCancelButton = new QPushButton(ossimPlanetQtNewHttpConnection);
        theCancelButton->setObjectName(QString::fromUtf8("theCancelButton"));
        theCancelButton->setAutoDefault(true);

        vboxLayout->addWidget(theCancelButton);

        spacerItem = new QSpacerItem(0, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);


        hboxLayout->addLayout(vboxLayout);

#ifndef QT_NO_SHORTCUT
        TextLabel1_3->setBuddy(theProxyHost);
        TextLabel1_3_2->setBuddy(theProxyPort);
        TextLabel1->setBuddy(theUrl);
        TextLabel1_3_3->setBuddy(theProxyUser);
        TextLabel1_2->setBuddy(theName);
        TextLabel1_3_4->setBuddy(theProxyPassword);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(theName, theUrl);
        QWidget::setTabOrder(theUrl, theProxyHost);
        QWidget::setTabOrder(theProxyHost, theProxyPort);
        QWidget::setTabOrder(theProxyPort, theProxyUser);
        QWidget::setTabOrder(theProxyUser, theProxyPassword);
        QWidget::setTabOrder(theProxyPassword, theOkButton);
        QWidget::setTabOrder(theOkButton, theCancelButton);

        retranslateUi(ossimPlanetQtNewHttpConnection);

        QMetaObject::connectSlotsByName(ossimPlanetQtNewHttpConnection);
    } // setupUi

    void retranslateUi(QDialog *ossimPlanetQtNewHttpConnection)
    {
        ossimPlanetQtNewHttpConnection->setWindowTitle(QApplication::translate("ossimPlanetQtNewHttpConnection", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("ossimPlanetQtNewHttpConnection", "Connection Information", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        theProxyPassword->setToolTip(QApplication::translate("ossimPlanetQtNewHttpConnection", "Password for your HTTP proxy (optional)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        TextLabel1_3->setText(QApplication::translate("ossimPlanetQtNewHttpConnection", "Proxy Host", 0, QApplication::UnicodeUTF8));
        TextLabel1_3_2->setText(QApplication::translate("ossimPlanetQtNewHttpConnection", "Proxy Port", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        theName->setToolTip(QApplication::translate("ossimPlanetQtNewHttpConnection", "Name of the new connection", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        theProxyHost->setToolTip(QApplication::translate("ossimPlanetQtNewHttpConnection", "Name of your HTTP proxy (optional)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        TextLabel1->setText(QApplication::translate("ossimPlanetQtNewHttpConnection", "URL", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        theProxyUser->setToolTip(QApplication::translate("ossimPlanetQtNewHttpConnection", "Your user name for the HTTP proxy (optional)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        theProxyPort->setToolTip(QApplication::translate("ossimPlanetQtNewHttpConnection", "Port number of your HTTP proxy (optional)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        TextLabel1_3_3->setText(QApplication::translate("ossimPlanetQtNewHttpConnection", "Proxy User", 0, QApplication::UnicodeUTF8));
        TextLabel1_2->setText(QApplication::translate("ossimPlanetQtNewHttpConnection", "Name", 0, QApplication::UnicodeUTF8));
        TextLabel1_3_4->setText(QApplication::translate("ossimPlanetQtNewHttpConnection", "Proxy Password", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        theUrl->setToolTip(QApplication::translate("ossimPlanetQtNewHttpConnection", "HTTP address of the Web Map Server", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        theOkButton->setText(QApplication::translate("ossimPlanetQtNewHttpConnection", "OK", 0, QApplication::UnicodeUTF8));
        theOkButton->setShortcut(QString());
        theCancelButton->setText(QApplication::translate("ossimPlanetQtNewHttpConnection", "Cancel", 0, QApplication::UnicodeUTF8));
        theCancelButton->setShortcut(QString());
    } // retranslateUi

};

namespace Ui {
    class ossimPlanetQtNewHttpConnection: public Ui_ossimPlanetQtNewHttpConnection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OSSIMPLANETQTNEWHTTPCONNECTION_H

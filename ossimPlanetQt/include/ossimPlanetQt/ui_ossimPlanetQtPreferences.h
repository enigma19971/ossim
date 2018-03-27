/********************************************************************************
** Form generated from reading UI file 'ossimPlanetQtPreferences.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OSSIMPLANETQTPREFERENCES_H
#define UI_OSSIMPLANETQTPREFERENCES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ossimPlanetQtPreferences
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *theTabWidget;
    QWidget *General;
    QVBoxLayout *verticalLayout;
    QCheckBox *theHudEnabled;
    QCheckBox *theAutoHighlightLineOfSiteFlag;
    QHBoxLayout *hboxLayout;
    QLabel *theWmsTimeoutLabel;
    QLineEdit *theWmsTimeout;
    QGroupBox *groupBox_3;
    QVBoxLayout *vboxLayout1;
    QCheckBox *theAutomaticStagingEnabled;
    QHBoxLayout *hboxLayout1;
    QLabel *theStagingCacheDirectoryLabel;
    QLineEdit *theStagingCacheDirectory;
    QPushButton *theStagingCacheDirectoryButton;
    QHBoxLayout *hboxLayout2;
    QLabel *theAutoHistogramStretchSettingLabel;
    QComboBox *theAutoHistogramStretchSetting;
    QSpacerItem *verticalSpacer_2;
    QWidget *Terrain;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *theElevationEnabled;
    QHBoxLayout *_2;
    QLabel *theElevationMuliplierLabel;
    QComboBox *theElevationMultiplier;
    QSpacerItem *spacerItem;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *theMeshDetailLowLabel;
    QSlider *theMeshDetail;
    QLabel *theMeshDetailHighLabel;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *theTextureDetailLowLabel;
    QSlider *theTextureDetail;
    QLabel *theTextureDetailHighLabel;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *theTerrainCullingAmountLowLabel;
    QSlider *theTerrainCullingAmount;
    QLabel *theTerrainCullingAmountHighLabel;
    QSpacerItem *verticalSpacer;
    QWidget *Environment;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *theEphemerisEnabled;
    QCheckBox *theEphemerisAutoUpdateToCurrentTime;
    QGroupBox *theEphemerisMembersGroup;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *theSunLightingEnabled;
    QCheckBox *theSkyEnabled;
    QCheckBox *theMoonEnabled;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *theLowVisibilityLabel;
    QSlider *theVisibility;
    QLabel *theHighVisibilityLabel;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *theCloudsEnabled;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label;
    QSlider *theCloudAmount;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_3;
    QSlider *theCloudSharpness;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *hboxLayout3;
    QCheckBox *theAutoViewSyncFlag;
    QSpacerItem *spacerItem1;
    QHBoxLayout *hboxLayout4;
    QLabel *theViewTransmitRateLabel;
    QHBoxLayout *hboxLayout5;
    QLineEdit *theViewTransmitRate;
    QLabel *theViewTransmitRateUnitLabel;
    QSpacerItem *verticalSpacer_3;
    QWidget *Server;
    QVBoxLayout *vboxLayout2;
    QTableWidget *theServerPortWidget;
    QHBoxLayout *hboxLayout6;
    QPushButton *theAddPortButton;
    QPushButton *theDeletePortButton;
    QSpacerItem *spacerItem2;
    QWidget *Client;
    QVBoxLayout *vboxLayout3;
    QTableWidget *theClientPortWidget;
    QHBoxLayout *hboxLayout7;
    QPushButton *theAddClientPortButton;
    QPushButton *theDeleteClientPortButton;
    QPushButton *theEnableAllClientPortButton;
    QPushButton *theDisableAllClientPortButton;
    QSpacerItem *spacerItem3;
    QWidget *Sousa;
    QVBoxLayout *vboxLayout4;
    QTabWidget *tabWidget;
    QWidget *Connection;
    QVBoxLayout *vboxLayout5;
    QGroupBox *theSousaIdentityGroup;
    QVBoxLayout *vboxLayout6;
    QHBoxLayout *hboxLayout8;
    QGridLayout *gridLayout;
    QLabel *theSousaUserNameLabel;
    QLineEdit *theSousaUserName;
    QLabel *theSousaDomainLabel;
    QLineEdit *theSousaDomain;
    QPushButton *theSousaIdentitySetButton;
    QGroupBox *groupBox_2;
    QHBoxLayout *hboxLayout9;
    QHBoxLayout *hboxLayout10;
    QGridLayout *gridLayout1;
    QLabel *theSousaServerIpLabel;
    QLineEdit *theSousaServerIp;
    QLabel *theSousaServerPortLabel;
    QLineEdit *theSousaServerPort;
    QPushButton *theSousaServerConnectButton;
    QCheckBox *theSousaServerAutoConnectOnStart;
    QWidget *ArchiveMapping;
    QVBoxLayout *vboxLayout7;
    QCheckBox *archiveMappingEnabled;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout8;
    QHBoxLayout *hboxLayout11;
    QGridLayout *gridLayout2;
    QLabel *archiveLabel_Src;
    QLineEdit *archiveLineEdit_Src;
    QLabel *archiveLabel_Dest;
    QLineEdit *archiveLineEdit_Dest;
    QPushButton *archiveAddButton;
    QHBoxLayout *hboxLayout12;
    QTableWidget *archiveMappingWidget;
    QPushButton *archiveRemoveButton;
    QHBoxLayout *hboxLayout13;
    QSpacerItem *spacerItem4;
    QPushButton *theOkButton;

    void setupUi(QDialog *ossimPlanetQtPreferences)
    {
        if (ossimPlanetQtPreferences->objectName().isEmpty())
            ossimPlanetQtPreferences->setObjectName(QString::fromUtf8("ossimPlanetQtPreferences"));
        ossimPlanetQtPreferences->setWindowModality(Qt::WindowModal);
        ossimPlanetQtPreferences->resize(674, 447);
        vboxLayout = new QVBoxLayout(ossimPlanetQtPreferences);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        theTabWidget = new QTabWidget(ossimPlanetQtPreferences);
        theTabWidget->setObjectName(QString::fromUtf8("theTabWidget"));
        General = new QWidget();
        General->setObjectName(QString::fromUtf8("General"));
        verticalLayout = new QVBoxLayout(General);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        theHudEnabled = new QCheckBox(General);
        theHudEnabled->setObjectName(QString::fromUtf8("theHudEnabled"));

        verticalLayout->addWidget(theHudEnabled);

        theAutoHighlightLineOfSiteFlag = new QCheckBox(General);
        theAutoHighlightLineOfSiteFlag->setObjectName(QString::fromUtf8("theAutoHighlightLineOfSiteFlag"));
        theAutoHighlightLineOfSiteFlag->setEnabled(true);

        verticalLayout->addWidget(theAutoHighlightLineOfSiteFlag);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        theWmsTimeoutLabel = new QLabel(General);
        theWmsTimeoutLabel->setObjectName(QString::fromUtf8("theWmsTimeoutLabel"));

        hboxLayout->addWidget(theWmsTimeoutLabel);

        theWmsTimeout = new QLineEdit(General);
        theWmsTimeout->setObjectName(QString::fromUtf8("theWmsTimeout"));

        hboxLayout->addWidget(theWmsTimeout);


        verticalLayout->addLayout(hboxLayout);

        groupBox_3 = new QGroupBox(General);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        vboxLayout1 = new QVBoxLayout(groupBox_3);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(11, 11, 11, 11);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        theAutomaticStagingEnabled = new QCheckBox(groupBox_3);
        theAutomaticStagingEnabled->setObjectName(QString::fromUtf8("theAutomaticStagingEnabled"));

        vboxLayout1->addWidget(theAutomaticStagingEnabled);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        theStagingCacheDirectoryLabel = new QLabel(groupBox_3);
        theStagingCacheDirectoryLabel->setObjectName(QString::fromUtf8("theStagingCacheDirectoryLabel"));

        hboxLayout1->addWidget(theStagingCacheDirectoryLabel);

        theStagingCacheDirectory = new QLineEdit(groupBox_3);
        theStagingCacheDirectory->setObjectName(QString::fromUtf8("theStagingCacheDirectory"));

        hboxLayout1->addWidget(theStagingCacheDirectory);

        theStagingCacheDirectoryButton = new QPushButton(groupBox_3);
        theStagingCacheDirectoryButton->setObjectName(QString::fromUtf8("theStagingCacheDirectoryButton"));
        theStagingCacheDirectoryButton->setAutoDefault(false);

        hboxLayout1->addWidget(theStagingCacheDirectoryButton);


        vboxLayout1->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        theAutoHistogramStretchSettingLabel = new QLabel(groupBox_3);
        theAutoHistogramStretchSettingLabel->setObjectName(QString::fromUtf8("theAutoHistogramStretchSettingLabel"));

        hboxLayout2->addWidget(theAutoHistogramStretchSettingLabel);

        theAutoHistogramStretchSetting = new QComboBox(groupBox_3);
        theAutoHistogramStretchSetting->setObjectName(QString::fromUtf8("theAutoHistogramStretchSetting"));

        hboxLayout2->addWidget(theAutoHistogramStretchSetting);


        vboxLayout1->addLayout(hboxLayout2);


        verticalLayout->addWidget(groupBox_3);

        verticalSpacer_2 = new QSpacerItem(20, 54, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        theTabWidget->addTab(General, QString());
        Terrain = new QWidget();
        Terrain->setObjectName(QString::fromUtf8("Terrain"));
        verticalLayout_2 = new QVBoxLayout(Terrain);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        theElevationEnabled = new QCheckBox(Terrain);
        theElevationEnabled->setObjectName(QString::fromUtf8("theElevationEnabled"));

        verticalLayout_2->addWidget(theElevationEnabled);

        _2 = new QHBoxLayout();
        _2->setSpacing(6);
        _2->setObjectName(QString::fromUtf8("_2"));
        _2->setContentsMargins(-1, 0, -1, 0);
        theElevationMuliplierLabel = new QLabel(Terrain);
        theElevationMuliplierLabel->setObjectName(QString::fromUtf8("theElevationMuliplierLabel"));

        _2->addWidget(theElevationMuliplierLabel);

        theElevationMultiplier = new QComboBox(Terrain);
        theElevationMultiplier->setObjectName(QString::fromUtf8("theElevationMultiplier"));

        _2->addWidget(theElevationMultiplier);

        spacerItem = new QSpacerItem(171, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(spacerItem);


        verticalLayout_2->addLayout(_2);

        groupBox_4 = new QGroupBox(Terrain);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        theMeshDetailLowLabel = new QLabel(groupBox_4);
        theMeshDetailLowLabel->setObjectName(QString::fromUtf8("theMeshDetailLowLabel"));

        horizontalLayout->addWidget(theMeshDetailLowLabel);

        theMeshDetail = new QSlider(groupBox_4);
        theMeshDetail->setObjectName(QString::fromUtf8("theMeshDetail"));
        theMeshDetail->setMinimum(0);
        theMeshDetail->setMaximum(4);
        theMeshDetail->setPageStep(1);
        theMeshDetail->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(theMeshDetail);

        theMeshDetailHighLabel = new QLabel(groupBox_4);
        theMeshDetailHighLabel->setObjectName(QString::fromUtf8("theMeshDetailHighLabel"));

        horizontalLayout->addWidget(theMeshDetailHighLabel);


        horizontalLayout_4->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(Terrain);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_5);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        theTextureDetailLowLabel = new QLabel(groupBox_5);
        theTextureDetailLowLabel->setObjectName(QString::fromUtf8("theTextureDetailLowLabel"));

        horizontalLayout_2->addWidget(theTextureDetailLowLabel);

        theTextureDetail = new QSlider(groupBox_5);
        theTextureDetail->setObjectName(QString::fromUtf8("theTextureDetail"));
        theTextureDetail->setMaximum(4);
        theTextureDetail->setPageStep(1);
        theTextureDetail->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(theTextureDetail);

        theTextureDetailHighLabel = new QLabel(groupBox_5);
        theTextureDetailHighLabel->setObjectName(QString::fromUtf8("theTextureDetailHighLabel"));

        horizontalLayout_2->addWidget(theTextureDetailHighLabel);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(Terrain);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        horizontalLayout_6 = new QHBoxLayout(groupBox_6);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        theTerrainCullingAmountLowLabel = new QLabel(groupBox_6);
        theTerrainCullingAmountLowLabel->setObjectName(QString::fromUtf8("theTerrainCullingAmountLowLabel"));

        horizontalLayout_5->addWidget(theTerrainCullingAmountLowLabel);

        theTerrainCullingAmount = new QSlider(groupBox_6);
        theTerrainCullingAmount->setObjectName(QString::fromUtf8("theTerrainCullingAmount"));
        theTerrainCullingAmount->setMaximum(5);
        theTerrainCullingAmount->setPageStep(1);
        theTerrainCullingAmount->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(theTerrainCullingAmount);

        theTerrainCullingAmountHighLabel = new QLabel(groupBox_6);
        theTerrainCullingAmountHighLabel->setObjectName(QString::fromUtf8("theTerrainCullingAmountHighLabel"));

        horizontalLayout_5->addWidget(theTerrainCullingAmountHighLabel);


        horizontalLayout_6->addLayout(horizontalLayout_5);


        verticalLayout_2->addWidget(groupBox_6);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        theTabWidget->addTab(Terrain, QString());
        Environment = new QWidget();
        Environment->setObjectName(QString::fromUtf8("Environment"));
        verticalLayout_6 = new QVBoxLayout(Environment);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        theEphemerisEnabled = new QCheckBox(Environment);
        theEphemerisEnabled->setObjectName(QString::fromUtf8("theEphemerisEnabled"));

        horizontalLayout_10->addWidget(theEphemerisEnabled);

        theEphemerisAutoUpdateToCurrentTime = new QCheckBox(Environment);
        theEphemerisAutoUpdateToCurrentTime->setObjectName(QString::fromUtf8("theEphemerisAutoUpdateToCurrentTime"));
        theEphemerisAutoUpdateToCurrentTime->setEnabled(true);

        horizontalLayout_10->addWidget(theEphemerisAutoUpdateToCurrentTime);


        verticalLayout_6->addLayout(horizontalLayout_10);

        theEphemerisMembersGroup = new QGroupBox(Environment);
        theEphemerisMembersGroup->setObjectName(QString::fromUtf8("theEphemerisMembersGroup"));
        horizontalLayout_11 = new QHBoxLayout(theEphemerisMembersGroup);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        theSunLightingEnabled = new QCheckBox(theEphemerisMembersGroup);
        theSunLightingEnabled->setObjectName(QString::fromUtf8("theSunLightingEnabled"));
        theSunLightingEnabled->setEnabled(true);

        horizontalLayout_11->addWidget(theSunLightingEnabled);

        theSkyEnabled = new QCheckBox(theEphemerisMembersGroup);
        theSkyEnabled->setObjectName(QString::fromUtf8("theSkyEnabled"));
        theSkyEnabled->setEnabled(true);

        horizontalLayout_11->addWidget(theSkyEnabled);

        theMoonEnabled = new QCheckBox(theEphemerisMembersGroup);
        theMoonEnabled->setObjectName(QString::fromUtf8("theMoonEnabled"));
        theMoonEnabled->setEnabled(true);

        horizontalLayout_11->addWidget(theMoonEnabled);


        verticalLayout_6->addWidget(theEphemerisMembersGroup);

        groupBox_7 = new QGroupBox(Environment);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        verticalLayout_4 = new QVBoxLayout(groupBox_7);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        theLowVisibilityLabel = new QLabel(groupBox_7);
        theLowVisibilityLabel->setObjectName(QString::fromUtf8("theLowVisibilityLabel"));

        horizontalLayout_7->addWidget(theLowVisibilityLabel);

        theVisibility = new QSlider(groupBox_7);
        theVisibility->setObjectName(QString::fromUtf8("theVisibility"));
        theVisibility->setMaximum(100);
        theVisibility->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(theVisibility);

        theHighVisibilityLabel = new QLabel(groupBox_7);
        theHighVisibilityLabel->setObjectName(QString::fromUtf8("theHighVisibilityLabel"));

        horizontalLayout_7->addWidget(theHighVisibilityLabel);


        verticalLayout_4->addLayout(horizontalLayout_7);


        verticalLayout_6->addWidget(groupBox_7);

        groupBox_8 = new QGroupBox(Environment);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        verticalLayout_5 = new QVBoxLayout(groupBox_8);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        theCloudsEnabled = new QCheckBox(groupBox_8);
        theCloudsEnabled->setObjectName(QString::fromUtf8("theCloudsEnabled"));

        verticalLayout_5->addWidget(theCloudsEnabled);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label = new QLabel(groupBox_8);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_8->addWidget(label);

        theCloudAmount = new QSlider(groupBox_8);
        theCloudAmount->setObjectName(QString::fromUtf8("theCloudAmount"));
        theCloudAmount->setMaximum(200);
        theCloudAmount->setPageStep(1);
        theCloudAmount->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(theCloudAmount);

        label_2 = new QLabel(groupBox_8);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_8->addWidget(label_2);


        verticalLayout_5->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_3 = new QLabel(groupBox_8);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_9->addWidget(label_3);

        theCloudSharpness = new QSlider(groupBox_8);
        theCloudSharpness->setObjectName(QString::fromUtf8("theCloudSharpness"));
        theCloudSharpness->setMinimum(50);
        theCloudSharpness->setMaximum(100);
        theCloudSharpness->setPageStep(1);
        theCloudSharpness->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(theCloudSharpness);

        label_4 = new QLabel(groupBox_8);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_9->addWidget(label_4);


        verticalLayout_5->addLayout(horizontalLayout_9);


        verticalLayout_6->addWidget(groupBox_8);

        verticalSpacer_4 = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_4);

        theTabWidget->addTab(Environment, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        theAutoViewSyncFlag = new QCheckBox(tab);
        theAutoViewSyncFlag->setObjectName(QString::fromUtf8("theAutoViewSyncFlag"));

        hboxLayout3->addWidget(theAutoViewSyncFlag);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem1);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(6);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        theViewTransmitRateLabel = new QLabel(tab);
        theViewTransmitRateLabel->setObjectName(QString::fromUtf8("theViewTransmitRateLabel"));

        hboxLayout4->addWidget(theViewTransmitRateLabel);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setSpacing(6);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        theViewTransmitRate = new QLineEdit(tab);
        theViewTransmitRate->setObjectName(QString::fromUtf8("theViewTransmitRate"));

        hboxLayout5->addWidget(theViewTransmitRate);

        theViewTransmitRateUnitLabel = new QLabel(tab);
        theViewTransmitRateUnitLabel->setObjectName(QString::fromUtf8("theViewTransmitRateUnitLabel"));

        hboxLayout5->addWidget(theViewTransmitRateUnitLabel);


        hboxLayout4->addLayout(hboxLayout5);


        hboxLayout3->addLayout(hboxLayout4);


        verticalLayout_3->addLayout(hboxLayout3);

        verticalSpacer_3 = new QSpacerItem(20, 301, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        theTabWidget->addTab(tab, QString());
        Server = new QWidget();
        Server->setObjectName(QString::fromUtf8("Server"));
        vboxLayout2 = new QVBoxLayout(Server);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setContentsMargins(11, 11, 11, 11);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        theServerPortWidget = new QTableWidget(Server);
        if (theServerPortWidget->columnCount() < 3)
            theServerPortWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        theServerPortWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        theServerPortWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        theServerPortWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        theServerPortWidget->setObjectName(QString::fromUtf8("theServerPortWidget"));
        theServerPortWidget->setFocusPolicy(Qt::StrongFocus);

        vboxLayout2->addWidget(theServerPortWidget);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setSpacing(6);
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        theAddPortButton = new QPushButton(Server);
        theAddPortButton->setObjectName(QString::fromUtf8("theAddPortButton"));
        theAddPortButton->setAutoDefault(false);

        hboxLayout6->addWidget(theAddPortButton);

        theDeletePortButton = new QPushButton(Server);
        theDeletePortButton->setObjectName(QString::fromUtf8("theDeletePortButton"));
        theDeletePortButton->setAutoDefault(false);

        hboxLayout6->addWidget(theDeletePortButton);

        spacerItem2 = new QSpacerItem(341, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem2);


        vboxLayout2->addLayout(hboxLayout6);

        theTabWidget->addTab(Server, QString());
        Client = new QWidget();
        Client->setObjectName(QString::fromUtf8("Client"));
        vboxLayout3 = new QVBoxLayout(Client);
        vboxLayout3->setSpacing(6);
        vboxLayout3->setContentsMargins(11, 11, 11, 11);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        theClientPortWidget = new QTableWidget(Client);
        if (theClientPortWidget->columnCount() < 4)
            theClientPortWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        theClientPortWidget->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        theClientPortWidget->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        theClientPortWidget->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        theClientPortWidget->setHorizontalHeaderItem(3, __qtablewidgetitem6);
        theClientPortWidget->setObjectName(QString::fromUtf8("theClientPortWidget"));
        theClientPortWidget->setFocusPolicy(Qt::StrongFocus);
        theClientPortWidget->setColumnCount(4);

        vboxLayout3->addWidget(theClientPortWidget);

        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setSpacing(6);
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        theAddClientPortButton = new QPushButton(Client);
        theAddClientPortButton->setObjectName(QString::fromUtf8("theAddClientPortButton"));
        theAddClientPortButton->setAutoDefault(false);

        hboxLayout7->addWidget(theAddClientPortButton);

        theDeleteClientPortButton = new QPushButton(Client);
        theDeleteClientPortButton->setObjectName(QString::fromUtf8("theDeleteClientPortButton"));
        theDeleteClientPortButton->setAutoDefault(false);

        hboxLayout7->addWidget(theDeleteClientPortButton);

        theEnableAllClientPortButton = new QPushButton(Client);
        theEnableAllClientPortButton->setObjectName(QString::fromUtf8("theEnableAllClientPortButton"));
        theEnableAllClientPortButton->setAutoDefault(false);

        hboxLayout7->addWidget(theEnableAllClientPortButton);

        theDisableAllClientPortButton = new QPushButton(Client);
        theDisableAllClientPortButton->setObjectName(QString::fromUtf8("theDisableAllClientPortButton"));
        theDisableAllClientPortButton->setAutoDefault(false);

        hboxLayout7->addWidget(theDisableAllClientPortButton);

        spacerItem3 = new QSpacerItem(161, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout7->addItem(spacerItem3);


        vboxLayout3->addLayout(hboxLayout7);

        theTabWidget->addTab(Client, QString());
        Sousa = new QWidget();
        Sousa->setObjectName(QString::fromUtf8("Sousa"));
        vboxLayout4 = new QVBoxLayout(Sousa);
        vboxLayout4->setSpacing(6);
        vboxLayout4->setContentsMargins(11, 11, 11, 11);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        tabWidget = new QTabWidget(Sousa);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        Connection = new QWidget();
        Connection->setObjectName(QString::fromUtf8("Connection"));
        vboxLayout5 = new QVBoxLayout(Connection);
        vboxLayout5->setSpacing(6);
        vboxLayout5->setContentsMargins(11, 11, 11, 11);
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        theSousaIdentityGroup = new QGroupBox(Connection);
        theSousaIdentityGroup->setObjectName(QString::fromUtf8("theSousaIdentityGroup"));
        vboxLayout6 = new QVBoxLayout(theSousaIdentityGroup);
        vboxLayout6->setSpacing(6);
        vboxLayout6->setContentsMargins(11, 11, 11, 11);
        vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
        hboxLayout8 = new QHBoxLayout();
        hboxLayout8->setSpacing(6);
        hboxLayout8->setObjectName(QString::fromUtf8("hboxLayout8"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        theSousaUserNameLabel = new QLabel(theSousaIdentityGroup);
        theSousaUserNameLabel->setObjectName(QString::fromUtf8("theSousaUserNameLabel"));

        gridLayout->addWidget(theSousaUserNameLabel, 0, 0, 1, 1);

        theSousaUserName = new QLineEdit(theSousaIdentityGroup);
        theSousaUserName->setObjectName(QString::fromUtf8("theSousaUserName"));

        gridLayout->addWidget(theSousaUserName, 0, 1, 1, 1);

        theSousaDomainLabel = new QLabel(theSousaIdentityGroup);
        theSousaDomainLabel->setObjectName(QString::fromUtf8("theSousaDomainLabel"));

        gridLayout->addWidget(theSousaDomainLabel, 1, 0, 1, 1);

        theSousaDomain = new QLineEdit(theSousaIdentityGroup);
        theSousaDomain->setObjectName(QString::fromUtf8("theSousaDomain"));

        gridLayout->addWidget(theSousaDomain, 1, 1, 1, 1);


        hboxLayout8->addLayout(gridLayout);

        theSousaIdentitySetButton = new QPushButton(theSousaIdentityGroup);
        theSousaIdentitySetButton->setObjectName(QString::fromUtf8("theSousaIdentitySetButton"));
        theSousaIdentitySetButton->setAutoDefault(false);

        hboxLayout8->addWidget(theSousaIdentitySetButton);


        vboxLayout6->addLayout(hboxLayout8);


        vboxLayout5->addWidget(theSousaIdentityGroup);

        groupBox_2 = new QGroupBox(Connection);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        hboxLayout9 = new QHBoxLayout(groupBox_2);
        hboxLayout9->setSpacing(6);
        hboxLayout9->setContentsMargins(11, 11, 11, 11);
        hboxLayout9->setObjectName(QString::fromUtf8("hboxLayout9"));
        hboxLayout10 = new QHBoxLayout();
        hboxLayout10->setSpacing(6);
        hboxLayout10->setObjectName(QString::fromUtf8("hboxLayout10"));
        gridLayout1 = new QGridLayout();
        gridLayout1->setSpacing(6);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        theSousaServerIpLabel = new QLabel(groupBox_2);
        theSousaServerIpLabel->setObjectName(QString::fromUtf8("theSousaServerIpLabel"));

        gridLayout1->addWidget(theSousaServerIpLabel, 0, 0, 1, 1);

        theSousaServerIp = new QLineEdit(groupBox_2);
        theSousaServerIp->setObjectName(QString::fromUtf8("theSousaServerIp"));

        gridLayout1->addWidget(theSousaServerIp, 0, 1, 1, 1);

        theSousaServerPortLabel = new QLabel(groupBox_2);
        theSousaServerPortLabel->setObjectName(QString::fromUtf8("theSousaServerPortLabel"));

        gridLayout1->addWidget(theSousaServerPortLabel, 1, 0, 1, 1);

        theSousaServerPort = new QLineEdit(groupBox_2);
        theSousaServerPort->setObjectName(QString::fromUtf8("theSousaServerPort"));

        gridLayout1->addWidget(theSousaServerPort, 1, 1, 1, 1);


        hboxLayout10->addLayout(gridLayout1);

        theSousaServerConnectButton = new QPushButton(groupBox_2);
        theSousaServerConnectButton->setObjectName(QString::fromUtf8("theSousaServerConnectButton"));
        theSousaServerConnectButton->setAutoDefault(false);

        hboxLayout10->addWidget(theSousaServerConnectButton);


        hboxLayout9->addLayout(hboxLayout10);

        theSousaServerAutoConnectOnStart = new QCheckBox(groupBox_2);
        theSousaServerAutoConnectOnStart->setObjectName(QString::fromUtf8("theSousaServerAutoConnectOnStart"));

        hboxLayout9->addWidget(theSousaServerAutoConnectOnStart);


        vboxLayout5->addWidget(groupBox_2);

        tabWidget->addTab(Connection, QString());
        ArchiveMapping = new QWidget();
        ArchiveMapping->setObjectName(QString::fromUtf8("ArchiveMapping"));
        vboxLayout7 = new QVBoxLayout(ArchiveMapping);
        vboxLayout7->setSpacing(6);
        vboxLayout7->setContentsMargins(11, 11, 11, 11);
        vboxLayout7->setObjectName(QString::fromUtf8("vboxLayout7"));
        archiveMappingEnabled = new QCheckBox(ArchiveMapping);
        archiveMappingEnabled->setObjectName(QString::fromUtf8("archiveMappingEnabled"));

        vboxLayout7->addWidget(archiveMappingEnabled);

        groupBox = new QGroupBox(ArchiveMapping);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        vboxLayout8 = new QVBoxLayout(groupBox);
        vboxLayout8->setSpacing(6);
        vboxLayout8->setContentsMargins(11, 11, 11, 11);
        vboxLayout8->setObjectName(QString::fromUtf8("vboxLayout8"));
        hboxLayout11 = new QHBoxLayout();
        hboxLayout11->setSpacing(6);
        hboxLayout11->setObjectName(QString::fromUtf8("hboxLayout11"));
        gridLayout2 = new QGridLayout();
        gridLayout2->setSpacing(6);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        archiveLabel_Src = new QLabel(groupBox);
        archiveLabel_Src->setObjectName(QString::fromUtf8("archiveLabel_Src"));

        gridLayout2->addWidget(archiveLabel_Src, 0, 0, 1, 1);

        archiveLineEdit_Src = new QLineEdit(groupBox);
        archiveLineEdit_Src->setObjectName(QString::fromUtf8("archiveLineEdit_Src"));

        gridLayout2->addWidget(archiveLineEdit_Src, 0, 1, 1, 2);

        archiveLabel_Dest = new QLabel(groupBox);
        archiveLabel_Dest->setObjectName(QString::fromUtf8("archiveLabel_Dest"));

        gridLayout2->addWidget(archiveLabel_Dest, 1, 0, 1, 2);

        archiveLineEdit_Dest = new QLineEdit(groupBox);
        archiveLineEdit_Dest->setObjectName(QString::fromUtf8("archiveLineEdit_Dest"));

        gridLayout2->addWidget(archiveLineEdit_Dest, 1, 2, 1, 1);


        hboxLayout11->addLayout(gridLayout2);

        archiveAddButton = new QPushButton(groupBox);
        archiveAddButton->setObjectName(QString::fromUtf8("archiveAddButton"));

        hboxLayout11->addWidget(archiveAddButton);


        vboxLayout8->addLayout(hboxLayout11);


        vboxLayout7->addWidget(groupBox);

        hboxLayout12 = new QHBoxLayout();
        hboxLayout12->setSpacing(6);
        hboxLayout12->setObjectName(QString::fromUtf8("hboxLayout12"));
        archiveMappingWidget = new QTableWidget(ArchiveMapping);
        if (archiveMappingWidget->columnCount() < 2)
            archiveMappingWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        archiveMappingWidget->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        archiveMappingWidget->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        archiveMappingWidget->setObjectName(QString::fromUtf8("archiveMappingWidget"));
        archiveMappingWidget->setFocusPolicy(Qt::StrongFocus);
        archiveMappingWidget->setProperty("showDropIndicator", QVariant(false));
        archiveMappingWidget->setDragDropOverwriteMode(false);
        archiveMappingWidget->setAlternatingRowColors(true);
        archiveMappingWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        archiveMappingWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        archiveMappingWidget->setTextElideMode(Qt::ElideRight);
        archiveMappingWidget->setColumnCount(2);

        hboxLayout12->addWidget(archiveMappingWidget);

        archiveRemoveButton = new QPushButton(ArchiveMapping);
        archiveRemoveButton->setObjectName(QString::fromUtf8("archiveRemoveButton"));

        hboxLayout12->addWidget(archiveRemoveButton);


        vboxLayout7->addLayout(hboxLayout12);

        tabWidget->addTab(ArchiveMapping, QString());

        vboxLayout4->addWidget(tabWidget);

        theTabWidget->addTab(Sousa, QString());

        vboxLayout->addWidget(theTabWidget);

        hboxLayout13 = new QHBoxLayout();
        hboxLayout13->setSpacing(6);
        hboxLayout13->setObjectName(QString::fromUtf8("hboxLayout13"));
        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout13->addItem(spacerItem4);

        theOkButton = new QPushButton(ossimPlanetQtPreferences);
        theOkButton->setObjectName(QString::fromUtf8("theOkButton"));
        theOkButton->setAutoDefault(false);

        hboxLayout13->addWidget(theOkButton);


        vboxLayout->addLayout(hboxLayout13);


        retranslateUi(ossimPlanetQtPreferences);

        theTabWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ossimPlanetQtPreferences);
    } // setupUi

    void retranslateUi(QDialog *ossimPlanetQtPreferences)
    {
        ossimPlanetQtPreferences->setWindowTitle(QApplication::translate("ossimPlanetQtPreferences", "OSSIM 3D Visualization preferences", 0, QApplication::UnicodeUTF8));
        theHudEnabled->setText(QApplication::translate("ossimPlanetQtPreferences", "Enable hud", 0, QApplication::UnicodeUTF8));
        theAutoHighlightLineOfSiteFlag->setText(QApplication::translate("ossimPlanetQtPreferences", "Auto Highlight Layers Based on Line Of Site Intersection", 0, QApplication::UnicodeUTF8));
        theWmsTimeoutLabel->setText(QApplication::translate("ossimPlanetQtPreferences", "WMS Timeout (seconds): ", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("ossimPlanetQtPreferences", "Staging", 0, QApplication::UnicodeUTF8));
        theAutomaticStagingEnabled->setText(QApplication::translate("ossimPlanetQtPreferences", "Enable automatic staging", 0, QApplication::UnicodeUTF8));
        theStagingCacheDirectoryLabel->setText(QApplication::translate("ossimPlanetQtPreferences", "Staging cache directory:", 0, QApplication::UnicodeUTF8));
        theStagingCacheDirectoryButton->setText(QApplication::translate("ossimPlanetQtPreferences", "...", 0, QApplication::UnicodeUTF8));
        theAutoHistogramStretchSettingLabel->setText(QApplication::translate("ossimPlanetQtPreferences", "Auto Histogram Stretch Setting:", 0, QApplication::UnicodeUTF8));
        theTabWidget->setTabText(theTabWidget->indexOf(General), QApplication::translate("ossimPlanetQtPreferences", "General", 0, QApplication::UnicodeUTF8));
        theElevationEnabled->setText(QApplication::translate("ossimPlanetQtPreferences", "Enable elevation", 0, QApplication::UnicodeUTF8));
        theElevationMuliplierLabel->setText(QApplication::translate("ossimPlanetQtPreferences", "Elevation Multiplier:", 0, QApplication::UnicodeUTF8));
        theElevationMultiplier->clear();
        theElevationMultiplier->insertItems(0, QStringList()
         << QApplication::translate("ossimPlanetQtPreferences", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ossimPlanetQtPreferences", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ossimPlanetQtPreferences", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ossimPlanetQtPreferences", "4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ossimPlanetQtPreferences", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ossimPlanetQtPreferences", "6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ossimPlanetQtPreferences", "7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ossimPlanetQtPreferences", "8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ossimPlanetQtPreferences", "9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ossimPlanetQtPreferences", "10", 0, QApplication::UnicodeUTF8)
        );
        groupBox_4->setTitle(QApplication::translate("ossimPlanetQtPreferences", "Mesh detail", 0, QApplication::UnicodeUTF8));
        theMeshDetailLowLabel->setText(QApplication::translate("ossimPlanetQtPreferences", "Low", 0, QApplication::UnicodeUTF8));
        theMeshDetailHighLabel->setText(QApplication::translate("ossimPlanetQtPreferences", "High", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("ossimPlanetQtPreferences", "Texture detail", 0, QApplication::UnicodeUTF8));
        theTextureDetailLowLabel->setText(QApplication::translate("ossimPlanetQtPreferences", "Low", 0, QApplication::UnicodeUTF8));
        theTextureDetailHighLabel->setText(QApplication::translate("ossimPlanetQtPreferences", "High", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("ossimPlanetQtPreferences", "Terrain Pruning Amount", 0, QApplication::UnicodeUTF8));
        theTerrainCullingAmountLowLabel->setText(QApplication::translate("ossimPlanetQtPreferences", "Low", 0, QApplication::UnicodeUTF8));
        theTerrainCullingAmountHighLabel->setText(QApplication::translate("ossimPlanetQtPreferences", "High", 0, QApplication::UnicodeUTF8));
        theTabWidget->setTabText(theTabWidget->indexOf(Terrain), QApplication::translate("ossimPlanetQtPreferences", "Terrain", 0, QApplication::UnicodeUTF8));
        theEphemerisEnabled->setText(QApplication::translate("ossimPlanetQtPreferences", "Enable Ephemeris", 0, QApplication::UnicodeUTF8));
        theEphemerisAutoUpdateToCurrentTime->setText(QApplication::translate("ossimPlanetQtPreferences", "Auto update to current time", 0, QApplication::UnicodeUTF8));
        theEphemerisMembersGroup->setTitle(QApplication::translate("ossimPlanetQtPreferences", "Members", 0, QApplication::UnicodeUTF8));
        theSunLightingEnabled->setText(QApplication::translate("ossimPlanetQtPreferences", "Sun lighting", 0, QApplication::UnicodeUTF8));
        theSkyEnabled->setText(QApplication::translate("ossimPlanetQtPreferences", "Sky", 0, QApplication::UnicodeUTF8));
        theMoonEnabled->setText(QApplication::translate("ossimPlanetQtPreferences", "Moon", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("ossimPlanetQtPreferences", "Visibility", 0, QApplication::UnicodeUTF8));
        theLowVisibilityLabel->setText(QApplication::translate("ossimPlanetQtPreferences", "Low", 0, QApplication::UnicodeUTF8));
        theHighVisibilityLabel->setText(QApplication::translate("ossimPlanetQtPreferences", "High", 0, QApplication::UnicodeUTF8));
        groupBox_8->setTitle(QApplication::translate("ossimPlanetQtPreferences", "Cloud Parameters", 0, QApplication::UnicodeUTF8));
        theCloudsEnabled->setText(QApplication::translate("ossimPlanetQtPreferences", "Enabled", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ossimPlanetQtPreferences", "Light", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ossimPlanetQtPreferences", "Heavy", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ossimPlanetQtPreferences", "Hard", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ossimPlanetQtPreferences", "Soft", 0, QApplication::UnicodeUTF8));
        theTabWidget->setTabText(theTabWidget->indexOf(Environment), QApplication::translate("ossimPlanetQtPreferences", "Environment", 0, QApplication::UnicodeUTF8));
        theAutoViewSyncFlag->setText(QApplication::translate("ossimPlanetQtPreferences", "Auto View Sync", 0, QApplication::UnicodeUTF8));
        theViewTransmitRateLabel->setText(QApplication::translate("ossimPlanetQtPreferences", "Transmit every", 0, QApplication::UnicodeUTF8));
        theViewTransmitRateUnitLabel->setText(QApplication::translate("ossimPlanetQtPreferences", "seconds", 0, QApplication::UnicodeUTF8));
        theTabWidget->setTabText(theTabWidget->indexOf(tab), QApplication::translate("ossimPlanetQtPreferences", "Sync", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = theServerPortWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ossimPlanetQtPreferences", "Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = theServerPortWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ossimPlanetQtPreferences", "Port", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = theServerPortWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ossimPlanetQtPreferences", "Type ", 0, QApplication::UnicodeUTF8));
        theAddPortButton->setText(QApplication::translate("ossimPlanetQtPreferences", " + ", 0, QApplication::UnicodeUTF8));
        theDeletePortButton->setText(QApplication::translate("ossimPlanetQtPreferences", " - ", 0, QApplication::UnicodeUTF8));
        theTabWidget->setTabText(theTabWidget->indexOf(Server), QApplication::translate("ossimPlanetQtPreferences", "Listener", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = theClientPortWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("ossimPlanetQtPreferences", "Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = theClientPortWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("ossimPlanetQtPreferences", "Address", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = theClientPortWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("ossimPlanetQtPreferences", "Port", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = theClientPortWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem6->setText(QApplication::translate("ossimPlanetQtPreferences", "Type (udp or tcp)", 0, QApplication::UnicodeUTF8));
        theAddClientPortButton->setText(QApplication::translate("ossimPlanetQtPreferences", " + ", 0, QApplication::UnicodeUTF8));
        theDeleteClientPortButton->setText(QApplication::translate("ossimPlanetQtPreferences", " - ", 0, QApplication::UnicodeUTF8));
        theEnableAllClientPortButton->setText(QApplication::translate("ossimPlanetQtPreferences", "Enable All", 0, QApplication::UnicodeUTF8));
        theDisableAllClientPortButton->setText(QApplication::translate("ossimPlanetQtPreferences", "Disable All", 0, QApplication::UnicodeUTF8));
        theTabWidget->setTabText(theTabWidget->indexOf(Client), QApplication::translate("ossimPlanetQtPreferences", "Broadcast", 0, QApplication::UnicodeUTF8));
        theSousaIdentityGroup->setTitle(QApplication::translate("ossimPlanetQtPreferences", "Identity", 0, QApplication::UnicodeUTF8));
        theSousaUserNameLabel->setText(QApplication::translate("ossimPlanetQtPreferences", "User name:", 0, QApplication::UnicodeUTF8));
        theSousaDomainLabel->setText(QApplication::translate("ossimPlanetQtPreferences", "Domain:", 0, QApplication::UnicodeUTF8));
        theSousaIdentitySetButton->setText(QApplication::translate("ossimPlanetQtPreferences", "set", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("ossimPlanetQtPreferences", "Server", 0, QApplication::UnicodeUTF8));
        theSousaServerIpLabel->setText(QApplication::translate("ossimPlanetQtPreferences", "Ip:", 0, QApplication::UnicodeUTF8));
        theSousaServerPortLabel->setText(QApplication::translate("ossimPlanetQtPreferences", "Port:", 0, QApplication::UnicodeUTF8));
        theSousaServerConnectButton->setText(QApplication::translate("ossimPlanetQtPreferences", "Connect", 0, QApplication::UnicodeUTF8));
        theSousaServerAutoConnectOnStart->setText(QApplication::translate("ossimPlanetQtPreferences", "Auto Connect on Start", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Connection), QApplication::translate("ossimPlanetQtPreferences", "Connection", 0, QApplication::UnicodeUTF8));
        archiveMappingEnabled->setText(QApplication::translate("ossimPlanetQtPreferences", "Enabled", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("ossimPlanetQtPreferences", "Path", 0, QApplication::UnicodeUTF8));
        archiveLabel_Src->setText(QApplication::translate("ossimPlanetQtPreferences", "Source:", 0, QApplication::UnicodeUTF8));
        archiveLabel_Dest->setText(QApplication::translate("ossimPlanetQtPreferences", "Destination:", 0, QApplication::UnicodeUTF8));
        archiveAddButton->setText(QApplication::translate("ossimPlanetQtPreferences", "+", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = archiveMappingWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("ossimPlanetQtPreferences", "Source Path", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = archiveMappingWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("ossimPlanetQtPreferences", "Destination Path", 0, QApplication::UnicodeUTF8));
        archiveRemoveButton->setText(QApplication::translate("ossimPlanetQtPreferences", " - ", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(ArchiveMapping), QApplication::translate("ossimPlanetQtPreferences", "Archive Mapping", 0, QApplication::UnicodeUTF8));
        theTabWidget->setTabText(theTabWidget->indexOf(Sousa), QApplication::translate("ossimPlanetQtPreferences", "Sousa", 0, QApplication::UnicodeUTF8));
        theOkButton->setText(QApplication::translate("ossimPlanetQtPreferences", "Ok", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ossimPlanetQtPreferences: public Ui_ossimPlanetQtPreferences {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OSSIMPLANETQTPREFERENCES_H

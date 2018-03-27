/********************************************************************************
** Form generated from reading UI file 'ossimPlanetQtMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OSSIMPLANETQTMAINWINDOW_H
#define UI_OSSIMPLANETQTMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QSplitter>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "ossimPlanetQt/ossimPlanetQtLegend.h"

QT_BEGIN_NAMESPACE

class Ui_ossimPlanetQtMainWindow
{
public:
    QAction *fileOpenImage;
    QAction *fileOpenWms;
    QAction *viewGotoLatLon;
    QAction *viewGotoAddress;
    QAction *filePreferences;
    QAction *viewToggleFullScreen;
    QAction *editLayerOperation;
    QAction *actionActivity;
    QAction *resetStats;
    QAction *saveSession;
    QAction *openSession;
    QAction *saveSessionAs;
    QAction *toolsRuler;
    QAction *fileQuit;
    QAction *viewRefreshTextures;
    QAction *viewRefreshAll;
    QAction *helpAbout;
    QAction *actionJpeg;
    QAction *fileSaveViewAsJpeg;
    QAction *fileSaveViewAsPng;
    QAction *viewSaveAsTiff;
    QAction *fileSaveViewAsTiff;
    QAction *viewStartRecordingAnimationPath;
    QAction *viewStopRecordingAnimationPath;
    QAction *actionSave_Recording;
    QAction *fileSaveAnimationPath;
    QAction *fileLoadAnimationPath;
    QAction *viewPlayAnimationPath;
    QAction *viewSyncGoto;
    QAction *viewSyncSet;
    QAction *viewSyncLocation;
    QAction *fileOpenKml;
    QAction *actionMessageLog;
    QAction *fileOpenVideo;
    QAction *viewBookmark;
    QWidget *centralwidget;
    QVBoxLayout *vboxLayout;
    QSplitter *canvasLegendSplit;
    QSplitter *legendOverviewSplit;
    QToolBox *toolBox;
    QWidget *legendPage;
    QHBoxLayout *hboxLayout;
    ossimPlanetQtLegend *thePlanetLegend;
    QFrame *overviewFrame;
    QTabWidget *tabWidget;
    QWidget *Planet_View;
    QMenuBar *menubar;
    QMenu *menuEdit;
    QMenu *menuTools;
    QMenu *menuWindow;
    QMenu *menuHelp;
    QMenu *menuView;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ossimPlanetQtMainWindow)
    {
        if (ossimPlanetQtMainWindow->objectName().isEmpty())
            ossimPlanetQtMainWindow->setObjectName(QString::fromUtf8("ossimPlanetQtMainWindow"));
        ossimPlanetQtMainWindow->resize(1233, 736);
        fileOpenImage = new QAction(ossimPlanetQtMainWindow);
        fileOpenImage->setObjectName(QString::fromUtf8("fileOpenImage"));
        fileOpenWms = new QAction(ossimPlanetQtMainWindow);
        fileOpenWms->setObjectName(QString::fromUtf8("fileOpenWms"));
        viewGotoLatLon = new QAction(ossimPlanetQtMainWindow);
        viewGotoLatLon->setObjectName(QString::fromUtf8("viewGotoLatLon"));
        viewGotoAddress = new QAction(ossimPlanetQtMainWindow);
        viewGotoAddress->setObjectName(QString::fromUtf8("viewGotoAddress"));
        filePreferences = new QAction(ossimPlanetQtMainWindow);
        filePreferences->setObjectName(QString::fromUtf8("filePreferences"));
        viewToggleFullScreen = new QAction(ossimPlanetQtMainWindow);
        viewToggleFullScreen->setObjectName(QString::fromUtf8("viewToggleFullScreen"));
        editLayerOperation = new QAction(ossimPlanetQtMainWindow);
        editLayerOperation->setObjectName(QString::fromUtf8("editLayerOperation"));
        actionActivity = new QAction(ossimPlanetQtMainWindow);
        actionActivity->setObjectName(QString::fromUtf8("actionActivity"));
        resetStats = new QAction(ossimPlanetQtMainWindow);
        resetStats->setObjectName(QString::fromUtf8("resetStats"));
        saveSession = new QAction(ossimPlanetQtMainWindow);
        saveSession->setObjectName(QString::fromUtf8("saveSession"));
        openSession = new QAction(ossimPlanetQtMainWindow);
        openSession->setObjectName(QString::fromUtf8("openSession"));
        saveSessionAs = new QAction(ossimPlanetQtMainWindow);
        saveSessionAs->setObjectName(QString::fromUtf8("saveSessionAs"));
        toolsRuler = new QAction(ossimPlanetQtMainWindow);
        toolsRuler->setObjectName(QString::fromUtf8("toolsRuler"));
        fileQuit = new QAction(ossimPlanetQtMainWindow);
        fileQuit->setObjectName(QString::fromUtf8("fileQuit"));
        viewRefreshTextures = new QAction(ossimPlanetQtMainWindow);
        viewRefreshTextures->setObjectName(QString::fromUtf8("viewRefreshTextures"));
        viewRefreshAll = new QAction(ossimPlanetQtMainWindow);
        viewRefreshAll->setObjectName(QString::fromUtf8("viewRefreshAll"));
        helpAbout = new QAction(ossimPlanetQtMainWindow);
        helpAbout->setObjectName(QString::fromUtf8("helpAbout"));
        actionJpeg = new QAction(ossimPlanetQtMainWindow);
        actionJpeg->setObjectName(QString::fromUtf8("actionJpeg"));
        fileSaveViewAsJpeg = new QAction(ossimPlanetQtMainWindow);
        fileSaveViewAsJpeg->setObjectName(QString::fromUtf8("fileSaveViewAsJpeg"));
        fileSaveViewAsPng = new QAction(ossimPlanetQtMainWindow);
        fileSaveViewAsPng->setObjectName(QString::fromUtf8("fileSaveViewAsPng"));
        viewSaveAsTiff = new QAction(ossimPlanetQtMainWindow);
        viewSaveAsTiff->setObjectName(QString::fromUtf8("viewSaveAsTiff"));
        fileSaveViewAsTiff = new QAction(ossimPlanetQtMainWindow);
        fileSaveViewAsTiff->setObjectName(QString::fromUtf8("fileSaveViewAsTiff"));
        viewStartRecordingAnimationPath = new QAction(ossimPlanetQtMainWindow);
        viewStartRecordingAnimationPath->setObjectName(QString::fromUtf8("viewStartRecordingAnimationPath"));
        viewStopRecordingAnimationPath = new QAction(ossimPlanetQtMainWindow);
        viewStopRecordingAnimationPath->setObjectName(QString::fromUtf8("viewStopRecordingAnimationPath"));
        actionSave_Recording = new QAction(ossimPlanetQtMainWindow);
        actionSave_Recording->setObjectName(QString::fromUtf8("actionSave_Recording"));
        fileSaveAnimationPath = new QAction(ossimPlanetQtMainWindow);
        fileSaveAnimationPath->setObjectName(QString::fromUtf8("fileSaveAnimationPath"));
        fileSaveAnimationPath->setEnabled(false);
        fileLoadAnimationPath = new QAction(ossimPlanetQtMainWindow);
        fileLoadAnimationPath->setObjectName(QString::fromUtf8("fileLoadAnimationPath"));
        fileLoadAnimationPath->setEnabled(false);
        viewPlayAnimationPath = new QAction(ossimPlanetQtMainWindow);
        viewPlayAnimationPath->setObjectName(QString::fromUtf8("viewPlayAnimationPath"));
        viewSyncGoto = new QAction(ossimPlanetQtMainWindow);
        viewSyncGoto->setObjectName(QString::fromUtf8("viewSyncGoto"));
        viewSyncSet = new QAction(ossimPlanetQtMainWindow);
        viewSyncSet->setObjectName(QString::fromUtf8("viewSyncSet"));
        viewSyncLocation = new QAction(ossimPlanetQtMainWindow);
        viewSyncLocation->setObjectName(QString::fromUtf8("viewSyncLocation"));
        fileOpenKml = new QAction(ossimPlanetQtMainWindow);
        fileOpenKml->setObjectName(QString::fromUtf8("fileOpenKml"));
        actionMessageLog = new QAction(ossimPlanetQtMainWindow);
        actionMessageLog->setObjectName(QString::fromUtf8("actionMessageLog"));
        fileOpenVideo = new QAction(ossimPlanetQtMainWindow);
        fileOpenVideo->setObjectName(QString::fromUtf8("fileOpenVideo"));
        viewBookmark = new QAction(ossimPlanetQtMainWindow);
        viewBookmark->setObjectName(QString::fromUtf8("viewBookmark"));
        centralwidget = new QWidget(ossimPlanetQtMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        vboxLayout = new QVBoxLayout(centralwidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        canvasLegendSplit = new QSplitter(centralwidget);
        canvasLegendSplit->setObjectName(QString::fromUtf8("canvasLegendSplit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(canvasLegendSplit->sizePolicy().hasHeightForWidth());
        canvasLegendSplit->setSizePolicy(sizePolicy);
        canvasLegendSplit->setFrameShape(QFrame::NoFrame);
        canvasLegendSplit->setFrameShadow(QFrame::Plain);
        canvasLegendSplit->setLineWidth(1);
        canvasLegendSplit->setOrientation(Qt::Horizontal);
        legendOverviewSplit = new QSplitter(canvasLegendSplit);
        legendOverviewSplit->setObjectName(QString::fromUtf8("legendOverviewSplit"));
        sizePolicy.setHeightForWidth(legendOverviewSplit->sizePolicy().hasHeightForWidth());
        legendOverviewSplit->setSizePolicy(sizePolicy);
        legendOverviewSplit->setMinimumSize(QSize(0, 0));
        legendOverviewSplit->setOrientation(Qt::Vertical);
        toolBox = new QToolBox(legendOverviewSplit);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toolBox->sizePolicy().hasHeightForWidth());
        toolBox->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(7);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        toolBox->setFont(font);
        toolBox->setFrameShape(QFrame::NoFrame);
        toolBox->setFrameShadow(QFrame::Raised);
        legendPage = new QWidget();
        legendPage->setObjectName(QString::fromUtf8("legendPage"));
        legendPage->setGeometry(QRect(0, 0, 280, 561));
        hboxLayout = new QHBoxLayout(legendPage);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        thePlanetLegend = new ossimPlanetQtLegend(legendPage);
        thePlanetLegend->setObjectName(QString::fromUtf8("thePlanetLegend"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(50);
        font1.setStrikeOut(false);
        thePlanetLegend->setFont(font1);
        thePlanetLegend->setAutoFillBackground(false);
        thePlanetLegend->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        thePlanetLegend->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        thePlanetLegend->setAutoScroll(true);
        thePlanetLegend->setIndentation(15);
        thePlanetLegend->setRootIsDecorated(true);
        thePlanetLegend->setColumnCount(2);

        hboxLayout->addWidget(thePlanetLegend);

        toolBox->addItem(legendPage, QString::fromUtf8("Legend"));
        legendOverviewSplit->addWidget(toolBox);
        overviewFrame = new QFrame(legendOverviewSplit);
        overviewFrame->setObjectName(QString::fromUtf8("overviewFrame"));
        overviewFrame->setFrameShape(QFrame::StyledPanel);
        overviewFrame->setFrameShadow(QFrame::Raised);
        legendOverviewSplit->addWidget(overviewFrame);
        canvasLegendSplit->addWidget(legendOverviewSplit);
        tabWidget = new QTabWidget(canvasLegendSplit);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy2);
        tabWidget->setMinimumSize(QSize(0, 0));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setUnderline(false);
        font2.setWeight(50);
        font2.setStrikeOut(false);
        tabWidget->setFont(font2);
        tabWidget->setTabPosition(QTabWidget::East);
        tabWidget->setTabShape(QTabWidget::Rounded);
        Planet_View = new QWidget();
        Planet_View->setObjectName(QString::fromUtf8("Planet_View"));
        tabWidget->addTab(Planet_View, QString());
        canvasLegendSplit->addWidget(tabWidget);

        vboxLayout->addWidget(canvasLegendSplit);

        ossimPlanetQtMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ossimPlanetQtMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1233, 22));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuWindow = new QMenu(menubar);
        menuWindow->setObjectName(QString::fromUtf8("menuWindow"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        ossimPlanetQtMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ossimPlanetQtMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ossimPlanetQtMainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuWindow->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuEdit->addAction(editLayerOperation);
        menuTools->addAction(toolsRuler);
        menuWindow->addAction(actionActivity);
        menuWindow->addAction(actionMessageLog);
        menuHelp->addAction(helpAbout);
        menuView->addAction(viewToggleFullScreen);
        menuView->addSeparator();
        menuView->addAction(viewBookmark);
        menuView->addAction(viewGotoLatLon);
        menuView->addAction(viewGotoAddress);
        menuView->addSeparator();
        menuView->addAction(viewStartRecordingAnimationPath);
        menuView->addAction(viewStopRecordingAnimationPath);
        menuView->addAction(viewPlayAnimationPath);
        menuView->addSeparator();
        menuView->addAction(viewRefreshTextures);
        menuView->addAction(viewRefreshAll);
        menuView->addSeparator();
        menuView->addAction(viewSyncLocation);
        menuFile->addAction(filePreferences);
        menuFile->addSeparator();
        menuFile->addAction(fileOpenImage);
        menuFile->addAction(fileOpenVideo);
        menuFile->addAction(fileOpenWms);
        menuFile->addAction(fileOpenKml);
        menuFile->addAction(openSession);
        menuFile->addSeparator();
        menuFile->addAction(saveSession);
        menuFile->addAction(saveSessionAs);
        menuFile->addSeparator();
        menuFile->addAction(fileSaveViewAsJpeg);
        menuFile->addAction(fileSaveViewAsPng);
        menuFile->addAction(fileSaveViewAsTiff);
        menuFile->addSeparator();
        menuFile->addAction(fileSaveAnimationPath);
        menuFile->addAction(fileLoadAnimationPath);
        menuFile->addSeparator();
        menuFile->addAction(fileQuit);

        retranslateUi(ossimPlanetQtMainWindow);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ossimPlanetQtMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ossimPlanetQtMainWindow)
    {
        ossimPlanetQtMainWindow->setWindowTitle(QApplication::translate("ossimPlanetQtMainWindow", "OSSIM Planetary Visualization", 0, QApplication::UnicodeUTF8));
        fileOpenImage->setText(QApplication::translate("ossimPlanetQtMainWindow", "Open Image", 0, QApplication::UnicodeUTF8));
        fileOpenWms->setText(QApplication::translate("ossimPlanetQtMainWindow", "Open Wms", 0, QApplication::UnicodeUTF8));
        viewGotoLatLon->setText(QApplication::translate("ossimPlanetQtMainWindow", "Goto Lat Lon", 0, QApplication::UnicodeUTF8));
        viewGotoAddress->setText(QApplication::translate("ossimPlanetQtMainWindow", "Goto Address", 0, QApplication::UnicodeUTF8));
        filePreferences->setText(QApplication::translate("ossimPlanetQtMainWindow", "Preferences", 0, QApplication::UnicodeUTF8));
        viewToggleFullScreen->setText(QApplication::translate("ossimPlanetQtMainWindow", "Toggle Full Screen", 0, QApplication::UnicodeUTF8));
        viewToggleFullScreen->setIconText(QApplication::translate("ossimPlanetQtMainWindow", "Toggle Full Screen", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        viewToggleFullScreen->setToolTip(QApplication::translate("ossimPlanetQtMainWindow", "Toggle Full Screen", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        editLayerOperation->setText(QApplication::translate("ossimPlanetQtMainWindow", "Layer Operation", 0, QApplication::UnicodeUTF8));
        actionActivity->setText(QApplication::translate("ossimPlanetQtMainWindow", "Activity", 0, QApplication::UnicodeUTF8));
        resetStats->setText(QApplication::translate("ossimPlanetQtMainWindow", "Reset Stats", 0, QApplication::UnicodeUTF8));
        saveSession->setText(QApplication::translate("ossimPlanetQtMainWindow", "Save", 0, QApplication::UnicodeUTF8));
        openSession->setText(QApplication::translate("ossimPlanetQtMainWindow", "Open Session", 0, QApplication::UnicodeUTF8));
        saveSessionAs->setText(QApplication::translate("ossimPlanetQtMainWindow", "Save as", 0, QApplication::UnicodeUTF8));
        toolsRuler->setText(QApplication::translate("ossimPlanetQtMainWindow", "Ruler", 0, QApplication::UnicodeUTF8));
        fileQuit->setText(QApplication::translate("ossimPlanetQtMainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        viewRefreshTextures->setText(QApplication::translate("ossimPlanetQtMainWindow", "Refresh textures", 0, QApplication::UnicodeUTF8));
        viewRefreshAll->setText(QApplication::translate("ossimPlanetQtMainWindow", "Refresh All", 0, QApplication::UnicodeUTF8));
        helpAbout->setText(QApplication::translate("ossimPlanetQtMainWindow", "About", 0, QApplication::UnicodeUTF8));
        actionJpeg->setText(QApplication::translate("ossimPlanetQtMainWindow", "Jpeg", 0, QApplication::UnicodeUTF8));
        fileSaveViewAsJpeg->setText(QApplication::translate("ossimPlanetQtMainWindow", "Save View As JPEG", 0, QApplication::UnicodeUTF8));
        fileSaveViewAsJpeg->setIconText(QApplication::translate("ossimPlanetQtMainWindow", "Save View As JPEG", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        fileSaveViewAsJpeg->setToolTip(QApplication::translate("ossimPlanetQtMainWindow", "Save View As JPEG", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        fileSaveViewAsPng->setText(QApplication::translate("ossimPlanetQtMainWindow", "Save View As PNG", 0, QApplication::UnicodeUTF8));
        viewSaveAsTiff->setText(QApplication::translate("ossimPlanetQtMainWindow", "TIFF", 0, QApplication::UnicodeUTF8));
        fileSaveViewAsTiff->setText(QApplication::translate("ossimPlanetQtMainWindow", "Save View As TIFF", 0, QApplication::UnicodeUTF8));
        fileSaveViewAsTiff->setIconText(QApplication::translate("ossimPlanetQtMainWindow", "Save View As TIFF", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        fileSaveViewAsTiff->setToolTip(QApplication::translate("ossimPlanetQtMainWindow", "Save View As TIFF", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        viewStartRecordingAnimationPath->setText(QApplication::translate("ossimPlanetQtMainWindow", "Start Recording Animation Path", 0, QApplication::UnicodeUTF8));
        viewStopRecordingAnimationPath->setText(QApplication::translate("ossimPlanetQtMainWindow", "Stop Recording Animation Path", 0, QApplication::UnicodeUTF8));
        actionSave_Recording->setText(QApplication::translate("ossimPlanetQtMainWindow", "Save Current Recording", 0, QApplication::UnicodeUTF8));
        fileSaveAnimationPath->setText(QApplication::translate("ossimPlanetQtMainWindow", "Save Animation Path", 0, QApplication::UnicodeUTF8));
        fileLoadAnimationPath->setText(QApplication::translate("ossimPlanetQtMainWindow", "Load Animation Path", 0, QApplication::UnicodeUTF8));
        viewPlayAnimationPath->setText(QApplication::translate("ossimPlanetQtMainWindow", "Play Animation Path", 0, QApplication::UnicodeUTF8));
        viewSyncGoto->setText(QApplication::translate("ossimPlanetQtMainWindow", "Goto", 0, QApplication::UnicodeUTF8));
        viewSyncSet->setText(QApplication::translate("ossimPlanetQtMainWindow", "Set", 0, QApplication::UnicodeUTF8));
        viewSyncLocation->setText(QApplication::translate("ossimPlanetQtMainWindow", "Sync Location", 0, QApplication::UnicodeUTF8));
        fileOpenKml->setText(QApplication::translate("ossimPlanetQtMainWindow", "Open Kml", 0, QApplication::UnicodeUTF8));
        actionMessageLog->setText(QApplication::translate("ossimPlanetQtMainWindow", "Message Log", 0, QApplication::UnicodeUTF8));
        fileOpenVideo->setText(QApplication::translate("ossimPlanetQtMainWindow", "Open Video", 0, QApplication::UnicodeUTF8));
        viewBookmark->setText(QApplication::translate("ossimPlanetQtMainWindow", "Bookmark", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = thePlanetLegend->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("ossimPlanetQtMainWindow", "1", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("ossimPlanetQtMainWindow", "0", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(legendPage), QApplication::translate("ossimPlanetQtMainWindow", "Legend", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Planet_View), QApplication::translate("ossimPlanetQtMainWindow", "Planet View", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("ossimPlanetQtMainWindow", "Edit", 0, QApplication::UnicodeUTF8));
        menuTools->setTitle(QApplication::translate("ossimPlanetQtMainWindow", "Tools", 0, QApplication::UnicodeUTF8));
        menuWindow->setTitle(QApplication::translate("ossimPlanetQtMainWindow", "Window", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("ossimPlanetQtMainWindow", "Help", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("ossimPlanetQtMainWindow", "View", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("ossimPlanetQtMainWindow", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ossimPlanetQtMainWindow: public Ui_ossimPlanetQtMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OSSIMPLANETQTMAINWINDOW_H

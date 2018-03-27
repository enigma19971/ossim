// $Id$

#include <iostream>
#include <QtGui/QApplication>
#include <QtGui/QSplashScreen>
#include <QtCore/QThread>
#include <ossimGui/MainWindow.h>
#include <ossimGui/OssimObjectFactory.h>
#include <ossim/base/ossimArgumentParser.h>
#include <ossim/base/ossimApplicationUsage.h>
#include <ossim/base/ossimObjectFactoryRegistry.h>
#include <ossim/init/ossimInit.h>
#include <OpenThreads/Thread>
#ifdef OSSIMQT_USE_WINDOWS_STYLE
#include <QtGui/QWindowsStyle>
#endif
#include <ossim/base/ossimEnvironmentUtility.h>

#ifdef WIN32
int main(int argc, char *argv[]);
#include <windows.h>
#include <shellapi.h>
int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    PSTR lpCmdLine, int nCmdShow)
{
	int argc = 1;
	char *argv[] = {"ossimgui"};
    int ret = main( argc, argv );
    return ret;
}
#endif

int main(int argc, char *argv[])
{
   ossimArgumentParser argumentParser(&argc, argv);
   ossimInit::instance()->addOptions(argumentParser);
   ossimInit::instance()->initialize(argumentParser);
   argumentParser.getApplicationUsage()->addCommandLineOption("-h or --help","Display this information");
   argumentParser.getApplicationUsage()->setApplicationName(argumentParser.getApplicationName());
   argumentParser.getApplicationUsage()->setDescription(argumentParser.getApplicationName()+" GUI application for the ossim core library");
   argumentParser.getApplicationUsage()->setCommandLineUsage(argumentParser.getApplicationName()+" [options]");
  
   if (argumentParser.read("-h") || argumentParser.read("--help"))
   {
      argumentParser.getApplicationUsage()->write(std::cout);
      exit(0);
   }
   argumentParser.reportRemainingOptionsAsUnrecognized();   
   QApplication app(argc, argv);
   QSplashScreen splash(QPixmap(":/splash/GeoCellSplash.png"));
   splash.setWindowFlags(splash.windowFlags()|Qt::WindowStaysOnTopHint);
   splash.show();
#ifdef OSSIMQT_USE_WINDOWS_STYLE
   QWindowsStyle *style = new QWindowsStyle();
   app.setStyle(style);
#endif
   ossimObjectFactoryRegistry::instance()->registerFactory(ossimGui::OssimObjectFactory::instance());
   ossimGui::MainWindow*  mainWindow = new ossimGui::MainWindow();
   mainWindow->show();

   OpenThreads::Thread::microSleep((1000*1000));
   //splash.finish(mainWindow);
   splash.close();
   int result = app.exec();
   ossimInit::instance()->finalize();
   
   
   return result;
}

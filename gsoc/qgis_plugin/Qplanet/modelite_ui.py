# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file '/Users/Shared/Development/gsoc/OssimPlanetSasha/gui/modelite_ui.ui'
#
# Created: Wed Jul 29 19:14:23 2009
#      by: PyQt4 UI code generator 4.5
#
# WARNING! All changes made in this file will be lost!

from PyQt4 import QtCore, QtGui

class Ui_Form(object):
    def setupUi(self, Form):
        Form.setObjectName("Form")
        Form.resize(285, 600)
        icon = QtGui.QIcon()
        icon.addPixmap(QtGui.QPixmap(":/icons/icons/cubo.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        Form.setWindowIcon(icon)
        self.verticalLayout_2 = QtGui.QVBoxLayout(Form)
        self.verticalLayout_2.setObjectName("verticalLayout_2")
        self.KmlGeneralgroupBox = QtGui.QGroupBox(Form)
        self.KmlGeneralgroupBox.setObjectName("KmlGeneralgroupBox")
        self.verticalLayout = QtGui.QVBoxLayout(self.KmlGeneralgroupBox)
        self.verticalLayout.setObjectName("verticalLayout")
        self.gridLayout_2 = QtGui.QGridLayout()
        self.gridLayout_2.setObjectName("gridLayout_2")
        self.label_17 = QtGui.QLabel(self.KmlGeneralgroupBox)
        self.label_17.setObjectName("label_17")
        self.gridLayout_2.addWidget(self.label_17, 2, 0, 1, 1)
        self.LineWidthlabel_2 = QtGui.QLabel(self.KmlGeneralgroupBox)
        self.LineWidthlabel_2.setObjectName("LineWidthlabel_2")
        self.gridLayout_2.addWidget(self.LineWidthlabel_2, 6, 0, 1, 1)
        self.altitudemode = QtGui.QComboBox(self.KmlGeneralgroupBox)
        self.altitudemode.setObjectName("altitudemode")
        self.altitudemode.addItem(QtCore.QString())
        self.altitudemode.addItem(QtCore.QString())
        self.altitudemode.addItem(QtCore.QString())
        self.gridLayout_2.addWidget(self.altitudemode, 6, 1, 1, 1)
        self.horizontalLayout_3 = QtGui.QHBoxLayout()
        self.horizontalLayout_3.setObjectName("horizontalLayout_3")
        self.selectdb = QtGui.QToolButton(self.KmlGeneralgroupBox)
        icon1 = QtGui.QIcon()
        icon1.addPixmap(QtGui.QPixmap(":/icons/icons/db.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.selectdb.setIcon(icon1)
        self.selectdb.setObjectName("selectdb")
        self.horizontalLayout_3.addWidget(self.selectdb)
        self.dbname = QtGui.QLineEdit(self.KmlGeneralgroupBox)
        self.dbname.setObjectName("dbname")
        self.horizontalLayout_3.addWidget(self.dbname)
        self.gridLayout_2.addLayout(self.horizontalLayout_3, 2, 1, 1, 1)
        self.label_20 = QtGui.QLabel(self.KmlGeneralgroupBox)
        self.label_20.setObjectName("label_20")
        self.gridLayout_2.addWidget(self.label_20, 3, 0, 1, 1)
        self.horizontalLayout_4 = QtGui.QHBoxLayout()
        self.horizontalLayout_4.setObjectName("horizontalLayout_4")
        self.newtable = QtGui.QCheckBox(self.KmlGeneralgroupBox)
        self.newtable.setObjectName("newtable")
        self.horizontalLayout_4.addWidget(self.newtable)
        self.dbtable = QtGui.QLineEdit(self.KmlGeneralgroupBox)
        self.dbtable.setObjectName("dbtable")
        self.horizontalLayout_4.addWidget(self.dbtable)
        self.gridLayout_2.addLayout(self.horizontalLayout_4, 3, 1, 1, 1)
        self.label_19 = QtGui.QLabel(self.KmlGeneralgroupBox)
        self.label_19.setObjectName("label_19")
        self.gridLayout_2.addWidget(self.label_19, 0, 0, 1, 1)
        self.Iconlabel_2 = QtGui.QLabel(self.KmlGeneralgroupBox)
        self.Iconlabel_2.setObjectName("Iconlabel_2")
        self.gridLayout_2.addWidget(self.Iconlabel_2, 1, 0, 1, 1)
        self.horizontalLayout_2 = QtGui.QHBoxLayout()
        self.horizontalLayout_2.setObjectName("horizontalLayout_2")
        self.selectmodel = QtGui.QToolButton(self.KmlGeneralgroupBox)
        self.selectmodel.setIcon(icon)
        self.selectmodel.setObjectName("selectmodel")
        self.horizontalLayout_2.addWidget(self.selectmodel)
        self.model = QtGui.QLineEdit(self.KmlGeneralgroupBox)
        self.model.setObjectName("model")
        self.horizontalLayout_2.addWidget(self.model)
        self.gridLayout_2.addLayout(self.horizontalLayout_2, 1, 1, 1, 1)
        self.name = QtGui.QLineEdit(self.KmlGeneralgroupBox)
        self.name.setObjectName("name")
        self.gridLayout_2.addWidget(self.name, 0, 1, 1, 1)
        self.verticalLayout.addLayout(self.gridLayout_2)
        self.verticalLayout_2.addWidget(self.KmlGeneralgroupBox)
        self.KmlColorgroupBox = QtGui.QGroupBox(Form)
        self.KmlColorgroupBox.setObjectName("KmlColorgroupBox")
        self.gridLayout_29 = QtGui.QGridLayout(self.KmlColorgroupBox)
        self.gridLayout_29.setObjectName("gridLayout_29")
        self.tabWidget = QtGui.QTabWidget(self.KmlColorgroupBox)
        self.tabWidget.setObjectName("tabWidget")
        self.tab_8 = QtGui.QWidget()
        self.tab_8.setObjectName("tab_8")
        self.verticalLayout_14 = QtGui.QVBoxLayout(self.tab_8)
        self.verticalLayout_14.setObjectName("verticalLayout_14")
        self.tabWidget_4 = QtGui.QTabWidget(self.tab_8)
        self.tabWidget_4.setObjectName("tabWidget_4")
        self.tab_9 = QtGui.QWidget()
        self.tab_9.setObjectName("tab_9")
        self.verticalLayout_11 = QtGui.QVBoxLayout(self.tab_9)
        self.verticalLayout_11.setObjectName("verticalLayout_11")
        self.gridLayout_8 = QtGui.QGridLayout()
        self.gridLayout_8.setObjectName("gridLayout_8")
        self.label_21 = QtGui.QLabel(self.tab_9)
        self.label_21.setObjectName("label_21")
        self.gridLayout_8.addWidget(self.label_21, 0, 0, 1, 1)
        self.MLongitude = QtGui.QLineEdit(self.tab_9)
        self.MLongitude.setObjectName("MLongitude")
        self.gridLayout_8.addWidget(self.MLongitude, 0, 1, 1, 1)
        self.label_22 = QtGui.QLabel(self.tab_9)
        self.label_22.setObjectName("label_22")
        self.gridLayout_8.addWidget(self.label_22, 1, 0, 1, 1)
        self.label_23 = QtGui.QLabel(self.tab_9)
        self.label_23.setObjectName("label_23")
        self.gridLayout_8.addWidget(self.label_23, 2, 0, 1, 1)
        self.MLatitude = QtGui.QLineEdit(self.tab_9)
        self.MLatitude.setObjectName("MLatitude")
        self.gridLayout_8.addWidget(self.MLatitude, 1, 1, 1, 1)
        self.MAltitude = QtGui.QLineEdit(self.tab_9)
        self.MAltitude.setObjectName("MAltitude")
        self.gridLayout_8.addWidget(self.MAltitude, 2, 1, 1, 1)
        self.verticalLayout_11.addLayout(self.gridLayout_8)
        self.setlonlat = QtGui.QPushButton(self.tab_9)
        self.setlonlat.setObjectName("setlonlat")
        self.verticalLayout_11.addWidget(self.setlonlat)
        spacerItem = QtGui.QSpacerItem(20, 40, QtGui.QSizePolicy.Minimum, QtGui.QSizePolicy.Expanding)
        self.verticalLayout_11.addItem(spacerItem)
        self.tabWidget_4.addTab(self.tab_9, "")
        self.tab_10 = QtGui.QWidget()
        self.tab_10.setObjectName("tab_10")
        self.verticalLayout_12 = QtGui.QVBoxLayout(self.tab_10)
        self.verticalLayout_12.setObjectName("verticalLayout_12")
        self.gridLayout_9 = QtGui.QGridLayout()
        self.gridLayout_9.setObjectName("gridLayout_9")
        self.label_31 = QtGui.QLabel(self.tab_10)
        self.label_31.setObjectName("label_31")
        self.gridLayout_9.addWidget(self.label_31, 0, 0, 1, 1)
        self.label_32 = QtGui.QLabel(self.tab_10)
        self.label_32.setObjectName("label_32")
        self.gridLayout_9.addWidget(self.label_32, 1, 0, 1, 1)
        self.label_33 = QtGui.QLabel(self.tab_10)
        self.label_33.setObjectName("label_33")
        self.gridLayout_9.addWidget(self.label_33, 2, 0, 1, 1)
        self.MHeading = QtGui.QLineEdit(self.tab_10)
        self.MHeading.setObjectName("MHeading")
        self.gridLayout_9.addWidget(self.MHeading, 0, 1, 1, 1)
        self.MTilt = QtGui.QLineEdit(self.tab_10)
        self.MTilt.setObjectName("MTilt")
        self.gridLayout_9.addWidget(self.MTilt, 1, 1, 1, 1)
        self.MRoll = QtGui.QLineEdit(self.tab_10)
        self.MRoll.setObjectName("MRoll")
        self.gridLayout_9.addWidget(self.MRoll, 2, 1, 1, 1)
        self.verticalLayout_12.addLayout(self.gridLayout_9)
        spacerItem1 = QtGui.QSpacerItem(20, 40, QtGui.QSizePolicy.Minimum, QtGui.QSizePolicy.Expanding)
        self.verticalLayout_12.addItem(spacerItem1)
        self.tabWidget_4.addTab(self.tab_10, "")
        self.tab_11 = QtGui.QWidget()
        self.tab_11.setObjectName("tab_11")
        self.verticalLayout_13 = QtGui.QVBoxLayout(self.tab_11)
        self.verticalLayout_13.setObjectName("verticalLayout_13")
        self.gridLayout_10 = QtGui.QGridLayout()
        self.gridLayout_10.setObjectName("gridLayout_10")
        self.label_39 = QtGui.QLabel(self.tab_11)
        self.label_39.setObjectName("label_39")
        self.gridLayout_10.addWidget(self.label_39, 0, 0, 1, 1)
        self.label_40 = QtGui.QLabel(self.tab_11)
        self.label_40.setObjectName("label_40")
        self.gridLayout_10.addWidget(self.label_40, 1, 0, 1, 1)
        self.label_41 = QtGui.QLabel(self.tab_11)
        self.label_41.setObjectName("label_41")
        self.gridLayout_10.addWidget(self.label_41, 2, 0, 1, 1)
        self.Xscale = QtGui.QLineEdit(self.tab_11)
        self.Xscale.setObjectName("Xscale")
        self.gridLayout_10.addWidget(self.Xscale, 0, 1, 1, 1)
        self.Yscale = QtGui.QLineEdit(self.tab_11)
        self.Yscale.setObjectName("Yscale")
        self.gridLayout_10.addWidget(self.Yscale, 1, 1, 1, 1)
        self.Zscale = QtGui.QLineEdit(self.tab_11)
        self.Zscale.setObjectName("Zscale")
        self.gridLayout_10.addWidget(self.Zscale, 2, 1, 1, 1)
        self.verticalLayout_13.addLayout(self.gridLayout_10)
        spacerItem2 = QtGui.QSpacerItem(20, 40, QtGui.QSizePolicy.Minimum, QtGui.QSizePolicy.Expanding)
        self.verticalLayout_13.addItem(spacerItem2)
        self.tabWidget_4.addTab(self.tab_11, "")
        self.verticalLayout_14.addWidget(self.tabWidget_4)
        self.tabWidget.addTab(self.tab_8, "")
        self.tab = QtGui.QWidget()
        self.tab.setObjectName("tab")
        self.verticalLayout_3 = QtGui.QVBoxLayout(self.tab)
        self.verticalLayout_3.setObjectName("verticalLayout_3")
        self.gridLayout_3 = QtGui.QGridLayout()
        self.gridLayout_3.setObjectName("gridLayout_3")
        self.label_3 = QtGui.QLabel(self.tab)
        self.label_3.setObjectName("label_3")
        self.gridLayout_3.addWidget(self.label_3, 1, 0, 1, 1)
        self.CameraHeading = QtGui.QLineEdit(self.tab)
        self.CameraHeading.setObjectName("CameraHeading")
        self.gridLayout_3.addWidget(self.CameraHeading, 1, 1, 1, 1)
        self.CameraTilt = QtGui.QLineEdit(self.tab)
        self.CameraTilt.setObjectName("CameraTilt")
        self.gridLayout_3.addWidget(self.CameraTilt, 2, 1, 1, 1)
        self.CameraLatitude = QtGui.QLineEdit(self.tab)
        self.CameraLatitude.setObjectName("CameraLatitude")
        self.gridLayout_3.addWidget(self.CameraLatitude, 3, 1, 1, 1)
        self.CameraLongitude = QtGui.QLineEdit(self.tab)
        self.CameraLongitude.setObjectName("CameraLongitude")
        self.gridLayout_3.addWidget(self.CameraLongitude, 4, 1, 1, 1)
        self.CameraRange = QtGui.QLineEdit(self.tab)
        self.CameraRange.setObjectName("CameraRange")
        self.gridLayout_3.addWidget(self.CameraRange, 5, 1, 1, 1)
        self.CameraAltitude = QtGui.QLineEdit(self.tab)
        self.CameraAltitude.setObjectName("CameraAltitude")
        self.gridLayout_3.addWidget(self.CameraAltitude, 6, 1, 1, 1)
        self.label_4 = QtGui.QLabel(self.tab)
        self.label_4.setObjectName("label_4")
        self.gridLayout_3.addWidget(self.label_4, 2, 0, 1, 1)
        self.label_5 = QtGui.QLabel(self.tab)
        self.label_5.setObjectName("label_5")
        self.gridLayout_3.addWidget(self.label_5, 3, 0, 1, 1)
        self.label_6 = QtGui.QLabel(self.tab)
        self.label_6.setObjectName("label_6")
        self.gridLayout_3.addWidget(self.label_6, 4, 0, 1, 1)
        self.label_7 = QtGui.QLabel(self.tab)
        self.label_7.setObjectName("label_7")
        self.gridLayout_3.addWidget(self.label_7, 5, 0, 1, 1)
        self.label_8 = QtGui.QLabel(self.tab)
        self.label_8.setObjectName("label_8")
        self.gridLayout_3.addWidget(self.label_8, 6, 0, 1, 1)
        self.verticalLayout_3.addLayout(self.gridLayout_3)
        self.setcamera = QtGui.QPushButton(self.tab)
        self.setcamera.setObjectName("setcamera")
        self.verticalLayout_3.addWidget(self.setcamera)
        self.tabWidget.addTab(self.tab, "")
        self.gridLayout_29.addWidget(self.tabWidget, 0, 0, 1, 1)
        self.verticalLayout_2.addWidget(self.KmlColorgroupBox)
        self.horizontalLayout_8 = QtGui.QHBoxLayout()
        self.horizontalLayout_8.setObjectName("horizontalLayout_8")
        spacerItem3 = QtGui.QSpacerItem(40, 20, QtGui.QSizePolicy.Expanding, QtGui.QSizePolicy.Minimum)
        self.horizontalLayout_8.addItem(spacerItem3)
        self.save = QtGui.QPushButton(Form)
        self.save.setObjectName("save")
        self.horizontalLayout_8.addWidget(self.save)
        self.verticalLayout_2.addLayout(self.horizontalLayout_8)

        self.retranslateUi(Form)
        self.tabWidget.setCurrentIndex(0)
        self.tabWidget_4.setCurrentIndex(0)
        QtCore.QMetaObject.connectSlotsByName(Form)

    def retranslateUi(self, Form):
        Form.setWindowTitle(QtGui.QApplication.translate("Form", "Model", None, QtGui.QApplication.UnicodeUTF8))
        self.KmlGeneralgroupBox.setTitle(QtGui.QApplication.translate("Form", "General", None, QtGui.QApplication.UnicodeUTF8))
        self.label_17.setText(QtGui.QApplication.translate("Form", "dbname", None, QtGui.QApplication.UnicodeUTF8))
        self.LineWidthlabel_2.setText(QtGui.QApplication.translate("Form", "Altitude", None, QtGui.QApplication.UnicodeUTF8))
        self.altitudemode.setItemText(0, QtGui.QApplication.translate("Form", "absolute", None, QtGui.QApplication.UnicodeUTF8))
        self.altitudemode.setItemText(1, QtGui.QApplication.translate("Form", "clampToGround", None, QtGui.QApplication.UnicodeUTF8))
        self.altitudemode.setItemText(2, QtGui.QApplication.translate("Form", "relativeToGround", None, QtGui.QApplication.UnicodeUTF8))
        self.label_20.setText(QtGui.QApplication.translate("Form", "dbtable", None, QtGui.QApplication.UnicodeUTF8))
        self.newtable.setText(QtGui.QApplication.translate("Form", "new", None, QtGui.QApplication.UnicodeUTF8))
        self.label_19.setText(QtGui.QApplication.translate("Form", "Name", None, QtGui.QApplication.UnicodeUTF8))
        self.Iconlabel_2.setText(QtGui.QApplication.translate("Form", "Model", None, QtGui.QApplication.UnicodeUTF8))
        self.KmlColorgroupBox.setTitle(QtGui.QApplication.translate("Form", "Look-At", None, QtGui.QApplication.UnicodeUTF8))
        self.label_21.setText(QtGui.QApplication.translate("Form", "Longitude", None, QtGui.QApplication.UnicodeUTF8))
        self.label_22.setText(QtGui.QApplication.translate("Form", "Latitude", None, QtGui.QApplication.UnicodeUTF8))
        self.label_23.setText(QtGui.QApplication.translate("Form", "Altitude", None, QtGui.QApplication.UnicodeUTF8))
        self.setlonlat.setText(QtGui.QApplication.translate("Form", "set", None, QtGui.QApplication.UnicodeUTF8))
        self.tabWidget_4.setTabText(self.tabWidget_4.indexOf(self.tab_9), QtGui.QApplication.translate("Form", "Location", None, QtGui.QApplication.UnicodeUTF8))
        self.label_31.setText(QtGui.QApplication.translate("Form", "Heading", None, QtGui.QApplication.UnicodeUTF8))
        self.label_32.setText(QtGui.QApplication.translate("Form", "Tilt", None, QtGui.QApplication.UnicodeUTF8))
        self.label_33.setText(QtGui.QApplication.translate("Form", "Roll", None, QtGui.QApplication.UnicodeUTF8))
        self.tabWidget_4.setTabText(self.tabWidget_4.indexOf(self.tab_10), QtGui.QApplication.translate("Form", "Orientation", None, QtGui.QApplication.UnicodeUTF8))
        self.label_39.setText(QtGui.QApplication.translate("Form", "X", None, QtGui.QApplication.UnicodeUTF8))
        self.label_40.setText(QtGui.QApplication.translate("Form", "Y", None, QtGui.QApplication.UnicodeUTF8))
        self.label_41.setText(QtGui.QApplication.translate("Form", "Z", None, QtGui.QApplication.UnicodeUTF8))
        self.Xscale.setText(QtGui.QApplication.translate("Form", "1.0", None, QtGui.QApplication.UnicodeUTF8))
        self.Yscale.setText(QtGui.QApplication.translate("Form", "1.0", None, QtGui.QApplication.UnicodeUTF8))
        self.Zscale.setText(QtGui.QApplication.translate("Form", "1.0", None, QtGui.QApplication.UnicodeUTF8))
        self.tabWidget_4.setTabText(self.tabWidget_4.indexOf(self.tab_11), QtGui.QApplication.translate("Form", "Scale", None, QtGui.QApplication.UnicodeUTF8))
        self.tabWidget.setTabText(self.tabWidget.indexOf(self.tab_8), QtGui.QApplication.translate("Form", "Model", None, QtGui.QApplication.UnicodeUTF8))
        self.label_3.setText(QtGui.QApplication.translate("Form", "Heading", None, QtGui.QApplication.UnicodeUTF8))
        self.label_4.setText(QtGui.QApplication.translate("Form", "Tilt", None, QtGui.QApplication.UnicodeUTF8))
        self.label_5.setText(QtGui.QApplication.translate("Form", "Latitude", None, QtGui.QApplication.UnicodeUTF8))
        self.label_6.setText(QtGui.QApplication.translate("Form", "Longitude", None, QtGui.QApplication.UnicodeUTF8))
        self.label_7.setText(QtGui.QApplication.translate("Form", "Range", None, QtGui.QApplication.UnicodeUTF8))
        self.label_8.setText(QtGui.QApplication.translate("Form", "Altitude", None, QtGui.QApplication.UnicodeUTF8))
        self.setcamera.setText(QtGui.QApplication.translate("Form", "set", None, QtGui.QApplication.UnicodeUTF8))
        self.tabWidget.setTabText(self.tabWidget.indexOf(self.tab), QtGui.QApplication.translate("Form", "LookAt", None, QtGui.QApplication.UnicodeUTF8))
        self.save.setText(QtGui.QApplication.translate("Form", "Save", None, QtGui.QApplication.UnicodeUTF8))

import images_rc
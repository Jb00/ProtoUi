/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu Jan 27 13:51:04 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionHospital;
    QAction *actionNursing_Home;
    QAction *actionFull_Screen;
    QAction *actionZoom_In;
    QAction *actionZoom_Out;
    QAction *actionOn;
    QAction *actionOff;
    QAction *actionLogout;
    QAction *actionAcute_Care;
    QAction *actionComplex_Continuing_Care;
    QAction *actionLong_Term_Care;
    QWidget *centralWidget;
    QLabel *map;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_4;
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *pushButton_5;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBox_2;
    QPushButton *pushButton_4;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuControl_Panel;
    QMenu *menuSearch;
    QMenu *menuAvailable_Beds;
    QMenu *menuView;
    QMenu *menuFacility;
    QMenu *menuZoom;
    QMenu *menuHelp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1172, 648);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionHospital = new QAction(MainWindow);
        actionHospital->setObjectName(QString::fromUtf8("actionHospital"));
        actionNursing_Home = new QAction(MainWindow);
        actionNursing_Home->setObjectName(QString::fromUtf8("actionNursing_Home"));
        actionFull_Screen = new QAction(MainWindow);
        actionFull_Screen->setObjectName(QString::fromUtf8("actionFull_Screen"));
        actionZoom_In = new QAction(MainWindow);
        actionZoom_In->setObjectName(QString::fromUtf8("actionZoom_In"));
        actionZoom_Out = new QAction(MainWindow);
        actionZoom_Out->setObjectName(QString::fromUtf8("actionZoom_Out"));
        actionOn = new QAction(MainWindow);
        actionOn->setObjectName(QString::fromUtf8("actionOn"));
        actionOff = new QAction(MainWindow);
        actionOff->setObjectName(QString::fromUtf8("actionOff"));
        actionLogout = new QAction(MainWindow);
        actionLogout->setObjectName(QString::fromUtf8("actionLogout"));
        actionAcute_Care = new QAction(MainWindow);
        actionAcute_Care->setObjectName(QString::fromUtf8("actionAcute_Care"));
        actionComplex_Continuing_Care = new QAction(MainWindow);
        actionComplex_Continuing_Care->setObjectName(QString::fromUtf8("actionComplex_Continuing_Care"));
        actionLong_Term_Care = new QAction(MainWindow);
        actionLong_Term_Care->setObjectName(QString::fromUtf8("actionLong_Term_Care"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        map = new QLabel(centralWidget);
        map->setObjectName(QString::fromUtf8("map"));
        map->setGeometry(QRect(9, 70, 941, 521));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(970, 61, 158, 384));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        checkBox = new QCheckBox(widget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(widget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        verticalLayout->addWidget(checkBox_2);

        checkBox_4 = new QCheckBox(widget);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        verticalLayout->addWidget(checkBox_4);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout->addWidget(comboBox);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);


        verticalLayout_3->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        comboBox_2 = new QComboBox(widget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        verticalLayout_2->addWidget(comboBox_2);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout_2->addWidget(pushButton_4);


        verticalLayout_3->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1172, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuControl_Panel = new QMenu(menuFile);
        menuControl_Panel->setObjectName(QString::fromUtf8("menuControl_Panel"));
        menuSearch = new QMenu(menuFile);
        menuSearch->setObjectName(QString::fromUtf8("menuSearch"));
        menuAvailable_Beds = new QMenu(menuSearch);
        menuAvailable_Beds->setObjectName(QString::fromUtf8("menuAvailable_Beds"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuFacility = new QMenu(menuView);
        menuFacility->setObjectName(QString::fromUtf8("menuFacility"));
        menuZoom = new QMenu(menuView);
        menuZoom->setObjectName(QString::fromUtf8("menuZoom"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(menuControl_Panel->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(menuSearch->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionLogout);
        menuControl_Panel->addAction(actionOn);
        menuControl_Panel->addSeparator();
        menuControl_Panel->addAction(actionOff);
        menuSearch->addAction(menuAvailable_Beds->menuAction());
        menuAvailable_Beds->addAction(actionAcute_Care);
        menuAvailable_Beds->addSeparator();
        menuAvailable_Beds->addAction(actionComplex_Continuing_Care);
        menuAvailable_Beds->addSeparator();
        menuAvailable_Beds->addAction(actionLong_Term_Care);
        menuView->addAction(menuFacility->menuAction());
        menuView->addSeparator();
        menuView->addAction(actionFull_Screen);
        menuView->addSeparator();
        menuView->addAction(menuZoom->menuAction());
        menuFacility->addAction(actionHospital);
        menuFacility->addSeparator();
        menuFacility->addAction(actionNursing_Home);
        menuZoom->addAction(actionZoom_In);
        menuZoom->addSeparator();
        menuZoom->addAction(actionZoom_Out);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        actionHospital->setText(QApplication::translate("MainWindow", "Hospital", 0, QApplication::UnicodeUTF8));
        actionNursing_Home->setText(QApplication::translate("MainWindow", "Nursing Home", 0, QApplication::UnicodeUTF8));
        actionFull_Screen->setText(QApplication::translate("MainWindow", "Full Screen", 0, QApplication::UnicodeUTF8));
        actionZoom_In->setText(QApplication::translate("MainWindow", "Zoom In", 0, QApplication::UnicodeUTF8));
        actionZoom_Out->setText(QApplication::translate("MainWindow", "Zoom Out", 0, QApplication::UnicodeUTF8));
        actionOn->setText(QApplication::translate("MainWindow", "On", 0, QApplication::UnicodeUTF8));
        actionOff->setText(QApplication::translate("MainWindow", "Off", 0, QApplication::UnicodeUTF8));
        actionLogout->setText(QApplication::translate("MainWindow", "Logout", 0, QApplication::UnicodeUTF8));
        actionAcute_Care->setText(QApplication::translate("MainWindow", "Acute Care", 0, QApplication::UnicodeUTF8));
        actionComplex_Continuing_Care->setText(QApplication::translate("MainWindow", "Complex Continuing Care", 0, QApplication::UnicodeUTF8));
        actionLong_Term_Care->setText(QApplication::translate("MainWindow", "Long Term Care", 0, QApplication::UnicodeUTF8));
        map->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Zoom In", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "Zoom Out", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "PushButton", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("MainWindow", "Acute care", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("MainWindow", "Complex continuing", 0, QApplication::UnicodeUTF8));
        checkBox_4->setText(QApplication::translate("MainWindow", "Long term care", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "View", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "All", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Hospital", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Nursing Home", 0, QApplication::UnicodeUTF8)
        );
        pushButton_5->setText(QApplication::translate("MainWindow", "Open Facility", 0, QApplication::UnicodeUTF8));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Eastern Counties", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "North Lanark", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Ottawa Centre", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Ottawa East", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Ottawa West", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Renfrew County", 0, QApplication::UnicodeUTF8)
        );
        pushButton_4->setText(QApplication::translate("MainWindow", "Waiting List Facility", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuControl_Panel->setTitle(QApplication::translate("MainWindow", "Control Panel", 0, QApplication::UnicodeUTF8));
        menuSearch->setTitle(QApplication::translate("MainWindow", "Search", 0, QApplication::UnicodeUTF8));
        menuAvailable_Beds->setTitle(QApplication::translate("MainWindow", "Available Beds", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("MainWindow", "View", 0, QApplication::UnicodeUTF8));
        menuFacility->setTitle(QApplication::translate("MainWindow", "Facility", 0, QApplication::UnicodeUTF8));
        menuZoom->setTitle(QApplication::translate("MainWindow", "Zoom", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

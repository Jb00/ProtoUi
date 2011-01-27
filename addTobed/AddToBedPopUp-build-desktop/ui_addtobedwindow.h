/********************************************************************************
** Form generated from reading UI file 'addtobedwindow.ui'
**
** Created: Tue Jan 25 21:16:59 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTOBEDWINDOW_H
#define UI_ADDTOBEDWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddToBedWindow
{
public:
    QWidget *centralWidget;
    QListView *listView;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QMenu *menuQweqw;

    void setupUi(QMainWindow *AddToBedWindow)
    {
        if (AddToBedWindow->objectName().isEmpty())
            AddToBedWindow->setObjectName(QString::fromUtf8("AddToBedWindow"));
        AddToBedWindow->resize(535, 325);
        centralWidget = new QWidget(AddToBedWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        listView = new QListView(centralWidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(10, 40, 511, 181));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 10, 81, 21));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(130, 250, 272, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        AddToBedWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(AddToBedWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 535, 25));
        menuQweqw = new QMenu(menuBar);
        menuQweqw->setObjectName(QString::fromUtf8("menuQweqw"));
        AddToBedWindow->setMenuBar(menuBar);

        menuBar->addAction(menuQweqw->menuAction());

        retranslateUi(AddToBedWindow);

        QMetaObject::connectSlotsByName(AddToBedWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AddToBedWindow)
    {
        AddToBedWindow->setWindowTitle(QApplication::translate("AddToBedWindow", "AddToBedWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AddToBedWindow", "Patient List", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("AddToBedWindow", "Confirm", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("AddToBedWindow", "Cancel", 0, QApplication::UnicodeUTF8));
        menuQweqw->setTitle(QApplication::translate("AddToBedWindow", "qweqw", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddToBedWindow: public Ui_AddToBedWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTOBEDWINDOW_H

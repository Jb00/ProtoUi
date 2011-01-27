/********************************************************************************
** Form generated from reading UI file 'waitinglistwindow.ui'
**
** Created: Sun Jan 23 21:04:45 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAITINGLISTWINDOW_H
#define UI_WAITINGLISTWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WaitingListWindow
{
public:
    QWidget *centralWidget;
    QFrame *waitingFrame;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPlainTextEdit *plainTextEdit_2;
    QPlainTextEdit *plainTextEdit_3;
    QPlainTextEdit *plainTextEdit_4;
    QPlainTextEdit *plainTextEdit_5;
    QPlainTextEdit *plainTextEdit_7;
    QPlainTextEdit *plainTextEdit_6;
    QPushButton *btnSearch;
    QPushButton *btnAddPatient;
    QLabel *label;
    QListView *listView;
    QLabel *label_6;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *WaitingListWindow)
    {
        if (WaitingListWindow->objectName().isEmpty())
            WaitingListWindow->setObjectName(QString::fromUtf8("WaitingListWindow"));
        WaitingListWindow->resize(532, 415);
        centralWidget = new QWidget(WaitingListWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        waitingFrame = new QFrame(centralWidget);
        waitingFrame->setObjectName(QString::fromUtf8("waitingFrame"));
        waitingFrame->setGeometry(QRect(10, 30, 511, 171));
        waitingFrame->setFrameShape(QFrame::StyledPanel);
        waitingFrame->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(waitingFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(21, 21, 75, 17));
        label_3 = new QLabel(waitingFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 50, 73, 17));
        label_4 = new QLabel(waitingFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 80, 187, 17));
        label_5 = new QLabel(waitingFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 110, 67, 17));
        plainTextEdit_2 = new QPlainTextEdit(waitingFrame);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(220, 50, 281, 21));
        plainTextEdit_3 = new QPlainTextEdit(waitingFrame);
        plainTextEdit_3->setObjectName(QString::fromUtf8("plainTextEdit_3"));
        plainTextEdit_3->setGeometry(QRect(220, 80, 81, 21));
        plainTextEdit_4 = new QPlainTextEdit(waitingFrame);
        plainTextEdit_4->setObjectName(QString::fromUtf8("plainTextEdit_4"));
        plainTextEdit_4->setGeometry(QRect(220, 110, 281, 21));
        plainTextEdit_5 = new QPlainTextEdit(waitingFrame);
        plainTextEdit_5->setObjectName(QString::fromUtf8("plainTextEdit_5"));
        plainTextEdit_5->setGeometry(QRect(220, 20, 281, 21));
        plainTextEdit_7 = new QPlainTextEdit(waitingFrame);
        plainTextEdit_7->setObjectName(QString::fromUtf8("plainTextEdit_7"));
        plainTextEdit_7->setGeometry(QRect(420, 80, 81, 21));
        plainTextEdit_6 = new QPlainTextEdit(waitingFrame);
        plainTextEdit_6->setObjectName(QString::fromUtf8("plainTextEdit_6"));
        plainTextEdit_6->setGeometry(QRect(320, 80, 81, 21));
        btnSearch = new QPushButton(waitingFrame);
        btnSearch->setObjectName(QString::fromUtf8("btnSearch"));
        btnSearch->setGeometry(QRect(20, 140, 98, 27));
        btnAddPatient = new QPushButton(waitingFrame);
        btnAddPatient->setObjectName(QString::fromUtf8("btnAddPatient"));
        btnAddPatient->setGeometry(QRect(390, 140, 98, 27));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 10, 51, 21));
        listView = new QListView(centralWidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(10, 240, 511, 141));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(240, 210, 51, 17));
        WaitingListWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(WaitingListWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 532, 25));
        WaitingListWindow->setMenuBar(menuBar);

        retranslateUi(WaitingListWindow);

        QMetaObject::connectSlotsByName(WaitingListWindow);
    } // setupUi

    void retranslateUi(QMainWindow *WaitingListWindow)
    {
        WaitingListWindow->setWindowTitle(QApplication::translate("WaitingListWindow", "WaitingListWindow", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("WaitingListWindow", "First Name", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("WaitingListWindow", "Last Name", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("WaitingListWindow", "Date Of Birth (dd/mm/yyyy)", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("WaitingListWindow", "Patient ID", 0, QApplication::UnicodeUTF8));
        btnSearch->setText(QApplication::translate("WaitingListWindow", "Search", 0, QApplication::UnicodeUTF8));
        btnAddPatient->setText(QApplication::translate("WaitingListWindow", "Add Patient", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("WaitingListWindow", "Search", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("WaitingListWindow", "Results", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WaitingListWindow: public Ui_WaitingListWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAITINGLISTWINDOW_H

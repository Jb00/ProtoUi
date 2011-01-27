/********************************************************************************
** Form generated from reading UI file 'patientwindow.ui'
**
** Created: Sun Jan 23 21:21:58 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTWINDOW_H
#define UI_PATIENTWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QScrollArea>
#include <QtGui/QScrollBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PatientWindow
{
public:
    QWidget *centralWidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QScrollBar *verticalScrollBar;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;
    QTextBrowser *textBrowser_4;
    QTextBrowser *textBrowser_5;
    QTextBrowser *textBrowser_6;
    QTextBrowser *textBrowser_7;
    QTextBrowser *textBrowser_15;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *PatientWindow)
    {
        if (PatientWindow->objectName().isEmpty())
            PatientWindow->setObjectName(QString::fromUtf8("PatientWindow"));
        PatientWindow->resize(537, 369);
        centralWidget = new QWidget(PatientWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(9, 39, 521, 281));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 519, 279));
        verticalScrollBar = new QScrollBar(scrollAreaWidgetContents);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(500, 0, 21, 281));
        verticalScrollBar->setOrientation(Qt::Vertical);
        textBrowser = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(230, 20, 256, 21));
        textBrowser_2 = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(230, 50, 256, 21));
        textBrowser_3 = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(230, 80, 256, 21));
        textBrowser_4 = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(230, 110, 256, 21));
        textBrowser_5 = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser_5->setObjectName(QString::fromUtf8("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(230, 140, 256, 21));
        textBrowser_6 = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser_6->setObjectName(QString::fromUtf8("textBrowser_6"));
        textBrowser_6->setGeometry(QRect(230, 170, 256, 21));
        textBrowser_7 = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser_7->setObjectName(QString::fromUtf8("textBrowser_7"));
        textBrowser_7->setGeometry(QRect(230, 200, 256, 21));
        textBrowser_15 = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser_15->setObjectName(QString::fromUtf8("textBrowser_15"));
        textBrowser_15->setGeometry(QRect(230, 230, 256, 21));
        widget = new QWidget(scrollAreaWidgetContents);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 187, 231));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout->addWidget(label_8);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout->addWidget(label_9);

        scrollArea->setWidget(scrollAreaWidgetContents);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 10, 141, 20));
        PatientWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PatientWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 537, 25));
        PatientWindow->setMenuBar(menuBar);

        retranslateUi(PatientWindow);

        QMetaObject::connectSlotsByName(PatientWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PatientWindow)
    {
        PatientWindow->setWindowTitle(QApplication::translate("PatientWindow", "PatientWindow", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PatientWindow", "First Name", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("PatientWindow", "Last Name", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("PatientWindow", "Date of Birth (dd/mm/yyyy)", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("PatientWindow", "Date of Admission", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("PatientWindow", "Type of Care", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("PatientWindow", "Facility Name", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("PatientWindow", "Room Number", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("PatientWindow", "Address", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PatientWindow", "Patient Information", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PatientWindow: public Ui_PatientWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTWINDOW_H

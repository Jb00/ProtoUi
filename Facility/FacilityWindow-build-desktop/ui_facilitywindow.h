/********************************************************************************
** Form generated from reading UI file 'facilitywindow.ui'
**
** Created: Wed Jan 26 19:56:18 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACILITYWINDOW_H
#define UI_FACILITYWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QScrollArea>
#include <QtGui/QScrollBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FacilityWindow
{
public:
    QWidget *centralWidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QScrollBar *verticalScrollBar;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *lb_Name;
    QLabel *lb_Addr;
    QLabel *lb_Phone;
    QLabel *label;
    QFrame *frame;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QPushButton *btn_occ;
    QLabel *label_2;
    QPushButton *btn_avai;
    QLabel *label_4;
    QPushButton *btn_total;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_6;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *textAdd;
    QLineEdit *textAssign;

    void setupUi(QMainWindow *FacilityWindow)
    {
        if (FacilityWindow->objectName().isEmpty())
            FacilityWindow->setObjectName(QString::fromUtf8("FacilityWindow"));
        FacilityWindow->resize(655, 391);
        centralWidget = new QWidget(FacilityWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(0, 0, 271, 361));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 269, 359));
        verticalScrollBar = new QScrollBar(scrollAreaWidgetContents);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(250, 0, 21, 361));
        verticalScrollBar->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(scrollAreaWidgetContents);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 96, 100));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        lb_Name = new QLabel(layoutWidget);
        lb_Name->setObjectName(QString::fromUtf8("lb_Name"));
        QFont font;
        font.setFamily(QString::fromUtf8("AlArabiya"));
        font.setPointSize(22);
        lb_Name->setFont(font);

        verticalLayout_3->addWidget(lb_Name);

        lb_Addr = new QLabel(layoutWidget);
        lb_Addr->setObjectName(QString::fromUtf8("lb_Addr"));

        verticalLayout_3->addWidget(lb_Addr);

        lb_Phone = new QLabel(layoutWidget);
        lb_Phone->setObjectName(QString::fromUtf8("lb_Phone"));

        verticalLayout_3->addWidget(lb_Phone);

        scrollArea->setWidget(scrollAreaWidgetContents);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(420, 10, 81, 21));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(280, 30, 351, 131));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget1 = new QWidget(frame);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 138, 111));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget1);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setChecked(true);

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget1);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(layoutWidget1);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        verticalLayout->addWidget(radioButton_3);

        layoutWidget2 = new QWidget(frame);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(160, 20, 185, 95));
        gridLayout = new QGridLayout(layoutWidget2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        btn_occ = new QPushButton(layoutWidget2);
        btn_occ->setObjectName(QString::fromUtf8("btn_occ"));

        gridLayout->addWidget(btn_occ, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        btn_avai = new QPushButton(layoutWidget2);
        btn_avai->setObjectName(QString::fromUtf8("btn_avai"));

        gridLayout->addWidget(btn_avai, 1, 1, 1, 1);

        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        btn_total = new QPushButton(layoutWidget2);
        btn_total->setObjectName(QString::fromUtf8("btn_total"));

        gridLayout->addWidget(btn_total, 2, 1, 1, 1);

        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_6 = new QVBoxLayout(layoutWidget3);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        layoutWidget4 = new QWidget(centralWidget);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(360, 201, 156, 128));
        gridLayout_2 = new QGridLayout(layoutWidget4);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget4);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_2->addWidget(pushButton_2, 0, 0, 1, 1);

        pushButton = new QPushButton(layoutWidget4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_2->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_5 = new QPushButton(layoutWidget4);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout_2->addWidget(pushButton_5, 2, 0, 1, 1);

        pushButton_6 = new QPushButton(layoutWidget4);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout_2->addWidget(pushButton_6, 3, 0, 1, 1);

        layoutWidget5 = new QWidget(centralWidget);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(520, 230, 131, 62));
        verticalLayout_2 = new QVBoxLayout(layoutWidget5);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        textAdd = new QLineEdit(layoutWidget5);
        textAdd->setObjectName(QString::fromUtf8("textAdd"));

        verticalLayout_2->addWidget(textAdd);

        textAssign = new QLineEdit(layoutWidget5);
        textAssign->setObjectName(QString::fromUtf8("textAssign"));

        verticalLayout_2->addWidget(textAssign);

        FacilityWindow->setCentralWidget(centralWidget);

        retranslateUi(FacilityWindow);

        QMetaObject::connectSlotsByName(FacilityWindow);
    } // setupUi

    void retranslateUi(QMainWindow *FacilityWindow)
    {
        FacilityWindow->setWindowTitle(QApplication::translate("FacilityWindow", "FacilityWindow", 0, QApplication::UnicodeUTF8));
        lb_Name->setText(QApplication::translate("FacilityWindow", "Facility", 0, QApplication::UnicodeUTF8));
        lb_Addr->setText(QApplication::translate("FacilityWindow", "Address", 0, QApplication::UnicodeUTF8));
        lb_Phone->setText(QApplication::translate("FacilityWindow", "Phone number", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FacilityWindow", "Occupancy", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("FacilityWindow", "Acute Care", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("FacilityWindow", "Complex  Care", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("FacilityWindow", "Long Term Care", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("FacilityWindow", "Occupancy", 0, QApplication::UnicodeUTF8));
        btn_occ->setText(QApplication::translate("FacilityWindow", "0", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("FacilityWindow", "Available Beds", 0, QApplication::UnicodeUTF8));
        btn_avai->setText(QApplication::translate("FacilityWindow", "0", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("FacilityWindow", "Total Beds", 0, QApplication::UnicodeUTF8));
        btn_total->setText(QApplication::translate("FacilityWindow", "0", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("FacilityWindow", "Add to Waiting List", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("FacilityWindow", "Add/Remove Bed(s)", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("FacilityWindow", "Assign patient to bed", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("FacilityWindow", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FacilityWindow: public Ui_FacilityWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACILITYWINDOW_H

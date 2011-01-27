#include "facilitywindow.h"
#include "ui_facilitywindow.h"

FacilityWindow::FacilityWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FacilityWindow)
{
    ui->setupUi(this);
    connect(ui->btn_avai,SIGNAL(clicked()),this,SLOT(btn_avai_Click()));
    connect(ui->btn_occ,SIGNAL(clicked()),this,SLOT(btn_Occ_click()));
    connect(ui->btn_total,SIGNAL(clicked()),this,SLOT(btn_Total_click()));

}

FacilityWindow::~FacilityWindow()
{
    delete ui;
}

void FacilityWindow::btn_avai_Click()
{
    ui->btn_avai->setText("205/300");
}

void FacilityWindow::btn_Occ_click()
{
}

void FacilityWindow::btn_Total_click()
{

}





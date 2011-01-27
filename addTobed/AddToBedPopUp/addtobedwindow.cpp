#include "addtobedwindow.h"
#include "ui_addtobedwindow.h"

AddToBedWindow::AddToBedWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddToBedWindow)
{
    ui->setupUi(this);
}

AddToBedWindow::~AddToBedWindow()
{
    delete ui;
}

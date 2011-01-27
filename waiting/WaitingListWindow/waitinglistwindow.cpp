#include "waitinglistwindow.h"
#include "ui_waitinglistwindow.h"

WaitingListWindow::WaitingListWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WaitingListWindow)
{
    ui->setupUi(this);
}

WaitingListWindow::~WaitingListWindow()
{
    delete ui;
}

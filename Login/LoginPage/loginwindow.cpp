#include "loginwindow.h"
#include "ui_loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    connect(ui->btnCancel, SIGNAL(clicked()), this, SLOT(on_btnCancel_clicked()));

}

LoginWindow::~LoginWindow()
{
    delete ui;
}



void LoginWindow::on_btnCancel_clicked()
{
    ui->userText->clear();
    ui->pwordText->clear();
}

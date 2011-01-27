#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    displayMap();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::displayMap()
{
    QImage img("map.jpg");

    ui->map->setPixmap(QPixmap::fromImage(img));
}

#include "mapwindow.h"
#include "ui_mapwindow.h"

MapWindow::MapWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MapWindow)
{
    ui->setupUi(this);
    displayMap();
}

MapWindow::~MapWindow()
{
    delete ui;
}

void MapWindow::displayMap()
{
    QImage img("map.jpg");

    ui->label_img->setPixmap(QPixmap::fromImage(img));
}


#include <QtGui/QApplication>
#include "mapwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MapWindow w;
    w.show();

    return a.exec();
}

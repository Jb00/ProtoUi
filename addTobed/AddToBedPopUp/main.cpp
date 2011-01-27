#include <QtGui/QApplication>
#include "addtobedwindow.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AddToBedWindow w;
    w.show();

    return a.exec();
}

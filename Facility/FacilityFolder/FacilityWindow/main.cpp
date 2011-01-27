#include <QtGui/QApplication>
#include "facilitywindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FacilityWindow w;
    w.show();

    return a.exec();
}

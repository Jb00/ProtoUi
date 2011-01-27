#include <QtGui/QApplication>
#include "waitinglistwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WaitingListWindow w;
    w.show();

    return a.exec();
}

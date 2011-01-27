#ifndef WAITINGLISTWINDOW_H
#define WAITINGLISTWINDOW_H

#include <QMainWindow>

namespace Ui {
    class WaitingListWindow;
}

class WaitingListWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit WaitingListWindow(QWidget *parent = 0);
    ~WaitingListWindow();

private:
    Ui::WaitingListWindow *ui;
};

#endif // WAITINGLISTWINDOW_H

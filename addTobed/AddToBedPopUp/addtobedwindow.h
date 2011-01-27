#ifndef ADDTOBEDWINDOW_H
#define ADDTOBEDWINDOW_H

#include <QMainWindow>

namespace Ui {
    class AddToBedWindow;
}

class AddToBedWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddToBedWindow(QWidget *parent = 0);
    ~AddToBedWindow();

private:
    Ui::AddToBedWindow *ui;
};

#endif // ADDTOBEDWINDOW_H

#ifndef PATIENTWINDOW_H
#define PATIENTWINDOW_H

#include <QMainWindow>

namespace Ui {
    class PatientWindow;
}

class PatientWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PatientWindow(QWidget *parent = 0);
    ~PatientWindow();

private:
    Ui::PatientWindow *ui;
};

#endif // PATIENTWINDOW_H

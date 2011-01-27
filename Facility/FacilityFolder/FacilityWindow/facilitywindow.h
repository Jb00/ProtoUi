#ifndef FACILITYWINDOW_H
#define FACILITYWINDOW_H

#include <QMainWindow>

namespace Ui {
    class FacilityWindow;
}

class FacilityWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit FacilityWindow(QWidget *parent = 0);
    ~FacilityWindow();

private:
    Ui::FacilityWindow *ui;

private slots:
    void btn_Occ_click();
    void btn_Total_click();
    void btn_avai_Click();

};

#endif // FACILITYWINDOW_H

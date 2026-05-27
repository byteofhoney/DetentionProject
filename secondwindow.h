#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QMainWindow>
#include "thirdwindow.h"

namespace Ui {
class SecondWindow;
}

class SecondWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit SecondWindow(QWidget *parent = nullptr);
    ~SecondWindow();

private slots:
    void on_proceedButton_clicked();
    void on_cancelButton_clicked();

private:
    Ui::SecondWindow *ui;
    ThirdWindow *thirdWindow;
};

#endif // SECONDWINDOW_H

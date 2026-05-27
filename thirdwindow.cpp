#include "thirdwindow.h"
#include "ui_thirdwindow.h"
#include <QMessageBox>

ThirdWindow::ThirdWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ThirdWindow)
{
    ui->setupUi(this);
    setWindowTitle("Student Information");

    // Connect the submit button click signal to the slot
    connect(ui->submitButton, &QPushButton::clicked, this, &ThirdWindow::on_submitButton_clicked);

    // Connect the cancel button click signal to the slot
    connect(ui->cancelButton, &QPushButton::clicked, this, &ThirdWindow::on_cancelButton_clicked);
}

ThirdWindow::~ThirdWindow()
{
    delete ui;
}

void ThirdWindow::on_submitButton_clicked()
{
    // Show confirmation message box
    QMessageBox::information(this, "Confirmation", "Student information submitted successfully.");

    // Close the entire application
    QApplication::quit();
}

void ThirdWindow::on_cancelButton_clicked()
{
    // Close the third window
    this->close();
}

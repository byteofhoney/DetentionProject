#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secondwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    secondWindow(new SecondWindow(this))
{
    ui->setupUi(this);
    setWindowTitle("CORRECTIVE DISCIPLINARY MEASURES");

    // Set placeholder text for input fields
    ui->nameEdit->setPlaceholderText("Enter your Name");
    ui->cnicEdit->setPlaceholderText("Enter your CNIC");
    ui->emailEdit->setPlaceholderText("Enter your Email");

    // Set size policies for the line edits and button
    ui->nameEdit->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    ui->cnicEdit->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    ui->emailEdit->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    ui->positionComboBox->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    ui->loginButton->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);

    // Connect the login button click signal to the slot
    connect(ui->loginButton, &QPushButton::clicked, this, &MainWindow::on_loginButton_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loginButton_clicked()
{
    QString name = ui->nameEdit->text();
    QString cnic = ui->cnicEdit->text();
    QString email = ui->emailEdit->text();
    QString position = ui->positionComboBox->currentText();

    // Check if all required fields are filled
    if (name.isEmpty() || cnic.isEmpty() || email.isEmpty() || position.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please fill in all required fields.");
        return;
    }

    // Show the second window
    secondWindow->show();
}


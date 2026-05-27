#include "secondwindow.h"
#include "ui_secondwindow.h"
#include <QMessageBox>

SecondWindow::SecondWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SecondWindow),
    thirdWindow(new ThirdWindow(this))
{
    ui->setupUi(this);
    setWindowTitle("Detention Form");
    ui->textEdit->setPlaceholderText("This is for the teacher only. Enter details about the detention here.");

    // Connect the proceed button click signal to the slot
    connect(ui->proceedButton, &QPushButton::clicked, this, &SecondWindow::on_proceedButton_clicked);

    // Connect the cancel button click signal to the slot
    connect(ui->cancelButton, &QPushButton::clicked, this, &SecondWindow::on_cancelButton_clicked);
}

SecondWindow::~SecondWindow()
{
    delete ui;
}

void SecondWindow::on_proceedButton_clicked()
{
    QString offence = ui->offencesComboBox->currentText();
    QString punishment = ui->punishmentComboBox->currentText();

    // Check if all required fields are filled
    if (offence.isEmpty() || punishment.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please fill in all required fields.");
        return;
    }

    // Show the third dialog window
    thirdWindow->exec();
}

void SecondWindow::on_cancelButton_clicked()
{
    // Handle cancel button click event here
    // can close the second window
    this->close();
}


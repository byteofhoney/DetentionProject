/********************************************************************************
** Form generated from reading UI file 'detailswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAILSWINDOW_H
#define UI_DETAILSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_DetailsWindow
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *reasonLabel;
    QLineEdit *teacherNameLineEdit;
    QLineEdit *studentNameLineEdit;
    QLineEdit *studentRegNumberLineEdit;

    void setupUi(QDialog *DetailsWindow)
    {
        if (DetailsWindow->objectName().isEmpty())
            DetailsWindow->setObjectName("DetailsWindow");
        DetailsWindow->resize(400, 300);
        buttonBox = new QDialogButtonBox(DetailsWindow);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        reasonLabel = new QLabel(DetailsWindow);
        reasonLabel->setObjectName("reasonLabel");
        reasonLabel->setGeometry(QRect(150, 60, 131, 16));
        QFont font;
        font.setPointSize(13);
        reasonLabel->setFont(font);
        teacherNameLineEdit = new QLineEdit(DetailsWindow);
        teacherNameLineEdit->setObjectName("teacherNameLineEdit");
        teacherNameLineEdit->setGeometry(QRect(130, 110, 113, 20));
        studentNameLineEdit = new QLineEdit(DetailsWindow);
        studentNameLineEdit->setObjectName("studentNameLineEdit");
        studentNameLineEdit->setGeometry(QRect(130, 150, 113, 20));
        studentRegNumberLineEdit = new QLineEdit(DetailsWindow);
        studentRegNumberLineEdit->setObjectName("studentRegNumberLineEdit");
        studentRegNumberLineEdit->setGeometry(QRect(130, 190, 113, 20));

        retranslateUi(DetailsWindow);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DetailsWindow, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DetailsWindow, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DetailsWindow);
    } // setupUi

    void retranslateUi(QDialog *DetailsWindow)
    {
        DetailsWindow->setWindowTitle(QCoreApplication::translate("DetailsWindow", "Dialog", nullptr));
        reasonLabel->setText(QCoreApplication::translate("DetailsWindow", "reasonLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DetailsWindow: public Ui_DetailsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILSWINDOW_H

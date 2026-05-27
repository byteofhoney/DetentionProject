/********************************************************************************
** Form generated from reading UI file 'thirdwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THIRDWINDOW_H
#define UI_THIRDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ThirdWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLineEdit *studentNameEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *regNoEdit;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *emailEdit;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *departmentEdit;
    QGroupBox *groupBox;
    QPushButton *submitButton;
    QPushButton *cancelButton;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QDialog *ThirdWindow)
    {
        if (ThirdWindow->objectName().isEmpty())
            ThirdWindow->setObjectName("ThirdWindow");
        ThirdWindow->resize(720, 609);
        verticalLayout_2 = new QVBoxLayout(ThirdWindow);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(ThirdWindow);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777215, 63));
        QFont font;
        font.setFamilies({QString::fromUtf8("Simple Indust Outline")});
        font.setPointSize(17);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(ThirdWindow);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(501, 40));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Simple Indust Shaded")});
        font1.setPointSize(11);
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(ThirdWindow);
        label_3->setObjectName("label_3");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Simple Indust Outline")});
        font2.setPointSize(13);
        label_3->setFont(font2);

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        studentNameEdit = new QLineEdit(ThirdWindow);
        studentNameEdit->setObjectName("studentNameEdit");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Simple Indust Outline")});
        font3.setPointSize(10);
        studentNameEdit->setFont(font3);

        horizontalLayout_2->addWidget(studentNameEdit);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(ThirdWindow);
        label_4->setObjectName("label_4");
        label_4->setFont(font2);

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        regNoEdit = new QLineEdit(ThirdWindow);
        regNoEdit->setObjectName("regNoEdit");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(regNoEdit->sizePolicy().hasHeightForWidth());
        regNoEdit->setSizePolicy(sizePolicy);
        regNoEdit->setMinimumSize(QSize(0, 17));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Segoe Fluent Icons")});
        font4.setPointSize(11);
        regNoEdit->setFont(font4);

        horizontalLayout_3->addWidget(regNoEdit);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(ThirdWindow);
        label_5->setObjectName("label_5");
        label_5->setFont(font2);

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        emailEdit = new QLineEdit(ThirdWindow);
        emailEdit->setObjectName("emailEdit");
        emailEdit->setFont(font4);

        horizontalLayout_5->addWidget(emailEdit);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_6 = new QLabel(ThirdWindow);
        label_6->setObjectName("label_6");
        label_6->setFont(font2);

        horizontalLayout_4->addWidget(label_6);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        departmentEdit = new QLineEdit(ThirdWindow);
        departmentEdit->setObjectName("departmentEdit");
        departmentEdit->setFont(font3);

        horizontalLayout_4->addWidget(departmentEdit);


        verticalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(verticalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        groupBox = new QGroupBox(ThirdWindow);
        groupBox->setObjectName("groupBox");
        groupBox->setMaximumSize(QSize(1000, 110));
        QFont font5;
        font5.setBold(false);
        groupBox->setFont(font5);
        submitButton = new QPushButton(groupBox);
        submitButton->setObjectName("submitButton");
        submitButton->setGeometry(QRect(580, 30, 88, 32));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(submitButton->sizePolicy().hasHeightForWidth());
        submitButton->setSizePolicy(sizePolicy1);
        submitButton->setMaximumSize(QSize(88, 32));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Simple Indust Outline")});
        font6.setPointSize(13);
        font6.setBold(false);
        submitButton->setFont(font6);
        submitButton->setCursor(QCursor(Qt::CursorShape::BusyCursor));
        submitButton->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        submitButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1E90FF;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #4682B4;\n"
"}\n"
""));
        cancelButton = new QPushButton(groupBox);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(580, 70, 88, 32));
        sizePolicy1.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
        cancelButton->setSizePolicy(sizePolicy1);
        cancelButton->setMaximumSize(QSize(88, 32));
        cancelButton->setFont(font6);
        cancelButton->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        cancelButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF6347;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #FF4500;\n"
"}\n"
""));

        verticalLayout_2->addWidget(groupBox);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);


        retranslateUi(ThirdWindow);

        QMetaObject::connectSlotsByName(ThirdWindow);
    } // setupUi

    void retranslateUi(QDialog *ThirdWindow)
    {
        ThirdWindow->setWindowTitle(QCoreApplication::translate("ThirdWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ThirdWindow", "STUDENT'S INFO", nullptr));
        label_2->setText(QCoreApplication::translate("ThirdWindow", "Please fill up the following Enteries:", nullptr));
        label_3->setText(QCoreApplication::translate("ThirdWindow", " Student's Name:         ", nullptr));
        label_4->setText(QCoreApplication::translate("ThirdWindow", " Registration Number:", nullptr));
        label_5->setText(QCoreApplication::translate("ThirdWindow", " Student's Email:          ", nullptr));
        label_6->setText(QCoreApplication::translate("ThirdWindow", " Department:                ", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ThirdWindow", "FINAL SUBMISSION", nullptr));
        submitButton->setText(QCoreApplication::translate("ThirdWindow", "Submit", nullptr));
        cancelButton->setText(QCoreApplication::translate("ThirdWindow", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ThirdWindow: public Ui_ThirdWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRDWINDOW_H

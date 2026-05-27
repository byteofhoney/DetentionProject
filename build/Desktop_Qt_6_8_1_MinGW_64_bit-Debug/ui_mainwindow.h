/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_6;
    QLabel *label;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout_2;
    QFormLayout *formLayout;
    QLabel *nameLabel;
    QLineEdit *nameEdit;
    QLabel *cnicLabel;
    QLineEdit *cnicEdit;
    QLabel *emailLabel;
    QLineEdit *emailEdit;
    QLabel *positionLabel;
    QComboBox *positionComboBox;
    QPushButton *loginButton;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(759, 670);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_6);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMaximumSize(QSize(16777215, 72));
        QFont font;
        font.setFamilies({QString::fromUtf8("Simple Indust Outline")});
        font.setPointSize(19);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_7);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setFieldGrowthPolicy(QFormLayout::FieldGrowthPolicy::ExpandingFieldsGrow);
        formLayout_2->setContentsMargins(1, -1, -1, -1);
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        nameLabel = new QLabel(centralwidget);
        nameLabel->setObjectName("nameLabel");
        QFont font1;
        font1.setPointSize(13);
        nameLabel->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, nameLabel);

        nameEdit = new QLineEdit(centralwidget);
        nameEdit->setObjectName("nameEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(nameEdit->sizePolicy().hasHeightForWidth());
        nameEdit->setSizePolicy(sizePolicy1);
        nameEdit->setMaximumSize(QSize(7215, 30));
        nameEdit->setSizeIncrement(QSize(32, 28));
        QFont font2;
        font2.setPointSize(11);
        nameEdit->setFont(font2);
#if QT_CONFIG(tooltip)
        nameEdit->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        nameEdit->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
        nameEdit->setClearButtonEnabled(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, nameEdit);

        cnicLabel = new QLabel(centralwidget);
        cnicLabel->setObjectName("cnicLabel");
        cnicLabel->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, cnicLabel);

        cnicEdit = new QLineEdit(centralwidget);
        cnicEdit->setObjectName("cnicEdit");
        sizePolicy1.setHeightForWidth(cnicEdit->sizePolicy().hasHeightForWidth());
        cnicEdit->setSizePolicy(sizePolicy1);
        cnicEdit->setMaximumSize(QSize(16777215, 30));
        cnicEdit->setSizeIncrement(QSize(32, 28));
        cnicEdit->setFont(font2);
        cnicEdit->setInputMethodHints(Qt::InputMethodHint::ImhDigitsOnly);
        cnicEdit->setClearButtonEnabled(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, cnicEdit);

        emailLabel = new QLabel(centralwidget);
        emailLabel->setObjectName("emailLabel");
        emailLabel->setFont(font1);

        formLayout->setWidget(5, QFormLayout::LabelRole, emailLabel);

        emailEdit = new QLineEdit(centralwidget);
        emailEdit->setObjectName("emailEdit");
        sizePolicy1.setHeightForWidth(emailEdit->sizePolicy().hasHeightForWidth());
        emailEdit->setSizePolicy(sizePolicy1);
        emailEdit->setMaximumSize(QSize(16777215, 30));
        emailEdit->setSizeIncrement(QSize(32, 28));
        emailEdit->setFont(font2);
        emailEdit->setClearButtonEnabled(true);

        formLayout->setWidget(5, QFormLayout::FieldRole, emailEdit);

        positionLabel = new QLabel(centralwidget);
        positionLabel->setObjectName("positionLabel");
        positionLabel->setFont(font1);

        formLayout->setWidget(7, QFormLayout::LabelRole, positionLabel);

        positionComboBox = new QComboBox(centralwidget);
        positionComboBox->addItem(QString());
        positionComboBox->addItem(QString());
        positionComboBox->addItem(QString());
        positionComboBox->addItem(QString());
        positionComboBox->addItem(QString());
        positionComboBox->addItem(QString());
        positionComboBox->setObjectName("positionComboBox");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(positionComboBox->sizePolicy().hasHeightForWidth());
        positionComboBox->setSizePolicy(sizePolicy2);
        positionComboBox->setMaximumSize(QSize(16777215, 30));
        positionComboBox->setSizeIncrement(QSize(40, 28));
        QFont font3;
        font3.setPointSize(10);
        positionComboBox->setFont(font3);

        formLayout->setWidget(7, QFormLayout::FieldRole, positionComboBox);

        loginButton = new QPushButton(centralwidget);
        loginButton->setObjectName("loginButton");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Ignored);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(loginButton->sizePolicy().hasHeightForWidth());
        loginButton->setSizePolicy(sizePolicy3);
        loginButton->setMaximumSize(QSize(215, 50));
        loginButton->setSizeIncrement(QSize(0, 6));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        loginButton->setFont(font4);
        loginButton->setCursor(QCursor(Qt::CursorShape::WaitCursor));
        loginButton->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1E90FF;\n"
"    color: white;\n"
"    border-radius: 7px;\n"
"    padding: 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #4682B4;\n"
"}\n"
""));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::DocumentSend));
        loginButton->setIcon(icon);
        loginButton->setIconSize(QSize(10, 10));

        formLayout->setWidget(9, QFormLayout::FieldRole, loginButton);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy4);
        label_2->setMaximumSize(QSize(260, 35));
        label_2->setFont(font3);

        formLayout->setWidget(0, QFormLayout::SpanningRole, label_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        formLayout->setItem(2, QFormLayout::FieldRole, verticalSpacer);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        formLayout->setItem(4, QFormLayout::FieldRole, verticalSpacer_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        formLayout->setItem(6, QFormLayout::FieldRole, verticalSpacer_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        formLayout->setItem(8, QFormLayout::FieldRole, verticalSpacer_4);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        formLayout->setItem(10, QFormLayout::FieldRole, verticalSpacer_5);


        formLayout_2->setLayout(0, QFormLayout::FieldRole, formLayout);


        horizontalLayout->addLayout(formLayout_2);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");

        horizontalLayout->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 759, 18));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        loginButton->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "CORRECTIVE DISCIPLINARY MEASURES", nullptr));
        nameLabel->setText(QCoreApplication::translate("MainWindow", "   Enter your Name:       ", nullptr));
        cnicLabel->setText(QCoreApplication::translate("MainWindow", "   Enter your CNIC:         ", nullptr));
        emailLabel->setText(QCoreApplication::translate("MainWindow", "   Enter your Email:         ", nullptr));
        positionLabel->setText(QCoreApplication::translate("MainWindow", "   Select Your Position:   ", nullptr));
        positionComboBox->setItemText(0, QString());
        positionComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Permanent Teacher", nullptr));
        positionComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Visiting Teacher", nullptr));
        positionComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Supervisor", nullptr));
        positionComboBox->setItemText(4, QCoreApplication::translate("MainWindow", "Invigilator", nullptr));
        positionComboBox->setItemText(5, QCoreApplication::translate("MainWindow", "Course Instructor", nullptr));

        loginButton->setText(QCoreApplication::translate("MainWindow", "LOGIN", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "*Please provide your credentials in the fields. ", nullptr));
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

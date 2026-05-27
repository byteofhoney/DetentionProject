/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *Label_2;
    QComboBox *offencesComboBox;
    QSpacerItem *verticalSpacer_4;
    QLabel *Label;
    QComboBox *punishmentComboBox;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_4;
    QTextEdit *textEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *cancelButton;
    QPushButton *proceedButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SecondWindow)
    {
        if (SecondWindow->objectName().isEmpty())
            SecondWindow->setObjectName("SecondWindow");
        SecondWindow->resize(759, 616);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::SystemLockScreen));
        SecondWindow->setWindowIcon(icon);
        centralwidget = new QWidget(SecondWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setMaximumSize(QSize(800, 167));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell")});
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        label->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label->setAutoFillBackground(false);
        label->setTextFormat(Qt::TextFormat::RichText);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        Label_2 = new QLabel(centralwidget);
        Label_2->setObjectName("Label_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Simple Indust Outline")});
        font1.setPointSize(14);
        font1.setBold(true);
        Label_2->setFont(font1);
        Label_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout_3->addWidget(Label_2);

        offencesComboBox = new QComboBox(centralwidget);
        offencesComboBox->addItem(QString());
        offencesComboBox->addItem(QString());
        offencesComboBox->addItem(QString());
        offencesComboBox->addItem(QString());
        offencesComboBox->addItem(QString());
        offencesComboBox->addItem(QString());
        offencesComboBox->addItem(QString());
        offencesComboBox->addItem(QString());
        offencesComboBox->setObjectName("offencesComboBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(offencesComboBox->sizePolicy().hasHeightForWidth());
        offencesComboBox->setSizePolicy(sizePolicy);
        offencesComboBox->setMinimumSize(QSize(0, 38));
        offencesComboBox->setMaximumSize(QSize(16777215, 16777215));
        offencesComboBox->setSizeIncrement(QSize(0, 20));
        offencesComboBox->setBaseSize(QSize(0, 17));

        verticalLayout_3->addWidget(offencesComboBox);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_4);

        Label = new QLabel(centralwidget);
        Label->setObjectName("Label");
        Label->setFont(font1);

        verticalLayout_3->addWidget(Label);


        verticalLayout->addLayout(verticalLayout_3);

        punishmentComboBox = new QComboBox(centralwidget);
        punishmentComboBox->addItem(QString());
        punishmentComboBox->addItem(QString());
        punishmentComboBox->addItem(QString());
        punishmentComboBox->addItem(QString());
        punishmentComboBox->addItem(QString());
        punishmentComboBox->addItem(QString());
        punishmentComboBox->addItem(QString());
        punishmentComboBox->addItem(QString());
        punishmentComboBox->setObjectName("punishmentComboBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(punishmentComboBox->sizePolicy().hasHeightForWidth());
        punishmentComboBox->setSizePolicy(sizePolicy1);
        punishmentComboBox->setMinimumSize(QSize(0, 38));
        punishmentComboBox->setSizeIncrement(QSize(8, 20));
        punishmentComboBox->setBaseSize(QSize(0, 7));

        verticalLayout->addWidget(punishmentComboBox);

        verticalSpacer_2 = new QSpacerItem(29, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setMaximumSize(QSize(160, 40));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Simple Indust Shaded")});
        font2.setPointSize(14);
        font2.setBold(true);
        label_4->setFont(font2);

        verticalLayout->addWidget(label_4);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    background-color: lightgrey;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"}"));

        verticalLayout->addWidget(textEdit);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        cancelButton = new QPushButton(centralwidget);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setMinimumSize(QSize(6, 39));
        cancelButton->setMaximumSize(QSize(125, 38));
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

        horizontalLayout->addWidget(cancelButton);

        proceedButton = new QPushButton(centralwidget);
        proceedButton->setObjectName("proceedButton");
        proceedButton->setMinimumSize(QSize(6, 39));
        proceedButton->setMaximumSize(QSize(125, 69));
        proceedButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1E90FF;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #4682B4;\n"
"}\n"
""));

        horizontalLayout->addWidget(proceedButton);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        SecondWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SecondWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 759, 18));
        SecondWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(SecondWindow);
        statusbar->setObjectName("statusbar");
        SecondWindow->setStatusBar(statusbar);

        retranslateUi(SecondWindow);

        QMetaObject::connectSlotsByName(SecondWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SecondWindow)
    {
        SecondWindow->setWindowTitle(QCoreApplication::translate("SecondWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("SecondWindow", "                                                                                                             DETENTION MANAGEMENT", nullptr));
        Label_2->setText(QCoreApplication::translate("SecondWindow", "SELECT  OFFENCE:", nullptr));
        offencesComboBox->setItemText(0, QString());
        offencesComboBox->setItemText(1, QCoreApplication::translate("SecondWindow", "Cheating", nullptr));
        offencesComboBox->setItemText(2, QCoreApplication::translate("SecondWindow", "Bullying", nullptr));
        offencesComboBox->setItemText(3, QCoreApplication::translate("SecondWindow", "Disrespect to Teachers", nullptr));
        offencesComboBox->setItemText(4, QCoreApplication::translate("SecondWindow", "Vandalism", nullptr));
        offencesComboBox->setItemText(5, QCoreApplication::translate("SecondWindow", "Dress Code Violation", nullptr));
        offencesComboBox->setItemText(6, QCoreApplication::translate("SecondWindow", "Attendance Shortage", nullptr));
        offencesComboBox->setItemText(7, QCoreApplication::translate("SecondWindow", "Disruptive Behavior in Class", nullptr));

        Label->setText(QCoreApplication::translate("SecondWindow", "SELECT PUNISHMENT:", nullptr));
        punishmentComboBox->setItemText(0, QString());
        punishmentComboBox->setItemText(1, QCoreApplication::translate("SecondWindow", "Counseling", nullptr));
        punishmentComboBox->setItemText(2, QCoreApplication::translate("SecondWindow", "Financial Penalty", nullptr));
        punishmentComboBox->setItemText(3, QCoreApplication::translate("SecondWindow", "Suspension Days/Week/Months", nullptr));
        punishmentComboBox->setItemText(4, QCoreApplication::translate("SecondWindow", "Mobile Confiscation", nullptr));
        punishmentComboBox->setItemText(5, QCoreApplication::translate("SecondWindow", "Restitution", nullptr));
        punishmentComboBox->setItemText(6, QCoreApplication::translate("SecondWindow", "Community Service", nullptr));
        punishmentComboBox->setItemText(7, QCoreApplication::translate("SecondWindow", "Expulsion", nullptr));

        label_4->setText(QCoreApplication::translate("SecondWindow", "NOTE:", nullptr));
        cancelButton->setText(QCoreApplication::translate("SecondWindow", "Cancel", nullptr));
        proceedButton->setText(QCoreApplication::translate("SecondWindow", "Proceed", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondWindow: public Ui_SecondWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'team_page.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEAM_PAGE_H
#define UI_TEAM_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Team_Page
{
public:
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QPushButton *pushButton_3;
    QLabel *label_5;
    QPushButton *pushButton_4;
    QLabel *label_6;
    QPushButton *pushButton_5;
    QLabel *label_7;
    QPushButton *pushButton_6;
    QLabel *label_8;
    QPushButton *pushButton_7;
    QLabel *label_9;
    QPushButton *pushButton_9;
    QLabel *label_10;
    QPushButton *pushButton_8;
    QLabel *label_11;
    QPushButton *pushButton_10;
    QPushButton *pushButton;

    void setupUi(QDialog *Team_Page)
    {
        if (Team_Page->objectName().isEmpty())
            Team_Page->setObjectName("Team_Page");
        Team_Page->resize(697, 566);
        label = new QLabel(Team_Page);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 30, 431, 91));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        formLayoutWidget = new QWidget(Team_Page);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(70, 110, 571, 331));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        pushButton_2 = new QPushButton(formLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        formLayout->setWidget(0, QFormLayout::FieldRole, pushButton_2);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        pushButton_3 = new QPushButton(formLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");

        formLayout->setWidget(1, QFormLayout::FieldRole, pushButton_3);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        pushButton_4 = new QPushButton(formLayoutWidget);
        pushButton_4->setObjectName("pushButton_4");

        formLayout->setWidget(2, QFormLayout::FieldRole, pushButton_4);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        pushButton_5 = new QPushButton(formLayoutWidget);
        pushButton_5->setObjectName("pushButton_5");

        formLayout->setWidget(3, QFormLayout::FieldRole, pushButton_5);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName("label_7");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_7);

        pushButton_6 = new QPushButton(formLayoutWidget);
        pushButton_6->setObjectName("pushButton_6");

        formLayout->setWidget(4, QFormLayout::FieldRole, pushButton_6);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName("label_8");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_8);

        pushButton_7 = new QPushButton(formLayoutWidget);
        pushButton_7->setObjectName("pushButton_7");

        formLayout->setWidget(5, QFormLayout::FieldRole, pushButton_7);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName("label_9");

        formLayout->setWidget(6, QFormLayout::LabelRole, label_9);

        pushButton_9 = new QPushButton(formLayoutWidget);
        pushButton_9->setObjectName("pushButton_9");

        formLayout->setWidget(6, QFormLayout::FieldRole, pushButton_9);

        label_10 = new QLabel(formLayoutWidget);
        label_10->setObjectName("label_10");

        formLayout->setWidget(7, QFormLayout::LabelRole, label_10);

        pushButton_8 = new QPushButton(formLayoutWidget);
        pushButton_8->setObjectName("pushButton_8");

        formLayout->setWidget(7, QFormLayout::FieldRole, pushButton_8);

        label_11 = new QLabel(formLayoutWidget);
        label_11->setObjectName("label_11");

        formLayout->setWidget(8, QFormLayout::LabelRole, label_11);

        pushButton_10 = new QPushButton(formLayoutWidget);
        pushButton_10->setObjectName("pushButton_10");

        formLayout->setWidget(8, QFormLayout::FieldRole, pushButton_10);

        pushButton = new QPushButton(Team_Page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 470, 83, 29));

        retranslateUi(Team_Page);

        QMetaObject::connectSlotsByName(Team_Page);
    } // setupUi

    void retranslateUi(QDialog *Team_Page)
    {
        Team_Page->setWindowTitle(QCoreApplication::translate("Team_Page", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Team_Page", "Team Management", nullptr));
        label_3->setText(QCoreApplication::translate("Team_Page", "Create an Team in Organization :", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Team_Page", "Create", nullptr));
        label_4->setText(QCoreApplication::translate("Team_Page", "Add members to the team : ", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Team_Page", "Add", nullptr));
        label_5->setText(QCoreApplication::translate("Team_Page", "remove the member : ", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Team_Page", "Delete People", nullptr));
        label_6->setText(QCoreApplication::translate("Team_Page", "Edit the Team : ", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Team_Page", "Edit", nullptr));
        label_7->setText(QCoreApplication::translate("Team_Page", "remove the team : ", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Team_Page", "Delete team", nullptr));
        label_8->setText(QCoreApplication::translate("Team_Page", "change the role of people in the team : ", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Team_Page", "Change", nullptr));
        label_9->setText(QCoreApplication::translate("Team_Page", "view the teams in an organization : ", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Team_Page", "View", nullptr));
        label_10->setText(QCoreApplication::translate("Team_Page", "Filter : ", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Team_Page", "Filter", nullptr));
        label_11->setText(QCoreApplication::translate("Team_Page", "sorting the teams that have joined : ", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Team_Page", "Sort", nullptr));
        pushButton->setText(QCoreApplication::translate("Team_Page", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Team_Page: public Ui_Team_Page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEAM_PAGE_H

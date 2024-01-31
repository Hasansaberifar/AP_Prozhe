/********************************************************************************
** Form generated from reading UI file 'project_page.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECT_PAGE_H
#define UI_PROJECT_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Project_Page
{
public:
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;

    void setupUi(QDialog *Project_Page)
    {
        if (Project_Page->objectName().isEmpty())
            Project_Page->setObjectName("Project_Page");
        Project_Page->resize(722, 519);
        label = new QLabel(Project_Page);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 30, 361, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font.setPointSize(17);
        font.setBold(true);
        label->setFont(font);
        formLayoutWidget = new QWidget(Project_Page);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(160, 100, 361, 331));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");

        formLayout->setWidget(6, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName("label_7");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_7);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName("label_8");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_8);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName("label_9");

        formLayout->setWidget(8, QFormLayout::LabelRole, label_9);

        label_10 = new QLabel(formLayoutWidget);
        label_10->setObjectName("label_10");

        formLayout->setWidget(7, QFormLayout::LabelRole, label_10);

        pushButton = new QPushButton(formLayoutWidget);
        pushButton->setObjectName("pushButton");

        formLayout->setWidget(0, QFormLayout::FieldRole, pushButton);

        pushButton_2 = new QPushButton(formLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        formLayout->setWidget(1, QFormLayout::FieldRole, pushButton_2);

        pushButton_3 = new QPushButton(formLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");

        formLayout->setWidget(2, QFormLayout::FieldRole, pushButton_3);

        pushButton_4 = new QPushButton(formLayoutWidget);
        pushButton_4->setObjectName("pushButton_4");

        formLayout->setWidget(3, QFormLayout::FieldRole, pushButton_4);

        pushButton_5 = new QPushButton(formLayoutWidget);
        pushButton_5->setObjectName("pushButton_5");

        formLayout->setWidget(4, QFormLayout::FieldRole, pushButton_5);

        pushButton_6 = new QPushButton(formLayoutWidget);
        pushButton_6->setObjectName("pushButton_6");

        formLayout->setWidget(5, QFormLayout::FieldRole, pushButton_6);

        pushButton_7 = new QPushButton(formLayoutWidget);
        pushButton_7->setObjectName("pushButton_7");

        formLayout->setWidget(6, QFormLayout::FieldRole, pushButton_7);

        pushButton_8 = new QPushButton(formLayoutWidget);
        pushButton_8->setObjectName("pushButton_8");

        formLayout->setWidget(7, QFormLayout::FieldRole, pushButton_8);

        pushButton_9 = new QPushButton(formLayoutWidget);
        pushButton_9->setObjectName("pushButton_9");

        formLayout->setWidget(8, QFormLayout::FieldRole, pushButton_9);

        pushButton_10 = new QPushButton(Project_Page);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(40, 470, 71, 29));

        retranslateUi(Project_Page);

        QMetaObject::connectSlotsByName(Project_Page);
    } // setupUi

    void retranslateUi(QDialog *Project_Page)
    {
        Project_Page->setWindowTitle(QCoreApplication::translate("Project_Page", "Dialog", nullptr));
#if QT_CONFIG(tooltip)
        Project_Page->setToolTip(QCoreApplication::translate("Project_Page", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("Project_Page", "Project Page", nullptr));
        label_2->setText(QCoreApplication::translate("Project_Page", "Create a New Project : ", nullptr));
        label_3->setText(QCoreApplication::translate("Project_Page", "Add member : ", nullptr));
        label_4->setText(QCoreApplication::translate("Project_Page", "remove member : ", nullptr));
        label_5->setText(QCoreApplication::translate("Project_Page", "edit project : ", nullptr));
        label_6->setText(QCoreApplication::translate("Project_Page", "view member projects : ", nullptr));
        label_7->setText(QCoreApplication::translate("Project_Page", "delete project : ", nullptr));
        label_8->setText(QCoreApplication::translate("Project_Page", "change project status :", nullptr));
        label_9->setText(QCoreApplication::translate("Project_Page", "Sort :", nullptr));
        label_10->setText(QCoreApplication::translate("Project_Page", "Filter : ", nullptr));
        pushButton->setText(QCoreApplication::translate("Project_Page", "Create", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Project_Page", "Add", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Project_Page", "Remove", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Project_Page", "Edit", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Project_Page", "Delete", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Project_Page", "Change", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Project_Page", "View", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Project_Page", "Filter", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Project_Page", "Sort", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Project_Page", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Project_Page: public Ui_Project_Page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECT_PAGE_H

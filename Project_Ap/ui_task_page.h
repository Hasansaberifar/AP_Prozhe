/********************************************************************************
** Form generated from reading UI file 'task_page.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK_PAGE_H
#define UI_TASK_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Task_Page
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
    QLabel *label_11;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton;

    void setupUi(QDialog *Task_Page)
    {
        if (Task_Page->objectName().isEmpty())
            Task_Page->setObjectName("Task_Page");
        Task_Page->resize(685, 560);
        label = new QLabel(Task_Page);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 20, 231, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font.setPointSize(17);
        font.setBold(true);
        label->setFont(font);
        formLayoutWidget = new QWidget(Task_Page);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(160, 90, 351, 361));
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

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName("label_7");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName("label_8");

        formLayout->setWidget(6, QFormLayout::LabelRole, label_8);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName("label_9");

        formLayout->setWidget(7, QFormLayout::LabelRole, label_9);

        label_10 = new QLabel(formLayoutWidget);
        label_10->setObjectName("label_10");

        formLayout->setWidget(9, QFormLayout::LabelRole, label_10);

        label_11 = new QLabel(formLayoutWidget);
        label_11->setObjectName("label_11");

        formLayout->setWidget(8, QFormLayout::LabelRole, label_11);

        pushButton_2 = new QPushButton(formLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        formLayout->setWidget(0, QFormLayout::FieldRole, pushButton_2);

        pushButton_3 = new QPushButton(formLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");

        formLayout->setWidget(1, QFormLayout::FieldRole, pushButton_3);

        pushButton_4 = new QPushButton(formLayoutWidget);
        pushButton_4->setObjectName("pushButton_4");

        formLayout->setWidget(2, QFormLayout::FieldRole, pushButton_4);

        pushButton_5 = new QPushButton(formLayoutWidget);
        pushButton_5->setObjectName("pushButton_5");

        formLayout->setWidget(3, QFormLayout::FieldRole, pushButton_5);

        pushButton_6 = new QPushButton(formLayoutWidget);
        pushButton_6->setObjectName("pushButton_6");

        formLayout->setWidget(4, QFormLayout::FieldRole, pushButton_6);

        pushButton_7 = new QPushButton(formLayoutWidget);
        pushButton_7->setObjectName("pushButton_7");

        formLayout->setWidget(5, QFormLayout::FieldRole, pushButton_7);

        pushButton_8 = new QPushButton(formLayoutWidget);
        pushButton_8->setObjectName("pushButton_8");

        formLayout->setWidget(6, QFormLayout::FieldRole, pushButton_8);

        pushButton_9 = new QPushButton(formLayoutWidget);
        pushButton_9->setObjectName("pushButton_9");

        formLayout->setWidget(7, QFormLayout::FieldRole, pushButton_9);

        pushButton_10 = new QPushButton(formLayoutWidget);
        pushButton_10->setObjectName("pushButton_10");

        formLayout->setWidget(8, QFormLayout::FieldRole, pushButton_10);

        pushButton_11 = new QPushButton(formLayoutWidget);
        pushButton_11->setObjectName("pushButton_11");

        formLayout->setWidget(9, QFormLayout::FieldRole, pushButton_11);

        pushButton = new QPushButton(Task_Page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 510, 71, 29));

        retranslateUi(Task_Page);

        QMetaObject::connectSlotsByName(Task_Page);
    } // setupUi

    void retranslateUi(QDialog *Task_Page)
    {
        Task_Page->setWindowTitle(QCoreApplication::translate("Task_Page", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Task_Page", "Task Page", nullptr));
        label_2->setText(QCoreApplication::translate("Task_Page", "Create a new Task :", nullptr));
        label_3->setText(QCoreApplication::translate("Task_Page", "Edit a Task : ", nullptr));
        label_4->setText(QCoreApplication::translate("Task_Page", "Archive a Task :", nullptr));
        label_5->setText(QCoreApplication::translate("Task_Page", "Unarchive a Task : ", nullptr));
        label_6->setText(QCoreApplication::translate("Task_Page", "Delete a Task : ", nullptr));
        label_7->setText(QCoreApplication::translate("Task_Page", "Assign a task to a project :", nullptr));
        label_8->setText(QCoreApplication::translate("Task_Page", "Assign a task to the team : ", nullptr));
        label_9->setText(QCoreApplication::translate("Task_Page", "Assign a task to a person: ", nullptr));
        label_10->setText(QCoreApplication::translate("Task_Page", "Set priority : ", nullptr));
        label_11->setText(QCoreApplication::translate("Task_Page", "Set the due date : ", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Task_Page", "Create", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Task_Page", "Edit", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Task_Page", "Archive", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Task_Page", "UnArchive", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Task_Page", "Delete", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Task_Page", "Do", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Task_Page", "Do", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Task_Page", "Do", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Task_Page", "Set", nullptr));
        pushButton_11->setText(QCoreApplication::translate("Task_Page", "Set", nullptr));
        pushButton->setText(QCoreApplication::translate("Task_Page", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Task_Page: public Ui_Task_Page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK_PAGE_H

/********************************************************************************
** Form generated from reading UI file 'creattask.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATTASK_H
#define UI_CREATTASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreatTask
{
public:
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *TaskName;
    QLineEdit *TaskTitle;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *CreatTask)
    {
        if (CreatTask->objectName().isEmpty())
            CreatTask->setObjectName("CreatTask");
        CreatTask->resize(692, 238);
        label = new QLabel(CreatTask);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 20, 271, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font.setPointSize(17);
        font.setBold(true);
        label->setFont(font);
        formLayoutWidget = new QWidget(CreatTask);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(160, 70, 391, 71));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        TaskName = new QLineEdit(formLayoutWidget);
        TaskName->setObjectName("TaskName");

        formLayout->setWidget(0, QFormLayout::FieldRole, TaskName);

        TaskTitle = new QLineEdit(formLayoutWidget);
        TaskTitle->setObjectName("TaskTitle");

        formLayout->setWidget(1, QFormLayout::FieldRole, TaskTitle);

        pushButton = new QPushButton(CreatTask);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(460, 150, 83, 29));
        pushButton_2 = new QPushButton(CreatTask);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 190, 61, 29));

        retranslateUi(CreatTask);

        QMetaObject::connectSlotsByName(CreatTask);
    } // setupUi

    void retranslateUi(QDialog *CreatTask)
    {
        CreatTask->setWindowTitle(QCoreApplication::translate("CreatTask", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("CreatTask", "Create A Task", nullptr));
        label_2->setText(QCoreApplication::translate("CreatTask", "Task Name : ", nullptr));
        label_3->setText(QCoreApplication::translate("CreatTask", "Task Title :", nullptr));
        pushButton->setText(QCoreApplication::translate("CreatTask", "Create", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CreatTask", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreatTask: public Ui_CreatTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATTASK_H

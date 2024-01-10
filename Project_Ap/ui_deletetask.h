/********************************************************************************
** Form generated from reading UI file 'deletetask.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETETASK_H
#define UI_DELETETASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeleteTask
{
public:
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *TaskNameForDelete;
    QLabel *label_3;
    QLineEdit *TaskTitleForDelete;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *DeleteTask)
    {
        if (DeleteTask->objectName().isEmpty())
            DeleteTask->setObjectName("DeleteTask");
        DeleteTask->resize(760, 266);
        label = new QLabel(DeleteTask);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 20, 301, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font.setPointSize(17);
        font.setBold(true);
        label->setFont(font);
        formLayoutWidget = new QWidget(DeleteTask);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(180, 70, 481, 71));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        TaskNameForDelete = new QLineEdit(formLayoutWidget);
        TaskNameForDelete->setObjectName("TaskNameForDelete");

        formLayout->setWidget(0, QFormLayout::FieldRole, TaskNameForDelete);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        TaskTitleForDelete = new QLineEdit(formLayoutWidget);
        TaskTitleForDelete->setObjectName("TaskTitleForDelete");

        formLayout->setWidget(1, QFormLayout::FieldRole, TaskTitleForDelete);

        pushButton = new QPushButton(DeleteTask);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(580, 150, 83, 29));
        pushButton_2 = new QPushButton(DeleteTask);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(40, 220, 71, 29));

        retranslateUi(DeleteTask);

        QMetaObject::connectSlotsByName(DeleteTask);
    } // setupUi

    void retranslateUi(QDialog *DeleteTask)
    {
        DeleteTask->setWindowTitle(QCoreApplication::translate("DeleteTask", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DeleteTask", "Delete Task", nullptr));
        label_2->setText(QCoreApplication::translate("DeleteTask", "Task Name : ", nullptr));
        label_3->setText(QCoreApplication::translate("DeleteTask", "Task Title : ", nullptr));
        pushButton->setText(QCoreApplication::translate("DeleteTask", "Delete", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DeleteTask", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteTask: public Ui_DeleteTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETETASK_H

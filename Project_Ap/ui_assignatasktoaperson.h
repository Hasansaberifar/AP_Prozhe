/********************************************************************************
** Form generated from reading UI file 'assignatasktoaperson.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASSIGNATASKTOAPERSON_H
#define UI_ASSIGNATASKTOAPERSON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AssignATaskToAPerson
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *PersonNameForAssign;
    QLineEdit *TaskNameForAssignPerson;
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *AssignATaskToAPerson)
    {
        if (AssignATaskToAPerson->objectName().isEmpty())
            AssignATaskToAPerson->setObjectName("AssignATaskToAPerson");
        AssignATaskToAPerson->resize(890, 300);
        formLayoutWidget = new QWidget(AssignATaskToAPerson);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(190, 80, 511, 71));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        PersonNameForAssign = new QLineEdit(formLayoutWidget);
        PersonNameForAssign->setObjectName("PersonNameForAssign");

        formLayout->setWidget(0, QFormLayout::FieldRole, PersonNameForAssign);

        TaskNameForAssignPerson = new QLineEdit(formLayoutWidget);
        TaskNameForAssignPerson->setObjectName("TaskNameForAssignPerson");

        formLayout->setWidget(1, QFormLayout::FieldRole, TaskNameForAssignPerson);

        pushButton_2 = new QPushButton(AssignATaskToAPerson);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(60, 200, 71, 29));
        label = new QLabel(AssignATaskToAPerson);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 30, 441, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font.setPointSize(17);
        font.setBold(true);
        label->setFont(font);
        pushButton = new QPushButton(AssignATaskToAPerson);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(620, 160, 83, 29));

        retranslateUi(AssignATaskToAPerson);

        QMetaObject::connectSlotsByName(AssignATaskToAPerson);
    } // setupUi

    void retranslateUi(QDialog *AssignATaskToAPerson)
    {
        AssignATaskToAPerson->setWindowTitle(QCoreApplication::translate("AssignATaskToAPerson", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("AssignATaskToAPerson", "Person Name : ", nullptr));
        label_3->setText(QCoreApplication::translate("AssignATaskToAPerson", "Task Name : ", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AssignATaskToAPerson", "Back", nullptr));
        label->setText(QCoreApplication::translate("AssignATaskToAPerson", "Assign A Task To A Person ", nullptr));
        pushButton->setText(QCoreApplication::translate("AssignATaskToAPerson", "Yes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AssignATaskToAPerson: public Ui_AssignATaskToAPerson {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASSIGNATASKTOAPERSON_H

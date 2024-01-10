/********************************************************************************
** Form generated from reading UI file 'assignatasktoaproject.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASSIGNATASKTOAPROJECT_H
#define UI_ASSIGNATASKTOAPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AssignATaskToAProject
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *ProjectNameForAssign;
    QLineEdit *TaskNameForAssignProject;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *AssignATaskToAProject)
    {
        if (AssignATaskToAProject->objectName().isEmpty())
            AssignATaskToAProject->setObjectName("AssignATaskToAProject");
        AssignATaskToAProject->resize(849, 247);
        formLayoutWidget = new QWidget(AssignATaskToAProject);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(180, 70, 511, 71));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        ProjectNameForAssign = new QLineEdit(formLayoutWidget);
        ProjectNameForAssign->setObjectName("ProjectNameForAssign");

        formLayout->setWidget(0, QFormLayout::FieldRole, ProjectNameForAssign);

        TaskNameForAssignProject = new QLineEdit(formLayoutWidget);
        TaskNameForAssignProject->setObjectName("TaskNameForAssignProject");

        formLayout->setWidget(1, QFormLayout::FieldRole, TaskNameForAssignProject);

        label = new QLabel(AssignATaskToAProject);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 20, 441, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font.setPointSize(17);
        font.setBold(true);
        label->setFont(font);
        pushButton = new QPushButton(AssignATaskToAProject);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(610, 150, 83, 29));
        pushButton_2 = new QPushButton(AssignATaskToAProject);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(50, 190, 71, 29));

        retranslateUi(AssignATaskToAProject);

        QMetaObject::connectSlotsByName(AssignATaskToAProject);
    } // setupUi

    void retranslateUi(QDialog *AssignATaskToAProject)
    {
        AssignATaskToAProject->setWindowTitle(QCoreApplication::translate("AssignATaskToAProject", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("AssignATaskToAProject", "Project Name : ", nullptr));
        label_3->setText(QCoreApplication::translate("AssignATaskToAProject", "Task Name : ", nullptr));
        label->setText(QCoreApplication::translate("AssignATaskToAProject", "Assign A Task To A Project ", nullptr));
        pushButton->setText(QCoreApplication::translate("AssignATaskToAProject", "Yes", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AssignATaskToAProject", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AssignATaskToAProject: public Ui_AssignATaskToAProject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASSIGNATASKTOAPROJECT_H

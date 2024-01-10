/********************************************************************************
** Form generated from reading UI file 'assignatasktotheteam.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASSIGNATASKTOTHETEAM_H
#define UI_ASSIGNATASKTOTHETEAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AssignATaskToTheTeam
{
public:
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *TeamNameForAssign;
    QLineEdit *TaskNameForAssignTeam;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *AssignATaskToTheTeam)
    {
        if (AssignATaskToTheTeam->objectName().isEmpty())
            AssignATaskToTheTeam->setObjectName("AssignATaskToTheTeam");
        AssignATaskToTheTeam->resize(788, 300);
        label = new QLabel(AssignATaskToTheTeam);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 30, 451, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font.setPointSize(17);
        font.setBold(true);
        label->setFont(font);
        formLayoutWidget = new QWidget(AssignATaskToTheTeam);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(160, 100, 511, 71));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        TeamNameForAssign = new QLineEdit(formLayoutWidget);
        TeamNameForAssign->setObjectName("TeamNameForAssign");

        formLayout->setWidget(0, QFormLayout::FieldRole, TeamNameForAssign);

        TaskNameForAssignTeam = new QLineEdit(formLayoutWidget);
        TaskNameForAssignTeam->setObjectName("TaskNameForAssignTeam");

        formLayout->setWidget(1, QFormLayout::FieldRole, TaskNameForAssignTeam);

        pushButton_2 = new QPushButton(AssignATaskToTheTeam);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 220, 71, 29));
        pushButton = new QPushButton(AssignATaskToTheTeam);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(590, 180, 83, 29));

        retranslateUi(AssignATaskToTheTeam);

        QMetaObject::connectSlotsByName(AssignATaskToTheTeam);
    } // setupUi

    void retranslateUi(QDialog *AssignATaskToTheTeam)
    {
        AssignATaskToTheTeam->setWindowTitle(QCoreApplication::translate("AssignATaskToTheTeam", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AssignATaskToTheTeam", "Assign A Task To The Team", nullptr));
        label_2->setText(QCoreApplication::translate("AssignATaskToTheTeam", "Team Name : ", nullptr));
        label_3->setText(QCoreApplication::translate("AssignATaskToTheTeam", "Task Name : ", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AssignATaskToTheTeam", "Back", nullptr));
        pushButton->setText(QCoreApplication::translate("AssignATaskToTheTeam", "Yes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AssignATaskToTheTeam: public Ui_AssignATaskToTheTeam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASSIGNATASKTOTHETEAM_H

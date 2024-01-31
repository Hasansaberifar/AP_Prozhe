/********************************************************************************
** Form generated from reading UI file 'addmembertoproject.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMEMBERTOPROJECT_H
#define UI_ADDMEMBERTOPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddMemberToProject
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *NamePersonForAddToProject;
    QLineEdit *RoleForAddMember;
    QLineEdit *Projectname;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;

    void setupUi(QDialog *AddMemberToProject)
    {
        if (AddMemberToProject->objectName().isEmpty())
            AddMemberToProject->setObjectName("AddMemberToProject");
        AddMemberToProject->resize(728, 281);
        formLayoutWidget = new QWidget(AddMemberToProject);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(160, 80, 411, 107));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        NamePersonForAddToProject = new QLineEdit(formLayoutWidget);
        NamePersonForAddToProject->setObjectName("NamePersonForAddToProject");

        formLayout->setWidget(1, QFormLayout::FieldRole, NamePersonForAddToProject);

        RoleForAddMember = new QLineEdit(formLayoutWidget);
        RoleForAddMember->setObjectName("RoleForAddMember");

        formLayout->setWidget(2, QFormLayout::FieldRole, RoleForAddMember);

        Projectname = new QLineEdit(formLayoutWidget);
        Projectname->setObjectName("Projectname");

        formLayout->setWidget(0, QFormLayout::FieldRole, Projectname);

        pushButton = new QPushButton(AddMemberToProject);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(490, 190, 83, 29));
        label = new QLabel(AddMemberToProject);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 30, 321, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font.setPointSize(17);
        font.setBold(true);
        label->setFont(font);
        pushButton_2 = new QPushButton(AddMemberToProject);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 230, 83, 29));

        retranslateUi(AddMemberToProject);

        QMetaObject::connectSlotsByName(AddMemberToProject);
    } // setupUi

    void retranslateUi(QDialog *AddMemberToProject)
    {
        AddMemberToProject->setWindowTitle(QCoreApplication::translate("AddMemberToProject", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("AddMemberToProject", "Person Name : ", nullptr));
        label_4->setText(QCoreApplication::translate("AddMemberToProject", "Project Name :", nullptr));
        label_3->setText(QCoreApplication::translate("AddMemberToProject", "Role : ", nullptr));
        pushButton->setText(QCoreApplication::translate("AddMemberToProject", "Add", nullptr));
        label->setText(QCoreApplication::translate("AddMemberToProject", "Add Member", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AddMemberToProject", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddMemberToProject: public Ui_AddMemberToProject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMEMBERTOPROJECT_H

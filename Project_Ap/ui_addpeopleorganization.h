/********************************************************************************
** Form generated from reading UI file 'addpeopleorganization.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPEOPLEORGANIZATION_H
#define UI_ADDPEOPLEORGANIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddPeopleOrganization
{
public:
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *NamePersonInAddPeopleOrganization;
    QLabel *label_3;
    QLineEdit *RoleOrganization;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *AddPeopleOrganization)
    {
        if (AddPeopleOrganization->objectName().isEmpty())
            AddPeopleOrganization->setObjectName("AddPeopleOrganization");
        AddPeopleOrganization->resize(677, 244);
        label = new QLabel(AddPeopleOrganization);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 30, 321, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font.setPointSize(17);
        font.setBold(true);
        label->setFont(font);
        formLayoutWidget = new QWidget(AddPeopleOrganization);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(130, 80, 411, 71));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        NamePersonInAddPeopleOrganization = new QLineEdit(formLayoutWidget);
        NamePersonInAddPeopleOrganization->setObjectName("NamePersonInAddPeopleOrganization");

        formLayout->setWidget(0, QFormLayout::FieldRole, NamePersonInAddPeopleOrganization);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        RoleOrganization = new QLineEdit(formLayoutWidget);
        RoleOrganization->setObjectName("RoleOrganization");

        formLayout->setWidget(1, QFormLayout::FieldRole, RoleOrganization);

        pushButton = new QPushButton(AddPeopleOrganization);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(460, 160, 83, 29));
        pushButton_2 = new QPushButton(AddPeopleOrganization);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 190, 83, 29));

        retranslateUi(AddPeopleOrganization);

        QMetaObject::connectSlotsByName(AddPeopleOrganization);
    } // setupUi

    void retranslateUi(QDialog *AddPeopleOrganization)
    {
        AddPeopleOrganization->setWindowTitle(QCoreApplication::translate("AddPeopleOrganization", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddPeopleOrganization", "Add People", nullptr));
        label_2->setText(QCoreApplication::translate("AddPeopleOrganization", "Person Name : ", nullptr));
        label_3->setText(QCoreApplication::translate("AddPeopleOrganization", "Role : ", nullptr));
        pushButton->setText(QCoreApplication::translate("AddPeopleOrganization", "Add", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AddPeopleOrganization", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddPeopleOrganization: public Ui_AddPeopleOrganization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPEOPLEORGANIZATION_H

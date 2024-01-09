/********************************************************************************
** Form generated from reading UI file 'addpeopletoteam.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPEOPLETOTEAM_H
#define UI_ADDPEOPLETOTEAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddPeopleToTeam
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *NamePersonInAddPeopleTeam;
    QLabel *label_3;
    QLineEdit *RoleTeam;
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *AddPeopleToTeam)
    {
        if (AddPeopleToTeam->objectName().isEmpty())
            AddPeopleToTeam->setObjectName("AddPeopleToTeam");
        AddPeopleToTeam->resize(685, 266);
        formLayoutWidget = new QWidget(AddPeopleToTeam);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(160, 90, 411, 71));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        NamePersonInAddPeopleTeam = new QLineEdit(formLayoutWidget);
        NamePersonInAddPeopleTeam->setObjectName("NamePersonInAddPeopleTeam");

        formLayout->setWidget(0, QFormLayout::FieldRole, NamePersonInAddPeopleTeam);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        RoleTeam = new QLineEdit(formLayoutWidget);
        RoleTeam->setObjectName("RoleTeam");

        formLayout->setWidget(1, QFormLayout::FieldRole, RoleTeam);

        pushButton_2 = new QPushButton(AddPeopleToTeam);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(60, 200, 83, 29));
        label = new QLabel(AddPeopleToTeam);
        label->setObjectName("label");
        label->setGeometry(QRect(270, 40, 321, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font.setPointSize(17);
        font.setBold(true);
        label->setFont(font);
        pushButton = new QPushButton(AddPeopleToTeam);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(490, 170, 83, 29));

        retranslateUi(AddPeopleToTeam);

        QMetaObject::connectSlotsByName(AddPeopleToTeam);
    } // setupUi

    void retranslateUi(QDialog *AddPeopleToTeam)
    {
        AddPeopleToTeam->setWindowTitle(QCoreApplication::translate("AddPeopleToTeam", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("AddPeopleToTeam", "Person Name : ", nullptr));
        label_3->setText(QCoreApplication::translate("AddPeopleToTeam", "Role : ", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AddPeopleToTeam", "Back", nullptr));
        label->setText(QCoreApplication::translate("AddPeopleToTeam", "Add People", nullptr));
        pushButton->setText(QCoreApplication::translate("AddPeopleToTeam", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddPeopleToTeam: public Ui_AddPeopleToTeam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPEOPLETOTEAM_H

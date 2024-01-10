/********************************************************************************
** Form generated from reading UI file 'changeroleinorganization.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEROLEINORGANIZATION_H
#define UI_CHANGEROLEINORGANIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangeRoleInOrganization
{
public:
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLineEdit *OldRoleInOrganization;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *ChangeRoleInOrganization)
    {
        if (ChangeRoleInOrganization->objectName().isEmpty())
            ChangeRoleInOrganization->setObjectName("ChangeRoleInOrganization");
        ChangeRoleInOrganization->resize(735, 248);
        label = new QLabel(ChangeRoleInOrganization);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 20, 291, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font.setPointSize(17);
        font.setBold(true);
        label->setFont(font);
        formLayoutWidget = new QWidget(ChangeRoleInOrganization);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(180, 80, 401, 72));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        OldRoleInOrganization = new QLineEdit(formLayoutWidget);
        OldRoleInOrganization->setObjectName("OldRoleInOrganization");

        formLayout->setWidget(0, QFormLayout::FieldRole, OldRoleInOrganization);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit);

        pushButton = new QPushButton(ChangeRoleInOrganization);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(500, 160, 83, 29));
        pushButton_2 = new QPushButton(ChangeRoleInOrganization);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 200, 71, 29));

        retranslateUi(ChangeRoleInOrganization);

        QMetaObject::connectSlotsByName(ChangeRoleInOrganization);
    } // setupUi

    void retranslateUi(QDialog *ChangeRoleInOrganization)
    {
        ChangeRoleInOrganization->setWindowTitle(QCoreApplication::translate("ChangeRoleInOrganization", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ChangeRoleInOrganization", "Change Role", nullptr));
        label_3->setText(QCoreApplication::translate("ChangeRoleInOrganization", "Old Role :", nullptr));
        label_2->setText(QCoreApplication::translate("ChangeRoleInOrganization", "New Role : ", nullptr));
        pushButton->setText(QCoreApplication::translate("ChangeRoleInOrganization", "Change", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ChangeRoleInOrganization", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeRoleInOrganization: public Ui_ChangeRoleInOrganization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEROLEINORGANIZATION_H

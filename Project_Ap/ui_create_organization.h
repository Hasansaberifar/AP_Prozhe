/********************************************************************************
** Form generated from reading UI file 'create_organization.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATE_ORGANIZATION_H
#define UI_CREATE_ORGANIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Create_Organization
{
public:
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *TitleOrganization;
    QLineEdit *OrganizationName;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Create_Organization)
    {
        if (Create_Organization->objectName().isEmpty())
            Create_Organization->setObjectName("Create_Organization");
        Create_Organization->resize(629, 293);
        label = new QLabel(Create_Organization);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 20, 361, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font.setPointSize(17);
        font.setBold(true);
        label->setFont(font);
        formLayoutWidget = new QWidget(Create_Organization);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(99, 90, 431, 71));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        TitleOrganization = new QLineEdit(formLayoutWidget);
        TitleOrganization->setObjectName("TitleOrganization");

        formLayout->setWidget(0, QFormLayout::FieldRole, TitleOrganization);

        OrganizationName = new QLineEdit(formLayoutWidget);
        OrganizationName->setObjectName("OrganizationName");

        formLayout->setWidget(1, QFormLayout::FieldRole, OrganizationName);

        pushButton = new QPushButton(Create_Organization);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(32, 240, 61, 29));
        pushButton_2 = new QPushButton(Create_Organization);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(450, 170, 83, 29));

        retranslateUi(Create_Organization);

        QMetaObject::connectSlotsByName(Create_Organization);
    } // setupUi

    void retranslateUi(QDialog *Create_Organization)
    {
        Create_Organization->setWindowTitle(QCoreApplication::translate("Create_Organization", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Create_Organization", "Create Organization", nullptr));
        label_2->setText(QCoreApplication::translate("Create_Organization", "Organization Title : ", nullptr));
        label_3->setText(QCoreApplication::translate("Create_Organization", "Organization Name :", nullptr));
        pushButton->setText(QCoreApplication::translate("Create_Organization", "Back", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Create_Organization", "Create", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Create_Organization: public Ui_Create_Organization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATE_ORGANIZATION_H

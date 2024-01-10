/********************************************************************************
** Form generated from reading UI file 'edit_organization_page.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_ORGANIZATION_PAGE_H
#define UI_EDIT_ORGANIZATION_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Edit_Organization_page
{
public:
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *newTitleForOrgan;
    QLabel *label_5;
    QLineEdit *OldNameForOrganization;
    QLineEdit *OldTitleForOrganization;
    QLineEdit *NewNameForOrgan;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QDialog *Edit_Organization_page)
    {
        if (Edit_Organization_page->objectName().isEmpty())
            Edit_Organization_page->setObjectName("Edit_Organization_page");
        Edit_Organization_page->resize(681, 300);
        pushButton_2 = new QPushButton(Edit_Organization_page);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(20, 250, 71, 29));
        pushButton = new QPushButton(Edit_Organization_page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(520, 240, 83, 29));
        formLayoutWidget = new QWidget(Edit_Organization_page);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(150, 90, 451, 141));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        newTitleForOrgan = new QLineEdit(formLayoutWidget);
        newTitleForOrgan->setObjectName("newTitleForOrgan");

        formLayout->setWidget(3, QFormLayout::FieldRole, newTitleForOrgan);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        OldNameForOrganization = new QLineEdit(formLayoutWidget);
        OldNameForOrganization->setObjectName("OldNameForOrganization");

        formLayout->setWidget(0, QFormLayout::FieldRole, OldNameForOrganization);

        OldTitleForOrganization = new QLineEdit(formLayoutWidget);
        OldTitleForOrganization->setObjectName("OldTitleForOrganization");

        formLayout->setWidget(2, QFormLayout::FieldRole, OldTitleForOrganization);

        NewNameForOrgan = new QLineEdit(formLayoutWidget);
        NewNameForOrgan->setObjectName("NewNameForOrgan");

        formLayout->setWidget(1, QFormLayout::FieldRole, NewNameForOrgan);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_2);

        label = new QLabel(Edit_Organization_page);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 30, 361, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font.setPointSize(17);
        font.setBold(true);
        label->setFont(font);

        retranslateUi(Edit_Organization_page);

        QMetaObject::connectSlotsByName(Edit_Organization_page);
    } // setupUi

    void retranslateUi(QDialog *Edit_Organization_page)
    {
        Edit_Organization_page->setWindowTitle(QCoreApplication::translate("Edit_Organization_page", "Dialog", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Edit_Organization_page", "Back", nullptr));
        pushButton->setText(QCoreApplication::translate("Edit_Organization_page", "Edit", nullptr));
        label_5->setText(QCoreApplication::translate("Edit_Organization_page", "Old name", nullptr));
        label_3->setText(QCoreApplication::translate("Edit_Organization_page", "New Name : ", nullptr));
        label_4->setText(QCoreApplication::translate("Edit_Organization_page", "Old Title : ", nullptr));
        label_2->setText(QCoreApplication::translate("Edit_Organization_page", "New Title : ", nullptr));
        label->setText(QCoreApplication::translate("Edit_Organization_page", "Edit Organization", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Edit_Organization_page: public Ui_Edit_Organization_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_ORGANIZATION_PAGE_H

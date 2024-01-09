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
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *newTitle;
    QLineEdit *NewName;
    QLabel *label;

    void setupUi(QDialog *Edit_Organization_page)
    {
        if (Edit_Organization_page->objectName().isEmpty())
            Edit_Organization_page->setObjectName("Edit_Organization_page");
        Edit_Organization_page->resize(681, 272);
        pushButton_2 = new QPushButton(Edit_Organization_page);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(50, 220, 71, 29));
        pushButton = new QPushButton(Edit_Organization_page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(520, 170, 83, 29));
        formLayoutWidget = new QWidget(Edit_Organization_page);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(150, 90, 451, 71));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        newTitle = new QLineEdit(formLayoutWidget);
        newTitle->setObjectName("newTitle");

        formLayout->setWidget(0, QFormLayout::FieldRole, newTitle);

        NewName = new QLineEdit(formLayoutWidget);
        NewName->setObjectName("NewName");

        formLayout->setWidget(1, QFormLayout::FieldRole, NewName);

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
        label_2->setText(QCoreApplication::translate("Edit_Organization_page", "New Title : ", nullptr));
        label_3->setText(QCoreApplication::translate("Edit_Organization_page", "New Name : ", nullptr));
        label->setText(QCoreApplication::translate("Edit_Organization_page", "Edit Organization", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Edit_Organization_page: public Ui_Edit_Organization_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_ORGANIZATION_PAGE_H

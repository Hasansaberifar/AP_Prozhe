/********************************************************************************
** Form generated from reading UI file 'edit_organization.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_ORGANIZATION_H
#define UI_EDIT_ORGANIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dialog
{
public:
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *newTitle;
    QLineEdit *NewName;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *dialog)
    {
        if (dialog->objectName().isEmpty())
            dialog->setObjectName("dialog");
        dialog->resize(695, 268);
        label = new QLabel(dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 30, 361, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font.setPointSize(17);
        font.setBold(true);
        label->setFont(font);
        formLayoutWidget = new QWidget(dialog);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(130, 90, 451, 71));
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

        pushButton = new QPushButton(dialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(500, 170, 83, 29));
        pushButton_2 = new QPushButton(dialog);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 220, 71, 29));

        retranslateUi(dialog);

        QMetaObject::connectSlotsByName(dialog);
    } // setupUi

    void retranslateUi(QDialog *dialog)
    {
        dialog->setWindowTitle(QCoreApplication::translate("dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("dialog", "Edit Organization", nullptr));
        label_2->setText(QCoreApplication::translate("dialog", "New Title : ", nullptr));
        label_3->setText(QCoreApplication::translate("dialog", "New Name : ", nullptr));
        pushButton->setText(QCoreApplication::translate("dialog", "Edit", nullptr));
        pushButton_2->setText(QCoreApplication::translate("dialog", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dialog: public Ui_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_ORGANIZATION_H

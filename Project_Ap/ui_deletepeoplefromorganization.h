/********************************************************************************
** Form generated from reading UI file 'deletepeoplefromorganization.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEPEOPLEFROMORGANIZATION_H
#define UI_DELETEPEOPLEFROMORGANIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeletePeopleFromOrganization
{
public:
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *NamePeopleForDeleteFromOrgan;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *DeletePeopleFromOrganization)
    {
        if (DeletePeopleFromOrganization->objectName().isEmpty())
            DeletePeopleFromOrganization->setObjectName("DeletePeopleFromOrganization");
        DeletePeopleFromOrganization->resize(721, 245);
        label = new QLabel(DeletePeopleFromOrganization);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 20, 351, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font.setPointSize(17);
        font.setBold(true);
        label->setFont(font);
        formLayoutWidget = new QWidget(DeletePeopleFromOrganization);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(119, 80, 451, 31));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        NamePeopleForDeleteFromOrgan = new QLineEdit(formLayoutWidget);
        NamePeopleForDeleteFromOrgan->setObjectName("NamePeopleForDeleteFromOrgan");

        formLayout->setWidget(0, QFormLayout::FieldRole, NamePeopleForDeleteFromOrgan);

        pushButton = new QPushButton(DeletePeopleFromOrganization);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(490, 130, 83, 29));
        pushButton_2 = new QPushButton(DeletePeopleFromOrganization);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 200, 83, 29));

        retranslateUi(DeletePeopleFromOrganization);

        QMetaObject::connectSlotsByName(DeletePeopleFromOrganization);
    } // setupUi

    void retranslateUi(QDialog *DeletePeopleFromOrganization)
    {
        DeletePeopleFromOrganization->setWindowTitle(QCoreApplication::translate("DeletePeopleFromOrganization", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DeletePeopleFromOrganization", "Delete People ", nullptr));
        label_2->setText(QCoreApplication::translate("DeletePeopleFromOrganization", "Name Person : ", nullptr));
        pushButton->setText(QCoreApplication::translate("DeletePeopleFromOrganization", "Delete", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DeletePeopleFromOrganization", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeletePeopleFromOrganization: public Ui_DeletePeopleFromOrganization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEPEOPLEFROMORGANIZATION_H

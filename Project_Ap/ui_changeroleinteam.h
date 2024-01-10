/********************************************************************************
** Form generated from reading UI file 'changeroleinteam.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEROLEINTEAM_H
#define UI_CHANGEROLEINTEAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangeRoleInTeam
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *OldRoleInTeam;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QDialog *ChangeRoleInTeam)
    {
        if (ChangeRoleInTeam->objectName().isEmpty())
            ChangeRoleInTeam->setObjectName("ChangeRoleInTeam");
        ChangeRoleInTeam->resize(706, 268);
        formLayoutWidget = new QWidget(ChangeRoleInTeam);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(200, 90, 401, 72));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        OldRoleInTeam = new QLineEdit(formLayoutWidget);
        OldRoleInTeam->setObjectName("OldRoleInTeam");

        formLayout->setWidget(0, QFormLayout::FieldRole, OldRoleInTeam);

        pushButton = new QPushButton(ChangeRoleInTeam);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(530, 180, 83, 29));
        pushButton_2 = new QPushButton(ChangeRoleInTeam);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(50, 210, 71, 29));
        label = new QLabel(ChangeRoleInTeam);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 30, 291, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font.setPointSize(17);
        font.setBold(true);
        label->setFont(font);

        retranslateUi(ChangeRoleInTeam);

        QMetaObject::connectSlotsByName(ChangeRoleInTeam);
    } // setupUi

    void retranslateUi(QDialog *ChangeRoleInTeam)
    {
        ChangeRoleInTeam->setWindowTitle(QCoreApplication::translate("ChangeRoleInTeam", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("ChangeRoleInTeam", "New Role : ", nullptr));
        label_3->setText(QCoreApplication::translate("ChangeRoleInTeam", "Old Role : ", nullptr));
        pushButton->setText(QCoreApplication::translate("ChangeRoleInTeam", "Change", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ChangeRoleInTeam", "Back", nullptr));
        label->setText(QCoreApplication::translate("ChangeRoleInTeam", "Change Role", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeRoleInTeam: public Ui_ChangeRoleInTeam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEROLEINTEAM_H

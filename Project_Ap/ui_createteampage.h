/********************************************************************************
** Form generated from reading UI file 'createteampage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATETEAMPAGE_H
#define UI_CREATETEAMPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateTeamPage
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *TitleOrganization;
    QLineEdit *OrganizationName;

    void setupUi(QDialog *CreateTeamPage)
    {
        if (CreateTeamPage->objectName().isEmpty())
            CreateTeamPage->setObjectName("CreateTeamPage");
        CreateTeamPage->resize(643, 292);
        pushButton = new QPushButton(CreateTeamPage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(73, 230, 61, 29));
        pushButton_2 = new QPushButton(CreateTeamPage);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(491, 160, 83, 29));
        label = new QLabel(CreateTeamPage);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 10, 361, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font.setPointSize(17);
        font.setBold(true);
        label->setFont(font);
        formLayoutWidget = new QWidget(CreateTeamPage);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(140, 80, 431, 71));
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


        retranslateUi(CreateTeamPage);

        QMetaObject::connectSlotsByName(CreateTeamPage);
    } // setupUi

    void retranslateUi(QDialog *CreateTeamPage)
    {
        CreateTeamPage->setWindowTitle(QCoreApplication::translate("CreateTeamPage", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("CreateTeamPage", "Back", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CreateTeamPage", "Create", nullptr));
        label->setText(QCoreApplication::translate("CreateTeamPage", "Create Team", nullptr));
        label_2->setText(QCoreApplication::translate("CreateTeamPage", "Team Title : ", nullptr));
        label_3->setText(QCoreApplication::translate("CreateTeamPage", "Team Name :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateTeamPage: public Ui_CreateTeamPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATETEAMPAGE_H

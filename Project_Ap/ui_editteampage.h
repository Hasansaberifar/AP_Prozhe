/********************************************************************************
** Form generated from reading UI file 'editteampage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITTEAMPAGE_H
#define UI_EDITTEAMPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditTeamPage
{
public:
    QPushButton *pushButton;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *OldNameForTeam;
    QLineEdit *OldTitleForTeam;
    QLineEdit *NewNameForTeam;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *newTitleForTeam;
    QLabel *label;
    QPushButton *pushButton_2;

    void setupUi(QDialog *EditTeamPage)
    {
        if (EditTeamPage->objectName().isEmpty())
            EditTeamPage->setObjectName("EditTeamPage");
        EditTeamPage->resize(692, 300);
        pushButton = new QPushButton(EditTeamPage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(490, 220, 83, 29));
        formLayoutWidget = new QWidget(EditTeamPage);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(120, 70, 451, 142));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        OldNameForTeam = new QLineEdit(formLayoutWidget);
        OldNameForTeam->setObjectName("OldNameForTeam");

        formLayout->setWidget(0, QFormLayout::FieldRole, OldNameForTeam);

        OldTitleForTeam = new QLineEdit(formLayoutWidget);
        OldTitleForTeam->setObjectName("OldTitleForTeam");

        formLayout->setWidget(2, QFormLayout::FieldRole, OldTitleForTeam);

        NewNameForTeam = new QLineEdit(formLayoutWidget);
        NewNameForTeam->setObjectName("NewNameForTeam");

        formLayout->setWidget(1, QFormLayout::FieldRole, NewNameForTeam);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_2);

        newTitleForTeam = new QLineEdit(formLayoutWidget);
        newTitleForTeam->setObjectName("newTitleForTeam");

        formLayout->setWidget(3, QFormLayout::FieldRole, newTitleForTeam);

        label = new QLabel(EditTeamPage);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 20, 361, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font.setPointSize(17);
        font.setBold(true);
        label->setFont(font);
        pushButton_2 = new QPushButton(EditTeamPage);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(40, 240, 71, 29));

        retranslateUi(EditTeamPage);

        QMetaObject::connectSlotsByName(EditTeamPage);
    } // setupUi

    void retranslateUi(QDialog *EditTeamPage)
    {
        EditTeamPage->setWindowTitle(QCoreApplication::translate("EditTeamPage", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("EditTeamPage", "Edit", nullptr));
        label_4->setText(QCoreApplication::translate("EditTeamPage", "Old Name :", nullptr));
        label_5->setText(QCoreApplication::translate("EditTeamPage", "Old Title :", nullptr));
        label_3->setText(QCoreApplication::translate("EditTeamPage", "New Name : ", nullptr));
        label_2->setText(QCoreApplication::translate("EditTeamPage", "New Title : ", nullptr));
        label->setText(QCoreApplication::translate("EditTeamPage", "Edit Team", nullptr));
        pushButton_2->setText(QCoreApplication::translate("EditTeamPage", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditTeamPage: public Ui_EditTeamPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTEAMPAGE_H

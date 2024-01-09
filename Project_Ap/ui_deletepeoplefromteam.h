/********************************************************************************
** Form generated from reading UI file 'deletepeoplefromteam.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEPEOPLEFROMTEAM_H
#define UI_DELETEPEOPLEFROMTEAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeletePeopleFromTeam
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *NamePeopleForDeleteFromTeam;
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *DeletePeopleFromTeam)
    {
        if (DeletePeopleFromTeam->objectName().isEmpty())
            DeletePeopleFromTeam->setObjectName("DeletePeopleFromTeam");
        DeletePeopleFromTeam->resize(654, 263);
        formLayoutWidget = new QWidget(DeletePeopleFromTeam);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(149, 80, 451, 31));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        NamePeopleForDeleteFromTeam = new QLineEdit(formLayoutWidget);
        NamePeopleForDeleteFromTeam->setObjectName("NamePeopleForDeleteFromTeam");

        formLayout->setWidget(0, QFormLayout::FieldRole, NamePeopleForDeleteFromTeam);

        pushButton_2 = new QPushButton(DeletePeopleFromTeam);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(60, 200, 83, 29));
        label = new QLabel(DeletePeopleFromTeam);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 20, 351, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font.setPointSize(17);
        font.setBold(true);
        label->setFont(font);
        pushButton = new QPushButton(DeletePeopleFromTeam);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(520, 130, 83, 29));

        retranslateUi(DeletePeopleFromTeam);

        QMetaObject::connectSlotsByName(DeletePeopleFromTeam);
    } // setupUi

    void retranslateUi(QDialog *DeletePeopleFromTeam)
    {
        DeletePeopleFromTeam->setWindowTitle(QCoreApplication::translate("DeletePeopleFromTeam", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("DeletePeopleFromTeam", "Name Person : ", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DeletePeopleFromTeam", "Back", nullptr));
        label->setText(QCoreApplication::translate("DeletePeopleFromTeam", "Delete People ", nullptr));
        pushButton->setText(QCoreApplication::translate("DeletePeopleFromTeam", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeletePeopleFromTeam: public Ui_DeletePeopleFromTeam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEPEOPLEFROMTEAM_H

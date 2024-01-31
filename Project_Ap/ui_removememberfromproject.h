/********************************************************************************
** Form generated from reading UI file 'removememberfromproject.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEMEMBERFROMPROJECT_H
#define UI_REMOVEMEMBERFROMPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RemoveMemberFromProject
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *NamePersonForRemoveFromProject;
    QLineEdit *NameProject;
    QLabel *label;

    void setupUi(QDialog *RemoveMemberFromProject)
    {
        if (RemoveMemberFromProject->objectName().isEmpty())
            RemoveMemberFromProject->setObjectName("RemoveMemberFromProject");
        RemoveMemberFromProject->resize(832, 256);
        pushButton = new QPushButton(RemoveMemberFromProject);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(500, 170, 83, 29));
        pushButton_2 = new QPushButton(RemoveMemberFromProject);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(60, 200, 83, 29));
        formLayoutWidget = new QWidget(RemoveMemberFromProject);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(130, 70, 451, 91));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        NamePersonForRemoveFromProject = new QLineEdit(formLayoutWidget);
        NamePersonForRemoveFromProject->setObjectName("NamePersonForRemoveFromProject");

        formLayout->setWidget(1, QFormLayout::FieldRole, NamePersonForRemoveFromProject);

        NameProject = new QLineEdit(formLayoutWidget);
        NameProject->setObjectName("NameProject");

        formLayout->setWidget(2, QFormLayout::FieldRole, NameProject);

        label = new QLabel(RemoveMemberFromProject);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 20, 351, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font.setPointSize(17);
        font.setBold(true);
        label->setFont(font);

        retranslateUi(RemoveMemberFromProject);

        QMetaObject::connectSlotsByName(RemoveMemberFromProject);
    } // setupUi

    void retranslateUi(QDialog *RemoveMemberFromProject)
    {
        RemoveMemberFromProject->setWindowTitle(QCoreApplication::translate("RemoveMemberFromProject", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("RemoveMemberFromProject", "Remove", nullptr));
        pushButton_2->setText(QCoreApplication::translate("RemoveMemberFromProject", "Back", nullptr));
        label_3->setText(QCoreApplication::translate("RemoveMemberFromProject", "Name Project :", nullptr));
        label_2->setText(QCoreApplication::translate("RemoveMemberFromProject", "Name Person : ", nullptr));
        label->setText(QCoreApplication::translate("RemoveMemberFromProject", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemoveMemberFromProject: public Ui_RemoveMemberFromProject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEMEMBERFROMPROJECT_H

/********************************************************************************
** Form generated from reading UI file 'editproject.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPROJECT_H
#define UI_EDITPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditProject
{
public:
    QPushButton *pushButton;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *newTitleForProject;
    QLabel *label_5;
    QLineEdit *OldNameForProject;
    QLineEdit *OldTitleForProject;
    QLineEdit *NewNameForProject;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QDialog *EditProject)
    {
        if (EditProject->objectName().isEmpty())
            EditProject->setObjectName("EditProject");
        EditProject->resize(753, 321);
        pushButton = new QPushButton(EditProject);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(550, 250, 83, 29));
        formLayoutWidget = new QWidget(EditProject);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(180, 100, 451, 141));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        newTitleForProject = new QLineEdit(formLayoutWidget);
        newTitleForProject->setObjectName("newTitleForProject");

        formLayout->setWidget(3, QFormLayout::FieldRole, newTitleForProject);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        OldNameForProject = new QLineEdit(formLayoutWidget);
        OldNameForProject->setObjectName("OldNameForProject");

        formLayout->setWidget(0, QFormLayout::FieldRole, OldNameForProject);

        OldTitleForProject = new QLineEdit(formLayoutWidget);
        OldTitleForProject->setObjectName("OldTitleForProject");

        formLayout->setWidget(2, QFormLayout::FieldRole, OldTitleForProject);

        NewNameForProject = new QLineEdit(formLayoutWidget);
        NewNameForProject->setObjectName("NewNameForProject");

        formLayout->setWidget(1, QFormLayout::FieldRole, NewNameForProject);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_2);

        pushButton_2 = new QPushButton(EditProject);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(50, 260, 71, 29));
        label = new QLabel(EditProject);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 40, 361, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font.setPointSize(17);
        font.setBold(true);
        label->setFont(font);

        retranslateUi(EditProject);

        QMetaObject::connectSlotsByName(EditProject);
    } // setupUi

    void retranslateUi(QDialog *EditProject)
    {
        EditProject->setWindowTitle(QCoreApplication::translate("EditProject", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("EditProject", "Edit", nullptr));
        label_5->setText(QCoreApplication::translate("EditProject", "Old name", nullptr));
        label_3->setText(QCoreApplication::translate("EditProject", "New Name : ", nullptr));
        label_4->setText(QCoreApplication::translate("EditProject", "Old Title : ", nullptr));
        label_2->setText(QCoreApplication::translate("EditProject", "New Title : ", nullptr));
        pushButton_2->setText(QCoreApplication::translate("EditProject", "Back", nullptr));
        label->setText(QCoreApplication::translate("EditProject", "Edit Project", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditProject: public Ui_EditProject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPROJECT_H

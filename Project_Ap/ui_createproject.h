/********************************************************************************
** Form generated from reading UI file 'createproject.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEPROJECT_H
#define UI_CREATEPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateProject
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *TitleProject;
    QLineEdit *ProjectName;
    QPushButton *pushButton_2;

    void setupUi(QDialog *CreateProject)
    {
        if (CreateProject->objectName().isEmpty())
            CreateProject->setObjectName("CreateProject");
        CreateProject->resize(730, 300);
        label = new QLabel(CreateProject);
        label->setObjectName("label");
        label->setGeometry(QRect(149, 10, 361, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font.setPointSize(17);
        font.setBold(true);
        label->setFont(font);
        pushButton = new QPushButton(CreateProject);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(82, 230, 61, 29));
        formLayoutWidget = new QWidget(CreateProject);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(149, 80, 431, 71));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        TitleProject = new QLineEdit(formLayoutWidget);
        TitleProject->setObjectName("TitleProject");

        formLayout->setWidget(0, QFormLayout::FieldRole, TitleProject);

        ProjectName = new QLineEdit(formLayoutWidget);
        ProjectName->setObjectName("ProjectName");

        formLayout->setWidget(1, QFormLayout::FieldRole, ProjectName);

        pushButton_2 = new QPushButton(CreateProject);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(500, 160, 83, 29));

        retranslateUi(CreateProject);

        QMetaObject::connectSlotsByName(CreateProject);
    } // setupUi

    void retranslateUi(QDialog *CreateProject)
    {
        CreateProject->setWindowTitle(QCoreApplication::translate("CreateProject", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("CreateProject", "Create Team", nullptr));
        pushButton->setText(QCoreApplication::translate("CreateProject", "Back", nullptr));
        label_2->setText(QCoreApplication::translate("CreateProject", "Project Title : ", nullptr));
        label_3->setText(QCoreApplication::translate("CreateProject", "Project Name :", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CreateProject", "Create", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateProject: public Ui_CreateProject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEPROJECT_H

/********************************************************************************
** Form generated from reading UI file 'viewmemberproject.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWMEMBERPROJECT_H
#define UI_VIEWMEMBERPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewMemberProject
{
public:
    QListWidget *listWidgetProject;
    QLabel *label;
    QPushButton *pushButton;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *Projectname;
    QPushButton *pushButton_2;

    void setupUi(QDialog *ViewMemberProject)
    {
        if (ViewMemberProject->objectName().isEmpty())
            ViewMemberProject->setObjectName("ViewMemberProject");
        ViewMemberProject->resize(627, 450);
        listWidgetProject = new QListWidget(ViewMemberProject);
        listWidgetProject->setObjectName("listWidgetProject");
        listWidgetProject->setGeometry(QRect(130, 130, 311, 241));
        label = new QLabel(ViewMemberProject);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 20, 371, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font.setPointSize(17);
        font.setBold(true);
        label->setFont(font);
        pushButton = new QPushButton(ViewMemberProject);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(270, 380, 83, 29));
        formLayoutWidget = new QWidget(ViewMemberProject);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(130, 80, 311, 41));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        Projectname = new QLineEdit(formLayoutWidget);
        Projectname->setObjectName("Projectname");

        formLayout->setWidget(0, QFormLayout::FieldRole, Projectname);

        pushButton_2 = new QPushButton(ViewMemberProject);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(360, 380, 83, 29));

        retranslateUi(ViewMemberProject);

        QMetaObject::connectSlotsByName(ViewMemberProject);
    } // setupUi

    void retranslateUi(QDialog *ViewMemberProject)
    {
        ViewMemberProject->setWindowTitle(QCoreApplication::translate("ViewMemberProject", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ViewMemberProject", "All Members Project", nullptr));
        pushButton->setText(QCoreApplication::translate("ViewMemberProject", "Close", nullptr));
        label_2->setText(QCoreApplication::translate("ViewMemberProject", "Name Project :", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ViewMemberProject", "Press", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewMemberProject: public Ui_ViewMemberProject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWMEMBERPROJECT_H

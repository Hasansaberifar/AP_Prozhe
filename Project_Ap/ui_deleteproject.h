/********************************************************************************
** Form generated from reading UI file 'deleteproject.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEPROJECT_H
#define UI_DELETEPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeleteProject
{
public:
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *ProjectNameForDelete;
    QLabel *label_3;
    QLineEdit *ProjectTitleForDelete;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *DeleteProject)
    {
        if (DeleteProject->objectName().isEmpty())
            DeleteProject->setObjectName("DeleteProject");
        DeleteProject->resize(897, 319);
        label = new QLabel(DeleteProject);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 30, 301, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font.setPointSize(17);
        font.setBold(true);
        label->setFont(font);
        formLayoutWidget = new QWidget(DeleteProject);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(190, 80, 481, 71));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        ProjectNameForDelete = new QLineEdit(formLayoutWidget);
        ProjectNameForDelete->setObjectName("ProjectNameForDelete");

        formLayout->setWidget(0, QFormLayout::FieldRole, ProjectNameForDelete);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        ProjectTitleForDelete = new QLineEdit(formLayoutWidget);
        ProjectTitleForDelete->setObjectName("ProjectTitleForDelete");

        formLayout->setWidget(1, QFormLayout::FieldRole, ProjectTitleForDelete);

        pushButton = new QPushButton(DeleteProject);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(590, 160, 83, 29));
        pushButton_2 = new QPushButton(DeleteProject);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(50, 230, 71, 29));

        retranslateUi(DeleteProject);

        QMetaObject::connectSlotsByName(DeleteProject);
    } // setupUi

    void retranslateUi(QDialog *DeleteProject)
    {
        DeleteProject->setWindowTitle(QCoreApplication::translate("DeleteProject", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DeleteProject", "Delete Project", nullptr));
        label_2->setText(QCoreApplication::translate("DeleteProject", "Project Name : ", nullptr));
        label_3->setText(QCoreApplication::translate("DeleteProject", "Project Title : ", nullptr));
        pushButton->setText(QCoreApplication::translate("DeleteProject", "Delete", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DeleteProject", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteProject: public Ui_DeleteProject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEPROJECT_H

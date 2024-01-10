/********************************************************************************
** Form generated from reading UI file 'edittask.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITTASK_H
#define UI_EDITTASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditTask
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *OdlNameForTask;
    QLineEdit *OldTitleForTask;
    QLineEdit *NewNameForTask;
    QLineEdit *NewTitleForTask;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QDialog *EditTask)
    {
        if (EditTask->objectName().isEmpty())
            EditTask->setObjectName("EditTask");
        EditTask->resize(767, 345);
        formLayoutWidget = new QWidget(EditTask);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(170, 80, 461, 142));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        OdlNameForTask = new QLineEdit(formLayoutWidget);
        OdlNameForTask->setObjectName("OdlNameForTask");

        formLayout->setWidget(0, QFormLayout::FieldRole, OdlNameForTask);

        OldTitleForTask = new QLineEdit(formLayoutWidget);
        OldTitleForTask->setObjectName("OldTitleForTask");

        formLayout->setWidget(2, QFormLayout::FieldRole, OldTitleForTask);

        NewNameForTask = new QLineEdit(formLayoutWidget);
        NewNameForTask->setObjectName("NewNameForTask");

        formLayout->setWidget(1, QFormLayout::FieldRole, NewNameForTask);

        NewTitleForTask = new QLineEdit(formLayoutWidget);
        NewTitleForTask->setObjectName("NewTitleForTask");

        formLayout->setWidget(3, QFormLayout::FieldRole, NewTitleForTask);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        pushButton = new QPushButton(EditTask);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(550, 230, 83, 29));
        pushButton_2 = new QPushButton(EditTask);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 300, 61, 29));
        label = new QLabel(EditTask);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 29, 231, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font.setPointSize(17);
        font.setBold(true);
        label->setFont(font);

        retranslateUi(EditTask);

        QMetaObject::connectSlotsByName(EditTask);
    } // setupUi

    void retranslateUi(QDialog *EditTask)
    {
        EditTask->setWindowTitle(QCoreApplication::translate("EditTask", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("EditTask", "Old Name : ", nullptr));
        label_3->setText(QCoreApplication::translate("EditTask", "New Name :", nullptr));
        label_5->setText(QCoreApplication::translate("EditTask", "Old Title :", nullptr));
        label_4->setText(QCoreApplication::translate("EditTask", "New Title :", nullptr));
        pushButton->setText(QCoreApplication::translate("EditTask", "Edit", nullptr));
        pushButton_2->setText(QCoreApplication::translate("EditTask", "Back", nullptr));
        label->setText(QCoreApplication::translate("EditTask", "Edit Task", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditTask: public Ui_EditTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTASK_H

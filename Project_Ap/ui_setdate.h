/********************************************************************************
** Form generated from reading UI file 'setdate.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETDATE_H
#define UI_SETDATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetDate
{
public:
    QLabel *label_2;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *taskName;
    QLabel *label_3;
    QLineEdit *Date;
    QPushButton *pushButton;

    void setupUi(QDialog *SetDate)
    {
        if (SetDate->objectName().isEmpty())
            SetDate->setObjectName("SetDate");
        SetDate->resize(849, 351);
        label_2 = new QLabel(SetDate);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(290, 30, 191, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka")});
        font.setPointSize(25);
        label_2->setFont(font);
        formLayoutWidget = new QWidget(SetDate);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(89, 90, 591, 71));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        taskName = new QLineEdit(formLayoutWidget);
        taskName->setObjectName("taskName");

        formLayout->setWidget(0, QFormLayout::FieldRole, taskName);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        Date = new QLineEdit(formLayoutWidget);
        Date->setObjectName("Date");

        formLayout->setWidget(1, QFormLayout::FieldRole, Date);

        pushButton = new QPushButton(SetDate);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(600, 170, 83, 31));

        retranslateUi(SetDate);

        QMetaObject::connectSlotsByName(SetDate);
    } // setupUi

    void retranslateUi(QDialog *SetDate)
    {
        SetDate->setWindowTitle(QCoreApplication::translate("SetDate", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("SetDate", "Set Date ", nullptr));
        label->setText(QCoreApplication::translate("SetDate", "Name Task : :", nullptr));
        label_3->setText(QCoreApplication::translate("SetDate", "Date :", nullptr));
        pushButton->setText(QCoreApplication::translate("SetDate", "press", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetDate: public Ui_SetDate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETDATE_H

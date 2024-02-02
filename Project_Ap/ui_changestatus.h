/********************************************************************************
** Form generated from reading UI file 'changestatus.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGESTATUS_H
#define UI_CHANGESTATUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Changestatus
{
public:
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *projectname;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Changestatus)
    {
        if (Changestatus->objectName().isEmpty())
            Changestatus->setObjectName("Changestatus");
        Changestatus->resize(804, 300);
        label = new QLabel(Changestatus);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 20, 341, 51));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        formLayoutWidget = new QWidget(Changestatus);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(160, 90, 501, 41));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        projectname = new QLineEdit(formLayoutWidget);
        projectname->setObjectName("projectname");

        formLayout->setWidget(0, QFormLayout::FieldRole, projectname);

        pushButton = new QPushButton(Changestatus);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(580, 140, 83, 29));
        pushButton_2 = new QPushButton(Changestatus);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(490, 140, 83, 29));

        retranslateUi(Changestatus);

        QMetaObject::connectSlotsByName(Changestatus);
    } // setupUi

    void retranslateUi(QDialog *Changestatus)
    {
        Changestatus->setWindowTitle(QCoreApplication::translate("Changestatus", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Changestatus", "change project status", nullptr));
        label_2->setText(QCoreApplication::translate("Changestatus", "project name :", nullptr));
        pushButton->setText(QCoreApplication::translate("Changestatus", "change", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Changestatus", "close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Changestatus: public Ui_Changestatus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGESTATUS_H

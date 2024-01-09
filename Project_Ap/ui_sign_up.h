/********************************************************************************
** Form generated from reading UI file 'sign_up.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGN_UP_H
#define UI_SIGN_UP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sign_up
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *Username;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_7;
    QLineEdit *Password;
    QLineEdit *Confirm;
    QLineEdit *Mame;
    QComboBox *Sex;
    QLabel *label_2;
    QLineEdit *Age;
    QLabel *label_8;
    QLineEdit *Email;

    void setupUi(QDialog *Sign_up)
    {
        if (Sign_up->objectName().isEmpty())
            Sign_up->setObjectName("Sign_up");
        Sign_up->resize(866, 587);
        label = new QLabel(Sign_up);
        label->setObjectName("label");
        label->setGeometry(QRect(330, 30, 331, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font.setPointSize(22);
        font.setBold(true);
        label->setFont(font);
        pushButton = new QPushButton(Sign_up);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(50, 510, 83, 29));
        pushButton_2 = new QPushButton(Sign_up);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(540, 400, 101, 29));
        formLayoutWidget = new QWidget(Sign_up);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(140, 130, 501, 261));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        Username = new QLineEdit(formLayoutWidget);
        Username->setObjectName("Username");

        formLayout->setWidget(0, QFormLayout::FieldRole, Username);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");

        formLayout->setWidget(6, QFormLayout::LabelRole, label_6);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName("label_7");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_7);

        Password = new QLineEdit(formLayoutWidget);
        Password->setObjectName("Password");

        formLayout->setWidget(1, QFormLayout::FieldRole, Password);

        Confirm = new QLineEdit(formLayoutWidget);
        Confirm->setObjectName("Confirm");

        formLayout->setWidget(2, QFormLayout::FieldRole, Confirm);

        Mame = new QLineEdit(formLayoutWidget);
        Mame->setObjectName("Mame");

        formLayout->setWidget(3, QFormLayout::FieldRole, Mame);

        Sex = new QComboBox(formLayoutWidget);
        Sex->addItem(QString());
        Sex->addItem(QString());
        Sex->setObjectName("Sex");

        formLayout->setWidget(6, QFormLayout::FieldRole, Sex);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setPointSize(9);
        label_2->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        Age = new QLineEdit(formLayoutWidget);
        Age->setObjectName("Age");

        formLayout->setWidget(4, QFormLayout::FieldRole, Age);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName("label_8");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_8);

        Email = new QLineEdit(formLayoutWidget);
        Email->setObjectName("Email");

        formLayout->setWidget(5, QFormLayout::FieldRole, Email);


        retranslateUi(Sign_up);

        QMetaObject::connectSlotsByName(Sign_up);
    } // setupUi

    void retranslateUi(QDialog *Sign_up)
    {
        Sign_up->setWindowTitle(QCoreApplication::translate("Sign_up", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Sign_up", "Register", nullptr));
        pushButton->setText(QCoreApplication::translate("Sign_up", "Back", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Sign_up", "Sign up", nullptr));
        label_4->setText(QCoreApplication::translate("Sign_up", "Confirm Pass", nullptr));
        label_5->setText(QCoreApplication::translate("Sign_up", "Age", nullptr));
        label_6->setText(QCoreApplication::translate("Sign_up", "Sex", nullptr));
        label_3->setText(QCoreApplication::translate("Sign_up", "Name", nullptr));
        label_7->setText(QCoreApplication::translate("Sign_up", "password", nullptr));
        Sex->setItemText(0, QCoreApplication::translate("Sign_up", "Male", nullptr));
        Sex->setItemText(1, QCoreApplication::translate("Sign_up", "Female", nullptr));

        label_2->setText(QCoreApplication::translate("Sign_up", "Username", nullptr));
        label_8->setText(QCoreApplication::translate("Sign_up", "Email", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sign_up: public Ui_Sign_up {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGN_UP_H

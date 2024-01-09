/********************************************************************************
** Form generated from reading UI file 'register_login_page.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_LOGIN_PAGE_H
#define UI_REGISTER_LOGIN_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Register_Login_Page
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *Register_Login_Page)
    {
        if (Register_Login_Page->objectName().isEmpty())
            Register_Login_Page->setObjectName("Register_Login_Page");
        Register_Login_Page->resize(765, 556);
        pushButton = new QPushButton(Register_Login_Page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 270, 161, 41));
        pushButton_2 = new QPushButton(Register_Login_Page);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(430, 270, 161, 41));
        label_2 = new QLabel(Register_Login_Page);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(270, 30, 261, 141));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font.setPointSize(25);
        font.setBold(true);
        label_2->setFont(font);
        pushButton_3 = new QPushButton(Register_Login_Page);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(60, 470, 83, 29));

        retranslateUi(Register_Login_Page);

        QMetaObject::connectSlotsByName(Register_Login_Page);
    } // setupUi

    void retranslateUi(QDialog *Register_Login_Page)
    {
        Register_Login_Page->setWindowTitle(QCoreApplication::translate("Register_Login_Page", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Register_Login_Page", "Sign up", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Register_Login_Page", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("Register_Login_Page", "Check In", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Register_Login_Page", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register_Login_Page: public Ui_Register_Login_Page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_LOGIN_PAGE_H

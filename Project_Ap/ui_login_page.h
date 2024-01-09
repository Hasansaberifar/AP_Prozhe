/********************************************************************************
** Form generated from reading UI file 'login_page.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_PAGE_H
#define UI_LOGIN_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Login_Page
{
public:

    void setupUi(QDialog *Login_Page)
    {
        if (Login_Page->objectName().isEmpty())
            Login_Page->setObjectName("Login_Page");
        Login_Page->resize(629, 449);

        retranslateUi(Login_Page);

        QMetaObject::connectSlotsByName(Login_Page);
    } // setupUi

    void retranslateUi(QDialog *Login_Page)
    {
        Login_Page->setWindowTitle(QCoreApplication::translate("Login_Page", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login_Page: public Ui_Login_Page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_PAGE_H

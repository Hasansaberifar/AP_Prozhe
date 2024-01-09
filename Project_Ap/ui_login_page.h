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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login_Page
{
public:
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *UserInLogin;
    QLineEdit *PassInLogin;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *Login_Page)
    {
        if (Login_Page->objectName().isEmpty())
            Login_Page->setObjectName("Login_Page");
        Login_Page->resize(629, 449);
        label = new QLabel(Login_Page);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 30, 221, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font.setPointSize(22);
        font.setBold(true);
        label->setFont(font);
        formLayoutWidget = new QWidget(Login_Page);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(100, 120, 441, 81));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        UserInLogin = new QLineEdit(formLayoutWidget);
        UserInLogin->setObjectName("UserInLogin");

        formLayout->setWidget(0, QFormLayout::FieldRole, UserInLogin);

        PassInLogin = new QLineEdit(formLayoutWidget);
        PassInLogin->setObjectName("PassInLogin");

        formLayout->setWidget(1, QFormLayout::FieldRole, PassInLogin);

        pushButton = new QPushButton(Login_Page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(460, 210, 83, 29));
        pushButton_2 = new QPushButton(Login_Page);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(310, 210, 131, 29));
        pushButton_3 = new QPushButton(Login_Page);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(40, 370, 83, 29));

        retranslateUi(Login_Page);

        QMetaObject::connectSlotsByName(Login_Page);
    } // setupUi

    void retranslateUi(QDialog *Login_Page)
    {
        Login_Page->setWindowTitle(QCoreApplication::translate("Login_Page", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Login_Page", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("Login_Page", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("Login_Page", "Password", nullptr));
        pushButton->setText(QCoreApplication::translate("Login_Page", "Login", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Login_Page", "Forget Password", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Login_Page", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login_Page: public Ui_Login_Page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_PAGE_H

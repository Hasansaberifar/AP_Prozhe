/********************************************************************************
** Form generated from reading UI file 'forgetpassword_page.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGETPASSWORD_PAGE_H
#define UI_FORGETPASSWORD_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ForgetPassword_page
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *UserInForgetPass;
    QLineEdit *EmailInForgetPass;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *ForgetPassword_page)
    {
        if (ForgetPassword_page->objectName().isEmpty())
            ForgetPassword_page->setObjectName("ForgetPassword_page");
        ForgetPassword_page->resize(499, 258);
        formLayoutWidget = new QWidget(ForgetPassword_page);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(50, 80, 371, 71));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        UserInForgetPass = new QLineEdit(formLayoutWidget);
        UserInForgetPass->setObjectName("UserInForgetPass");

        formLayout->setWidget(0, QFormLayout::FieldRole, UserInForgetPass);

        EmailInForgetPass = new QLineEdit(formLayoutWidget);
        EmailInForgetPass->setObjectName("EmailInForgetPass");

        formLayout->setWidget(1, QFormLayout::FieldRole, EmailInForgetPass);

        label_3 = new QLabel(ForgetPassword_page);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(100, 20, 281, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font.setPointSize(13);
        font.setBold(true);
        label_3->setFont(font);
        pushButton = new QPushButton(ForgetPassword_page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(340, 160, 83, 29));
        pushButton_2 = new QPushButton(ForgetPassword_page);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 210, 71, 31));

        retranslateUi(ForgetPassword_page);

        QMetaObject::connectSlotsByName(ForgetPassword_page);
    } // setupUi

    void retranslateUi(QDialog *ForgetPassword_page)
    {
        ForgetPassword_page->setWindowTitle(QCoreApplication::translate("ForgetPassword_page", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ForgetPassword_page", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("ForgetPassword_page", "Email", nullptr));
        label_3->setText(QCoreApplication::translate("ForgetPassword_page", "Login with Email", nullptr));
        pushButton->setText(QCoreApplication::translate("ForgetPassword_page", "Login", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ForgetPassword_page", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ForgetPassword_page: public Ui_ForgetPassword_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGETPASSWORD_PAGE_H

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
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Sign_up
{
public:

    void setupUi(QDialog *Sign_up)
    {
        if (Sign_up->objectName().isEmpty())
            Sign_up->setObjectName("Sign_up");
        Sign_up->resize(728, 520);

        retranslateUi(Sign_up);

        QMetaObject::connectSlotsByName(Sign_up);
    } // setupUi

    void retranslateUi(QDialog *Sign_up)
    {
        Sign_up->setWindowTitle(QCoreApplication::translate("Sign_up", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sign_up: public Ui_Sign_up {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGN_UP_H

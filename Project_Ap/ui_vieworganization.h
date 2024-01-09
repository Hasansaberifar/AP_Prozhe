/********************************************************************************
** Form generated from reading UI file 'vieworganization.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWORGANIZATION_H
#define UI_VIEWORGANIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ViewOrganization
{
public:
    QLabel *label;
    QListWidget *listWidget;
    QPushButton *pushButton;

    void setupUi(QDialog *ViewOrganization)
    {
        if (ViewOrganization->objectName().isEmpty())
            ViewOrganization->setObjectName("ViewOrganization");
        ViewOrganization->resize(686, 445);
        label = new QLabel(ViewOrganization);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 40, 371, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font.setPointSize(17);
        font.setBold(true);
        label->setFont(font);
        listWidget = new QListWidget(ViewOrganization);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(160, 100, 311, 241));
        pushButton = new QPushButton(ViewOrganization);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(390, 350, 83, 29));

        retranslateUi(ViewOrganization);

        QMetaObject::connectSlotsByName(ViewOrganization);
    } // setupUi

    void retranslateUi(QDialog *ViewOrganization)
    {
        ViewOrganization->setWindowTitle(QCoreApplication::translate("ViewOrganization", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ViewOrganization", "All Organizations", nullptr));
        pushButton->setText(QCoreApplication::translate("ViewOrganization", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewOrganization: public Ui_ViewOrganization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWORGANIZATION_H

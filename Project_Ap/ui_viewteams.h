/********************************************************************************
** Form generated from reading UI file 'viewteams.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWTEAMS_H
#define UI_VIEWTEAMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ViewTeams
{
public:
    QListWidget *listWidget;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *ViewTeams)
    {
        if (ViewTeams->objectName().isEmpty())
            ViewTeams->setObjectName("ViewTeams");
        ViewTeams->resize(595, 441);
        listWidget = new QListWidget(ViewTeams);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(160, 100, 311, 241));
        pushButton = new QPushButton(ViewTeams);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(390, 350, 83, 29));
        label = new QLabel(ViewTeams);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 40, 371, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font.setPointSize(17);
        font.setBold(true);
        label->setFont(font);

        retranslateUi(ViewTeams);

        QMetaObject::connectSlotsByName(ViewTeams);
    } // setupUi

    void retranslateUi(QDialog *ViewTeams)
    {
        ViewTeams->setWindowTitle(QCoreApplication::translate("ViewTeams", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("ViewTeams", "Close", nullptr));
        label->setText(QCoreApplication::translate("ViewTeams", "All Teams", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewTeams: public Ui_ViewTeams {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWTEAMS_H

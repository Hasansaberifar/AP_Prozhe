#include "viewmemberproject.h"
#include "ui_viewmemberproject.h"
#include<QFile>
#include<QMessageBox>

ViewMemberProject::ViewMemberProject(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ViewMemberProject)
{
    ui->setupUi(this);
}

ViewMemberProject::~ViewMemberProject()
{
    delete ui;
}

void ViewMemberProject::on_pushButton_clicked()
{
    this->close();
}


void ViewMemberProject::on_pushButton_2_clicked()
{
    QString nameproject = ui->Projectname->text();
    QFile file(nameproject + ".txt");
    QStringList lines;

    if (!file.open(QIODevice::ReadOnly)) {
        qDebug() << "Error opening file";
        return;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        lines.append(in.readLine());
    }

    file.close();
    lines.removeAt(0);
    lines.removeAt(0);

 //   for (int i = 0; i <=lines.size(); i++) {
 //       double a = i % 2;
 //       if (a != 0.00) {
  //          lines.removeAt(i);
  //      }
  //  }

    for (int i = 0; i < lines.size(); i+=2) {
        ui->listWidgetProject->addItem(lines[i]);
    }

}


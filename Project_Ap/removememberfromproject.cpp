#include "removememberfromproject.h"
#include "ui_removememberfromproject.h"
#include<QFile>
#include<QTextStream>
#include<QMessageBox>
RemoveMemberFromProject::RemoveMemberFromProject(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RemoveMemberFromProject)
{
    ui->setupUi(this);
}

RemoveMemberFromProject::~RemoveMemberFromProject()
{
    delete ui;
}

void RemoveMemberFromProject::on_pushButton_2_clicked()
{
    this->close();
}


void RemoveMemberFromProject::on_pushButton_clicked()
{
    QString nameProject = ui->NameProject->text();
    QString namePerson = ui->NamePersonForRemoveFromProject->text();
    QFile file(nameProject + ".txt");


    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::critical(nullptr, "Title : Remove Persons", "Project not Open !");
        this->hide();
        return ;
    }


    QStringList lines;


    QTextStream in(&file);
    while (!in.atEnd()) {
        lines.append(in.readLine());
    }


    file.close();


    for (int i = 0; i < lines.size(); i++) {

        if (lines[i].contains(namePerson)) {

            lines.removeAt(i);
            lines.removeAt(i);
            QMessageBox::information(nullptr, "Title : Remove Persons", "Remove was succesfully !");
            this->hide();
        }
    }


    file.open(QIODevice::WriteOnly);
    QTextStream out(&file);
    for (QString line : lines) {
        out << line << "\n";
    }

    file.close();

}




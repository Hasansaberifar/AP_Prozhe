#include "editproject.h"
#include "ui_editproject.h"
#include<QFile>
#include<QMessageBox>
#include<QTextStream>
EditProject::EditProject(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::EditProject)
{
    ui->setupUi(this);
}

EditProject::~EditProject()
{
    delete ui;
}

void EditProject::on_pushButton_2_clicked()
{
    this->close();
}


void EditProject::on_pushButton_clicked()
{
    QString namefile=ui->OldNameForProject->text()+".txt";
    QString name=ui->NewNameForProject->text();
    QString title=ui->newTitleForProject->text();
    QFile file(namefile);
    if (file.exists()){
        file.remove();
        file.close();

        QFile file(name+".txt");
        if(file.exists()){
            QMessageBox::critical(nullptr, "Title : Edit file", "name is Exists !");
        }
      else  if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream stream(&file);
            stream << name << "\n"<< title << "\n";
            file.close();
             QMessageBox::information(nullptr, "Title : Edit Project", "The Project was Edited successfully !");
    }

    }
    else
    QMessageBox::critical(nullptr, "Title : Edit file", "name is Not Exists !");

    this->hide();
}


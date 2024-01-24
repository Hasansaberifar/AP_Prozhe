#include "createproject.h"
#include "ui_createproject.h"
#include"project_page.h"
#include <QFile>
#include <QTextStream>
#include<QMessageBox>
CreateProject::CreateProject(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CreateProject)
{
    ui->setupUi(this);
}

CreateProject::~CreateProject()
{
    delete ui;
}

void CreateProject::on_pushButton_clicked()
{
    this->close();
}


void CreateProject::on_pushButton_2_clicked()
{
    QString name=ui->ProjectName->text();
    QString title=ui->TitleProject->text();
    QString filename1=name+".txt";
    QFile file(filename1);
    if (file.exists()){
        QMessageBox::critical(nullptr, "عنوان", "This name exists !");
    }
   else if(name == "" || title == ""){

        QMessageBox::critical(nullptr, "عنوان", "Please enter name and title :(");
    }
   else if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {

        QTextStream stream(&file);
        stream << name << "\n" << title <<"\n";

        file.close();
        QMessageBox::information(nullptr, "عنوان", "The Project was created successfully !");

    }


}


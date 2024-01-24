#include "deleteproject.h"
#include "ui_deleteproject.h"
#include<QFile>
#include<QMessageBox>
DeleteProject::DeleteProject(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DeleteProject)
{
    ui->setupUi(this);
}

DeleteProject::~DeleteProject()
{
    delete ui;
}

void DeleteProject::on_pushButton_2_clicked()
{
    this->close();
}


void DeleteProject::on_pushButton_clicked()
{
    QString oldname = ui->ProjectNameForDelete->text()+".txt";
    QFile file(oldname);
    if(file.exists()){
        if(file.remove())
        QMessageBox::information(nullptr, "Title : Delete file", "The Project was Deleted successfully !");
    }
    else
    {
        QMessageBox::critical(nullptr, "Title : Delete file", "File not Exists");
    }
    this->hide();
}


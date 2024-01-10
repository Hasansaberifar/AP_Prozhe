#include "addmembertoproject.h"
#include "ui_addmembertoproject.h"

AddMemberToProject::AddMemberToProject(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddMemberToProject)
{
    ui->setupUi(this);
}

AddMemberToProject::~AddMemberToProject()
{
    delete ui;
}

void AddMemberToProject::on_pushButton_2_clicked()
{
    this->close();
}


#include "createproject.h"
#include "ui_createproject.h"
#include"project_page.h"
#include <QFile>
#include <QTextStream>
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



}


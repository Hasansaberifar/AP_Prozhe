#include "createproject.h"
#include "ui_createproject.h"

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


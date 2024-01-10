#include "deleteproject.h"
#include "ui_deleteproject.h"

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


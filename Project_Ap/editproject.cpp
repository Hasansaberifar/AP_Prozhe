#include "editproject.h"
#include "ui_editproject.h"

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


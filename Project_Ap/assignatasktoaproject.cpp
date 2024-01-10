#include "assignatasktoaproject.h"
#include "ui_assignatasktoaproject.h"

AssignATaskToAProject::AssignATaskToAProject(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AssignATaskToAProject)
{
    ui->setupUi(this);
}

AssignATaskToAProject::~AssignATaskToAProject()
{
    delete ui;
}

void AssignATaskToAProject::on_pushButton_2_clicked()
{
    this->close();
}


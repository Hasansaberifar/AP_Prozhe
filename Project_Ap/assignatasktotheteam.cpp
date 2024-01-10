#include "assignatasktotheteam.h"
#include "ui_assignatasktotheteam.h"

AssignATaskToTheTeam::AssignATaskToTheTeam(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AssignATaskToTheTeam)
{
    ui->setupUi(this);
}

AssignATaskToTheTeam::~AssignATaskToTheTeam()
{
    delete ui;
}

void AssignATaskToTheTeam::on_pushButton_2_clicked()
{
    this->close();
}


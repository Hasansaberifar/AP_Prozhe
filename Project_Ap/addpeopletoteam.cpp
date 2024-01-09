#include "addpeopletoteam.h"
#include "ui_addpeopletoteam.h"

AddPeopleToTeam::AddPeopleToTeam(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddPeopleToTeam)
{
    ui->setupUi(this);
}

AddPeopleToTeam::~AddPeopleToTeam()
{
    delete ui;
}

void AddPeopleToTeam::on_pushButton_2_clicked()
{
    this->close();
}


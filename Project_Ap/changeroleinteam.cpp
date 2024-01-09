#include "changeroleinteam.h"
#include "ui_changeroleinteam.h"

ChangeRoleInTeam::ChangeRoleInTeam(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ChangeRoleInTeam)
{
    ui->setupUi(this);
}

ChangeRoleInTeam::~ChangeRoleInTeam()
{
    delete ui;
}

void ChangeRoleInTeam::on_pushButton_2_clicked()
{
    this->close();
}


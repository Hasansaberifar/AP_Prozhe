#include "changeroleinorganization.h"
#include "ui_changeroleinorganization.h"

ChangeRoleInOrganization::ChangeRoleInOrganization(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ChangeRoleInOrganization)
{
    ui->setupUi(this);
}

ChangeRoleInOrganization::~ChangeRoleInOrganization()
{
    delete ui;
}

void ChangeRoleInOrganization::on_pushButton_2_clicked()
{
    this->close();
}


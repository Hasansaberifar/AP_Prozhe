#include "addpeopleorganization.h"
#include "ui_addpeopleorganization.h"

AddPeopleOrganization::AddPeopleOrganization(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddPeopleOrganization)
{
    ui->setupUi(this);
}

AddPeopleOrganization::~AddPeopleOrganization()
{
    delete ui;
}

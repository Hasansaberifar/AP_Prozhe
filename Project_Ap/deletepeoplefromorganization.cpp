#include "deletepeoplefromorganization.h"
#include "ui_deletepeoplefromorganization.h"

DeletePeopleFromOrganization::DeletePeopleFromOrganization(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DeletePeopleFromOrganization)
{
    ui->setupUi(this);
}

DeletePeopleFromOrganization::~DeletePeopleFromOrganization()
{
    delete ui;
}

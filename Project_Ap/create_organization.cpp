#include "create_organization.h"
#include "ui_create_organization.h"

Create_Organization::Create_Organization(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Create_Organization)
{
    ui->setupUi(this);
}

Create_Organization::~Create_Organization()
{
    delete ui;
}

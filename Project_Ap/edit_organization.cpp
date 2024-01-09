#include "edit_organization.h"
#include "ui_edit_organization.h"

Edit_Organization::Edit_Organization(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Edit_Organization)
{
    ui->setupUi(this);
}

Edit_Organization::~Edit_Organization()
{
    delete ui;
}

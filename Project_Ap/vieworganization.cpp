#include "vieworganization.h"
#include "ui_vieworganization.h"

ViewOrganization::ViewOrganization(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ViewOrganization)
{
    ui->setupUi(this);
}

ViewOrganization::~ViewOrganization()
{
    delete ui;
}

void ViewOrganization::on_pushButton_clicked()
{
    this->close();
}


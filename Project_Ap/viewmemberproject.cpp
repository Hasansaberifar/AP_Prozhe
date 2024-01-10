#include "viewmemberproject.h"
#include "ui_viewmemberproject.h"

ViewMemberProject::ViewMemberProject(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ViewMemberProject)
{
    ui->setupUi(this);
}

ViewMemberProject::~ViewMemberProject()
{
    delete ui;
}

void ViewMemberProject::on_pushButton_clicked()
{
    this->close();
}


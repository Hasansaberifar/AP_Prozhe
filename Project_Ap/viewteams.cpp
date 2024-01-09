#include "viewteams.h"
#include "ui_viewteams.h"

ViewTeams::ViewTeams(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ViewTeams)
{
    ui->setupUi(this);
}

ViewTeams::~ViewTeams()
{
    delete ui;
}

void ViewTeams::on_pushButton_clicked()
{
    this->close();
}


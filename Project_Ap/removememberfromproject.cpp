#include "removememberfromproject.h"
#include "ui_removememberfromproject.h"

RemoveMemberFromProject::RemoveMemberFromProject(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RemoveMemberFromProject)
{
    ui->setupUi(this);
}

RemoveMemberFromProject::~RemoveMemberFromProject()
{
    delete ui;
}

void RemoveMemberFromProject::on_pushButton_2_clicked()
{
    this->close();
}


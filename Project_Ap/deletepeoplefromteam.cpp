#include "deletepeoplefromteam.h"
#include "ui_deletepeoplefromteam.h"

DeletePeopleFromTeam::DeletePeopleFromTeam(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DeletePeopleFromTeam)
{
    ui->setupUi(this);
}

DeletePeopleFromTeam::~DeletePeopleFromTeam()
{
    delete ui;
}

void DeletePeopleFromTeam::on_pushButton_2_clicked()
{
    this->close();
}


#include "assignatasktoaperson.h"
#include "ui_assignatasktoaperson.h"

AssignATaskToAPerson::AssignATaskToAPerson(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AssignATaskToAPerson)
{
    ui->setupUi(this);
}

AssignATaskToAPerson::~AssignATaskToAPerson()
{
    delete ui;
}

void AssignATaskToAPerson::on_pushButton_2_clicked()
{
    this->close();
}


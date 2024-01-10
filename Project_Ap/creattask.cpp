#include "creattask.h"
#include "ui_creattask.h"

CreatTask::CreatTask(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CreatTask)
{
    ui->setupUi(this);
}

CreatTask::~CreatTask()
{
    delete ui;
}

void CreatTask::on_pushButton_2_clicked()
{
    this->close();
}


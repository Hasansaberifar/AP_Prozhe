#include "edittask.h"
#include "ui_edittask.h"

EditTask::EditTask(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::EditTask)
{
    ui->setupUi(this);
}

EditTask::~EditTask()
{
    delete ui;
}

void EditTask::on_pushButton_2_clicked()
{
    this->close();
}


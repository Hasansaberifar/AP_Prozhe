#include "task_page.h"
#include "ui_task_page.h"
#include"creattask.h"
#include"edittask.h"
Task_Page::Task_Page(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Task_Page)
{
    ui->setupUi(this);
}

Task_Page::~Task_Page()
{
    delete ui;
}

void Task_Page::on_pushButton_clicked()
{
    this->close();
}


void Task_Page::on_pushButton_2_clicked()
{
    CreatTask *page=new CreatTask(this);
    page->show();
}


void Task_Page::on_pushButton_3_clicked()
{
    EditTask *page=new EditTask(this);
    page->show();
}


#include "task_page.h"
#include "ui_task_page.h"

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

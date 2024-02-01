#include "task_page.h"
#include "ui_task_page.h"
#include"creattask.h"
#include"edittask.h"
#include"deletetask.h"
#include"assignatasktoaproject.h"
#include"assignatasktotheteam.h"
#include"setdate.h"
Task_Page::Task_Page(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Task_Page)
{
    ui->setupUi(this);
    setWindowTitle("Task page");
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


void Task_Page::on_pushButton_6_clicked()
{
    DeleteTask *page=new DeleteTask(this);
    page->show();
}


void Task_Page::on_pushButton_7_clicked()
{
    AssignATaskToAProject *page=new AssignATaskToAProject(this);
    page->show();
}


void Task_Page::on_pushButton_8_clicked()
{
    AssignATaskToTheTeam *page=new AssignATaskToTheTeam(this);
    page->show();
}


void Task_Page::on_pushButton_10_clicked()
{
    SetDate *a=new SetDate(this);
    a->show();
}


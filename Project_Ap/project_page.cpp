#include "project_page.h"
#include "ui_project_page.h"

Project_Page::Project_Page(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Project_Page)
{
    ui->setupUi(this);
}

Project_Page::~Project_Page()
{
    delete ui;
}

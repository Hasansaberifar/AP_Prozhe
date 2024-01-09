#include "Organization_Page.h"
#include "ui_Organization_Page.h"
#include"team_page.h"
#include"create_organization.h"

General_page::General_page(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::General_page)
{
    ui->setupUi(this);
}

General_page::~General_page()
{
    delete ui;
}

void General_page::on_pushButton_clicked()
{
    this->close();
}


void General_page::on_pushButton_11_clicked()
{
    Team_Page *team=new Team_Page(this);
    team->show();
}


void General_page::on_pushButton_2_clicked()
{
    Create_Organization *page=new Create_Organization (this);
    page->show();

}




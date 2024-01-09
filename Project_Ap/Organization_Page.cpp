#include "Organization_Page.h"
#include "ui_Organization_Page.h"
#include"team_page.h"
#include"create_organization.h"
#include"edit_organization_page.h"
#include"addpeopleorganization.h"
#include"deletepeoplefromorganization.h"
#include "changeroleinorganization.h"
#include"vieworganization.h"
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




void General_page::on_pushButton_3_clicked()
{
    Edit_Organization_page *page=new Edit_Organization_page(this);
    page->show();
}


void General_page::on_pushButton_5_clicked()
{
    AddPeopleOrganization *page=new AddPeopleOrganization(this);
    page->show();
}


void General_page::on_pushButton_6_clicked()
{
    DeletePeopleFromOrganization *page=new DeletePeopleFromOrganization(this);
    page->show();
}


void General_page::on_pushButton_7_clicked()
{
    ChangeRoleInOrganization *page=new ChangeRoleInOrganization(this);
    page->show();
}


void General_page::on_pushButton_9_clicked()
{
    ViewOrganization *page=new ViewOrganization(this);
    page->show();
}


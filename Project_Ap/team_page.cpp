#include "team_page.h"
#include "ui_team_page.h"
#include"createteampage.h"
#include "editteampage.h"
#include"addpeopleorganization.h"
#include"deletepeoplefromorganization.h"
#include"changeroleinteam.h"
#include"viewteams.h"
#include"task_page.h"
Team_Page::Team_Page(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Team_Page)
{
    ui->setupUi(this);
}

Team_Page::~Team_Page()
{
    delete ui;
}

void Team_Page::on_pushButton_clicked()
{
    this->close();
}


void Team_Page::on_pushButton_2_clicked()
{
    CreateTeamPage *page=new CreateTeamPage(this);
    page->show();
}


void Team_Page::on_pushButton_3_clicked()
{
    AddPeopleOrganization *page=new AddPeopleOrganization(this);
    page->show();
}


void Team_Page::on_pushButton_5_clicked()
{
    EditTeamPage *page=new EditTeamPage(this);
    page->show();
}


void Team_Page::on_pushButton_4_clicked()
{
    DeletePeopleFromOrganization *page=new DeletePeopleFromOrganization(this);
    page->show();
}


void Team_Page::on_pushButton_7_clicked()
{
    ChangeRoleInTeam *page =new ChangeRoleInTeam(this);
    page->show();
}


void Team_Page::on_pushButton_9_clicked()
{
    ViewTeams *page=new ViewTeams(this);
    page->show();
}


void Team_Page::on_pushButton_11_clicked()
{
    Task_Page *page=new Task_Page(this);
    page->show();
}


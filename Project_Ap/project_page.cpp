#include "project_page.h"
#include "ui_project_page.h"
#include"createproject.h"
#include"addmembertoproject.h"
#include"removememberfromproject.h"
#include"editproject.h"
#include"deleteproject.h"
#include"viewmemberproject.h"
#include "Organization_Page.h"
#include<QFile>
#include<QTextStream>
Project_Page::Project_Page(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Project_Page)
{
    ui->setupUi(this);
    setWindowTitle("Project page");

}

Project_Page::~Project_Page()
{
    delete ui;
}

void Project_Page::on_pushButton_10_clicked()
{
    this->close();
    Organization_Page* page = new Organization_Page();
    page->show();
}


void Project_Page::on_pushButton_clicked()
{
    CreateProject *page=new CreateProject(this);
    page->show();
}


void Project_Page::on_pushButton_2_clicked()
{
    AddMemberToProject *page=new AddMemberToProject(this);
    page->show();
}


void Project_Page::on_pushButton_3_clicked()
{
    RemoveMemberFromProject *page=new RemoveMemberFromProject(this);
    page->show();
}


void Project_Page::on_pushButton_4_clicked()
{
    EditProject *page=new EditProject(this);
    page->show();
}


void Project_Page::on_pushButton_5_clicked()
{
    DeleteProject *page=new DeleteProject(this);
    page->show();
}


void Project_Page::on_pushButton_7_clicked()
{
    ViewMemberProject *page=new ViewMemberProject(this);
    page->show();
}


void Project_Page::on_pushButton_9_clicked()
{
    QFile file("Allprojects.txt");

    QStringList lines;


    QTextStream in(&file);
    while (!in.atEnd()) {
        lines.append(in.readLine());
    }


    std::sort(lines.begin(), lines.end());


    file.close();


    file.seek(0);


    QTextStream out(&file);
    for (QString line : lines) {
        out << line << "\n";
    }


    file.close();

}


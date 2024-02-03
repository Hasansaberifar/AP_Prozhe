#include "register_login_page.h"
#include "ui_register_login_page.h"
#include"sign_up.h"
#include"login_page.h"
#include "mainwindow.h"
Register_Login_Page::Register_Login_Page(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Register_Login_Page)
{
    ui->setupUi(this);
}

Register_Login_Page::~Register_Login_Page()
{
    delete ui;
}

void Register_Login_Page::on_pushButton_clicked()
{
    Sign_up *page=new Sign_up(this);
    page->show();
}


void Register_Login_Page::on_pushButton_2_clicked()
{
    Login_Page *page1=new Login_Page(this);
    page1->show();
}


void Register_Login_Page::on_pushButton_3_clicked()
{
    this->close();
}


#include "login_page.h"
#include "ui_login_page.h"
#include"forgetpassword_page.h"
Login_Page::Login_Page(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login_Page)
{
    ui->setupUi(this);
}

Login_Page::~Login_Page()
{
    delete ui;
}

void Login_Page::on_pushButton_3_clicked()
{
    this->close();
}


void Login_Page::on_pushButton_2_clicked()
{
    ForgetPassword_page *page=new ForgetPassword_page(this);
    page->show();
}


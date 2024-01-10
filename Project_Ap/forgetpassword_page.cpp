#include "forgetpassword_page.h"
#include "ui_forgetpassword_page.h"
#include"Organization_Page.h"
ForgetPassword_page::ForgetPassword_page(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ForgetPassword_page)
{
    ui->setupUi(this);
}

ForgetPassword_page::~ForgetPassword_page()
{
    delete ui;
}

void ForgetPassword_page::on_pushButton_2_clicked()
{
    this->close();
}


void ForgetPassword_page::on_pushButton_clicked()
{
    Organization_Page *page=new Organization_Page(this);
    page->show();
}


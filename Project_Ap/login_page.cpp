#include "login_page.h"
#include "ui_login_page.h"

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

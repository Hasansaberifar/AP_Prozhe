#include "forgetpassword_page.h"
#include "ui_forgetpassword_page.h"

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


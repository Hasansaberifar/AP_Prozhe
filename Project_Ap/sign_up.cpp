#include "sign_up.h"
#include "ui_sign_up.h"

Sign_up::Sign_up(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Sign_up)
{
    ui->setupUi(this);
}

Sign_up::~Sign_up()
{
    delete ui;
}

void Sign_up::on_pushButton_clicked()
{
    this->close();
}


#include "Organization_Page.h"
#include "ui_Organization_Page.h"

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


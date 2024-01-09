#include "edit_organization_page.h"
#include "ui_edit_organization_page.h"

Edit_Organization_page::Edit_Organization_page(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Edit_Organization_page)
{
    ui->setupUi(this);
}

Edit_Organization_page::~Edit_Organization_page()
{
    delete ui;
}

void Edit_Organization_page::on_pushButton_2_clicked()
{
    this->close();
}


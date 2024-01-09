#include "team_page.h"
#include "ui_team_page.h"

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


#include "createteampage.h"
#include "ui_createteampage.h"

CreateTeamPage::CreateTeamPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CreateTeamPage)
{
    ui->setupUi(this);
}

CreateTeamPage::~CreateTeamPage()
{
    delete ui;
}

void CreateTeamPage::on_pushButton_clicked()
{
    this->close();
}


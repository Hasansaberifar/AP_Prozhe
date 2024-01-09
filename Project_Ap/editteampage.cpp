#include "editteampage.h"
#include "ui_editteampage.h"

EditTeamPage::EditTeamPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::EditTeamPage)
{
    ui->setupUi(this);
}

EditTeamPage::~EditTeamPage()
{
    delete ui;
}

void EditTeamPage::on_pushButton_2_clicked()
{
    this->close();
}


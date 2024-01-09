#ifndef CREATETEAMPAGE_H
#define CREATETEAMPAGE_H

#include <QDialog>

namespace Ui {
class CreateTeamPage;
}

class CreateTeamPage : public QDialog
{
    Q_OBJECT

public:
    explicit CreateTeamPage(QWidget *parent = nullptr);
    ~CreateTeamPage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::CreateTeamPage *ui;
};

#endif // CREATETEAMPAGE_H

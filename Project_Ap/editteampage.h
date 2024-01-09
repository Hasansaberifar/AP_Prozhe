#ifndef EDITTEAMPAGE_H
#define EDITTEAMPAGE_H

#include <QDialog>

namespace Ui {
class EditTeamPage;
}

class EditTeamPage : public QDialog
{
    Q_OBJECT

public:
    explicit EditTeamPage(QWidget *parent = nullptr);
    ~EditTeamPage();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::EditTeamPage *ui;
};

#endif // EDITTEAMPAGE_H

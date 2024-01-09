#ifndef CHANGEROLEINTEAM_H
#define CHANGEROLEINTEAM_H

#include <QDialog>

namespace Ui {
class ChangeRoleInTeam;
}

class ChangeRoleInTeam : public QDialog
{
    Q_OBJECT

public:
    explicit ChangeRoleInTeam(QWidget *parent = nullptr);
    ~ChangeRoleInTeam();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::ChangeRoleInTeam *ui;
};

#endif // CHANGEROLEINTEAM_H

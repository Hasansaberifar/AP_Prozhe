#ifndef ADDPEOPLETOTEAM_H
#define ADDPEOPLETOTEAM_H

#include <QDialog>

namespace Ui {
class AddPeopleToTeam;
}

class AddPeopleToTeam : public QDialog
{
    Q_OBJECT

public:
    explicit AddPeopleToTeam(QWidget *parent = nullptr);
    ~AddPeopleToTeam();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::AddPeopleToTeam *ui;
};

#endif // ADDPEOPLETOTEAM_H

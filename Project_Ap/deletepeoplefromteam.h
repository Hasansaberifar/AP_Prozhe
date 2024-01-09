#ifndef DELETEPEOPLEFROMTEAM_H
#define DELETEPEOPLEFROMTEAM_H

#include <QDialog>

namespace Ui {
class DeletePeopleFromTeam;
}

class DeletePeopleFromTeam : public QDialog
{
    Q_OBJECT

public:
    explicit DeletePeopleFromTeam(QWidget *parent = nullptr);
    ~DeletePeopleFromTeam();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::DeletePeopleFromTeam *ui;
};

#endif // DELETEPEOPLEFROMTEAM_H

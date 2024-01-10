#ifndef ASSIGNATASKTOTHETEAM_H
#define ASSIGNATASKTOTHETEAM_H

#include <QDialog>

namespace Ui {
class AssignATaskToTheTeam;
}

class AssignATaskToTheTeam : public QDialog
{
    Q_OBJECT

public:
    explicit AssignATaskToTheTeam(QWidget *parent = nullptr);
    ~AssignATaskToTheTeam();

private:
    Ui::AssignATaskToTheTeam *ui;
};

#endif // ASSIGNATASKTOTHETEAM_H

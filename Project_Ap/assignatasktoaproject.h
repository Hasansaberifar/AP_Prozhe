#ifndef ASSIGNATASKTOAPROJECT_H
#define ASSIGNATASKTOAPROJECT_H

#include <QDialog>

namespace Ui {
class AssignATaskToAProject;
}

class AssignATaskToAProject : public QDialog
{
    Q_OBJECT

public:
    explicit AssignATaskToAProject(QWidget *parent = nullptr);
    ~AssignATaskToAProject();

private:
    Ui::AssignATaskToAProject *ui;
};

#endif // ASSIGNATASKTOAPROJECT_H

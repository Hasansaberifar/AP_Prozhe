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

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::AssignATaskToAProject *ui;
};

#endif // ASSIGNATASKTOAPROJECT_H

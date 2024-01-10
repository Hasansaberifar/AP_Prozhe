#ifndef ADDMEMBERTOPROJECT_H
#define ADDMEMBERTOPROJECT_H

#include <QDialog>

namespace Ui {
class AddMemberToProject;
}

class AddMemberToProject : public QDialog
{
    Q_OBJECT

public:
    explicit AddMemberToProject(QWidget *parent = nullptr);
    ~AddMemberToProject();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::AddMemberToProject *ui;
};

#endif // ADDMEMBERTOPROJECT_H

#ifndef REMOVEMEMBERFROMPROJECT_H
#define REMOVEMEMBERFROMPROJECT_H

#include <QDialog>

namespace Ui {
class RemoveMemberFromProject;
}

class RemoveMemberFromProject : public QDialog
{
    Q_OBJECT

public:
    explicit RemoveMemberFromProject(QWidget *parent = nullptr);
    ~RemoveMemberFromProject();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::RemoveMemberFromProject *ui;
};

#endif // REMOVEMEMBERFROMPROJECT_H

#ifndef EDITPROJECT_H
#define EDITPROJECT_H

#include <QDialog>

namespace Ui {
class EditProject;
}

class EditProject : public QDialog
{
    Q_OBJECT

public:
    explicit EditProject(QWidget *parent = nullptr);
    ~EditProject();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::EditProject *ui;
};

#endif // EDITPROJECT_H

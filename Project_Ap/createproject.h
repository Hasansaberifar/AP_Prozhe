#ifndef CREATEPROJECT_H
#define CREATEPROJECT_H

#include <QDialog>

namespace Ui {
class CreateProject;
}

class CreateProject : public QDialog
{
    Q_OBJECT

public:
    explicit CreateProject(QWidget *parent = nullptr);
    ~CreateProject();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::CreateProject *ui;
};

#endif // CREATEPROJECT_H

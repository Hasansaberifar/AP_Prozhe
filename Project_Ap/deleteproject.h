#ifndef DELETEPROJECT_H
#define DELETEPROJECT_H

#include <QDialog>

namespace Ui {
class DeleteProject;
}

class DeleteProject : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteProject(QWidget *parent = nullptr);
    ~DeleteProject();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::DeleteProject *ui;
};

#endif // DELETEPROJECT_H

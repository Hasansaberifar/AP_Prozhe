#ifndef ASSIGNATASKTOAPERSON_H
#define ASSIGNATASKTOAPERSON_H

#include <QDialog>

namespace Ui {
class AssignATaskToAPerson;
}

class AssignATaskToAPerson : public QDialog
{
    Q_OBJECT

public:
    explicit AssignATaskToAPerson(QWidget *parent = nullptr);
    ~AssignATaskToAPerson();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::AssignATaskToAPerson *ui;
};

#endif // ASSIGNATASKTOAPERSON_H
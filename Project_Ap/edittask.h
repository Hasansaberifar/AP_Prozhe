#ifndef EDITTASK_H
#define EDITTASK_H

#include <QDialog>

namespace Ui {
class EditTask;
}

class EditTask : public QDialog
{
    Q_OBJECT

public:
    explicit EditTask(QWidget *parent = nullptr);
    ~EditTask();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::EditTask *ui;
};

#endif // EDITTASK_H

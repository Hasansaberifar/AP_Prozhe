#ifndef CREATTASK_H
#define CREATTASK_H

#include <QDialog>

namespace Ui {
class CreatTask;
}

class CreatTask : public QDialog
{
    Q_OBJECT

public:
    explicit CreatTask(QWidget *parent = nullptr);
    ~CreatTask();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::CreatTask *ui;
};

#endif // CREATTASK_H

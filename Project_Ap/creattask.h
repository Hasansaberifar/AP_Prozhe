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

private:
    Ui::CreatTask *ui;
};

#endif // CREATTASK_H

#ifndef TASK_PAGE_H
#define TASK_PAGE_H

#include <QDialog>

namespace Ui {
class Task_Page;
}

class Task_Page : public QDialog
{
    Q_OBJECT

public:
    explicit Task_Page(QWidget *parent = nullptr);
    ~Task_Page();

private:
    Ui::Task_Page *ui;
};

#endif // TASK_PAGE_H

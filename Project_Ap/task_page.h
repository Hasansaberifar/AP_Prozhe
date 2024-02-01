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

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_10_clicked();

private:
    Ui::Task_Page *ui;
};

#endif // TASK_PAGE_H

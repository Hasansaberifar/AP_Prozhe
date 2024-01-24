#ifndef PROJECT_PAGE_H
#define PROJECT_PAGE_H

#include <QDialog>


namespace Ui {
class Project_Page;
}

class Project_Page : public QDialog
{
    Q_OBJECT

public:
    explicit Project_Page(QWidget *parent = nullptr);
    ~Project_Page();

private slots:
    void on_pushButton_10_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::Project_Page *ui;
};

#endif // PROJECT_PAGE_H

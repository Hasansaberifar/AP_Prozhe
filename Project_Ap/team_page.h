#ifndef TEAM_PAGE_H
#define TEAM_PAGE_H

#include <QDialog>

namespace Ui {
class Team_Page;
}

class Team_Page : public QDialog
{
    Q_OBJECT

public:
    explicit Team_Page(QWidget *parent = nullptr);
    ~Team_Page();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::Team_Page *ui;
};

#endif // TEAM_PAGE_H

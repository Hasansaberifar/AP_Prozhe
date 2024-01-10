#ifndef ORGANIZATION_PAGE_H
#define ORGANIZATION_PAGE_H

#include <QDialog>

namespace Ui {
class Organization_Page;
}

class Organization_Page : public QDialog
{
    Q_OBJECT

public:
    explicit Organization_Page(QWidget *parent = nullptr);
    ~Organization_Page();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_12_clicked();

private:
    Ui::Organization_Page *ui;
};

#endif // ORGANIZATION_PAGE_H

#ifndef ORGANIZATION_PAGE_H
#define ORGANIZATION_PAGE_H

#include <QDialog>

namespace Ui {
class General_page;
}

class General_page : public QDialog
{
    Q_OBJECT

public:
    explicit General_page(QWidget *parent = nullptr);
    ~General_page();

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
    Ui::General_page *ui;
};

#endif // ORGANIZATION_PAGE_H

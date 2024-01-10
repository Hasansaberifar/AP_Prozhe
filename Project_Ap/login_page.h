#ifndef LOGIN_PAGE_H
#define LOGIN_PAGE_H

#include <QDialog>

namespace Ui {
class Login_Page;
}

class Login_Page : public QDialog
{
    Q_OBJECT

public:
    explicit Login_Page(QWidget *parent = nullptr);
    ~Login_Page();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();



    void on_pushButton_clicked();

private:
    Ui::Login_Page *ui;
};

#endif // LOGIN_PAGE_H

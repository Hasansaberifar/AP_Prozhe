#ifndef REGISTER_LOGIN_PAGE_H
#define REGISTER_LOGIN_PAGE_H

#include <QDialog>

namespace Ui {
class Register_Login_Page;
}

class Register_Login_Page : public QDialog
{
    Q_OBJECT

public:
    explicit Register_Login_Page(QWidget *parent = nullptr);
    ~Register_Login_Page();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Register_Login_Page *ui;
};

#endif // REGISTER_LOGIN_PAGE_H

#ifndef FORGETPASSWORD_PAGE_H
#define FORGETPASSWORD_PAGE_H

#include <QDialog>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QMessageBox>
#include <QString>
#include <QStringList>

namespace Ui {
class ForgetPassword_page;
}

class ForgetPassword_page : public QDialog
{
    Q_OBJECT

public:
    explicit ForgetPassword_page(QWidget *parent = nullptr);
    ~ForgetPassword_page();

private slots:
    void on_pushButton_2_clicked();

    void on_SubmtBTN_clicked();

private:
    Ui::ForgetPassword_page *ui;
};

#endif // FORGETPASSWORD_PAGE_H

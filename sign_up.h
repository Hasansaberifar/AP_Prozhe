#ifndef SIGN_UP_H
#define SIGN_UP_H

#include <QDialog>
#include <QCoreApplication>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QFile>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class Sign_up;
}

class Sign_up : public QDialog
{
    Q_OBJECT

public:
    explicit Sign_up(QWidget *parent = nullptr);
    ~Sign_up();

private slots:
    void on_pushButton_clicked();

    void on_signBTN_clicked();

private:
    Ui::Sign_up *ui;
};

#endif // SIGN_UP_H

#ifndef SETDATE_H
#define SETDATE_H

#include <QDialog>

namespace Ui {
class SetDate;
}

class SetDate : public QDialog
{
    Q_OBJECT

public:
    explicit SetDate(QWidget *parent = nullptr);
    ~SetDate();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SetDate *ui;
};

#endif // SETDATE_H

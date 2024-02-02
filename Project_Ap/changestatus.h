#ifndef CHANGESTATUS_H
#define CHANGESTATUS_H

#include <QDialog>

namespace Ui {
class Changestatus;
}

class Changestatus : public QDialog
{
    Q_OBJECT

public:
    explicit Changestatus(QWidget *parent = nullptr);
    ~Changestatus();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Changestatus *ui;
};

#endif // CHANGESTATUS_H

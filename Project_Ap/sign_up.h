#ifndef SIGN_UP_H
#define SIGN_UP_H

#include <QDialog>

namespace Ui {
class Sign_up;
}

class Sign_up : public QDialog
{
    Q_OBJECT

public:
    explicit Sign_up(QWidget *parent = nullptr);
    ~Sign_up();

private:
    Ui::Sign_up *ui;
};

#endif // SIGN_UP_H

#ifndef CREATE_ORGANIZATION_H
#define CREATE_ORGANIZATION_H

#include <QDialog>

namespace Ui {
class Create_Organization;
}

class Create_Organization : public QDialog
{
    Q_OBJECT

public:
    explicit Create_Organization(QWidget *parent = nullptr);
    ~Create_Organization();

private:
    Ui::Create_Organization *ui;
};

#endif // CREATE_ORGANIZATION_H

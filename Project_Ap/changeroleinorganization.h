#ifndef CHANGEROLEINORGANIZATION_H
#define CHANGEROLEINORGANIZATION_H

#include <QDialog>

namespace Ui {
class ChangeRoleInOrganization;
}

class ChangeRoleInOrganization : public QDialog
{
    Q_OBJECT

public:
    explicit ChangeRoleInOrganization(QWidget *parent = nullptr);
    ~ChangeRoleInOrganization();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::ChangeRoleInOrganization *ui;
};

#endif // CHANGEROLEINORGANIZATION_H

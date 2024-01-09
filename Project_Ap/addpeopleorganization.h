#ifndef ADDPEOPLEORGANIZATION_H
#define ADDPEOPLEORGANIZATION_H

#include <QDialog>

namespace Ui {
class AddPeopleOrganization;
}

class AddPeopleOrganization : public QDialog
{
    Q_OBJECT

public:
    explicit AddPeopleOrganization(QWidget *parent = nullptr);
    ~AddPeopleOrganization();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::AddPeopleOrganization *ui;
};

#endif // ADDPEOPLEORGANIZATION_H

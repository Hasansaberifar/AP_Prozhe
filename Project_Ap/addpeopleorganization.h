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

private:
    Ui::AddPeopleOrganization *ui;
};

#endif // ADDPEOPLEORGANIZATION_H

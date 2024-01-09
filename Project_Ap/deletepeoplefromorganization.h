#ifndef DELETEPEOPLEFROMORGANIZATION_H
#define DELETEPEOPLEFROMORGANIZATION_H

#include <QDialog>

namespace Ui {
class DeletePeopleFromOrganization;
}

class DeletePeopleFromOrganization : public QDialog
{
    Q_OBJECT

public:
    explicit DeletePeopleFromOrganization(QWidget *parent = nullptr);
    ~DeletePeopleFromOrganization();

private:
    Ui::DeletePeopleFromOrganization *ui;
};

#endif // DELETEPEOPLEFROMORGANIZATION_H

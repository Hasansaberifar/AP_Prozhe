#ifndef VIEWORGANIZATION_H
#define VIEWORGANIZATION_H

#include <QDialog>

namespace Ui {
class ViewOrganization;
}

class ViewOrganization : public QDialog
{
    Q_OBJECT

public:
    explicit ViewOrganization(QWidget *parent = nullptr);
    ~ViewOrganization();

private:
    Ui::ViewOrganization *ui;
};

#endif // VIEWORGANIZATION_H

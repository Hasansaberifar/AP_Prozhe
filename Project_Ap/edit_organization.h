#ifndef EDIT_ORGANIZATION_H
#define EDIT_ORGANIZATION_H

#include <QDialog>

namespace Ui {
class Edit_Organization;
}

class Edit_Organization : public QDialog
{
    Q_OBJECT

public:
    explicit Edit_Organization(QWidget *parent = nullptr);
    ~Edit_Organization();

private:
    Ui::Edit_Organization *ui;
};

#endif // EDIT_ORGANIZATION_H

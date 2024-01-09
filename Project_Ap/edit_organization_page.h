#ifndef EDIT_ORGANIZATION_PAGE_H
#define EDIT_ORGANIZATION_PAGE_H

#include <QDialog>

namespace Ui {
class Edit_Organization_page;
}

class Edit_Organization_page : public QDialog
{
    Q_OBJECT

public:
    explicit Edit_Organization_page(QWidget *parent = nullptr);
    ~Edit_Organization_page();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Edit_Organization_page *ui;
};

#endif // EDIT_ORGANIZATION_PAGE_H

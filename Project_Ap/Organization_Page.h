#ifndef ORGANIZATION_PAGE_H
#define ORGANIZATION_PAGE_H

#include <QDialog>

namespace Ui {
class General_page;
}

class General_page : public QDialog
{
    Q_OBJECT

public:
    explicit General_page(QWidget *parent = nullptr);
    ~General_page();

private slots:
    void on_pushButton_clicked();

private:
    Ui::General_page *ui;
};

#endif // ORGANIZATION_PAGE_H

#ifndef PROJECT_PAGE_H
#define PROJECT_PAGE_H

#include <QDialog>

namespace Ui {
class Project_Page;
}

class Project_Page : public QDialog
{
    Q_OBJECT

public:
    explicit Project_Page(QWidget *parent = nullptr);
    ~Project_Page();

private:
    Ui::Project_Page *ui;
};

#endif // PROJECT_PAGE_H

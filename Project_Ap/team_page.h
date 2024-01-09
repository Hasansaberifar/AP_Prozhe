#ifndef TEAM_PAGE_H
#define TEAM_PAGE_H

#include <QDialog>

namespace Ui {
class Team_Page;
}

class Team_Page : public QDialog
{
    Q_OBJECT

public:
    explicit Team_Page(QWidget *parent = nullptr);
    ~Team_Page();

private:
    Ui::Team_Page *ui;
};

#endif // TEAM_PAGE_H

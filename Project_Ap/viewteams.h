#ifndef VIEWTEAMS_H
#define VIEWTEAMS_H

#include <QDialog>

namespace Ui {
class ViewTeams;
}

class ViewTeams : public QDialog
{
    Q_OBJECT

public:
    explicit ViewTeams(QWidget *parent = nullptr);
    ~ViewTeams();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ViewTeams *ui;
};

#endif // VIEWTEAMS_H

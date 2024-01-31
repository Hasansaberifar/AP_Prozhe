#ifndef VIEWMEMBERPROJECT_H
#define VIEWMEMBERPROJECT_H

#include <QDialog>

namespace Ui {
class ViewMemberProject;
}

class ViewMemberProject : public QDialog
{
    Q_OBJECT

public:
    explicit ViewMemberProject(QWidget *parent = nullptr);
    ~ViewMemberProject();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ViewMemberProject *ui;
};

#endif // VIEWMEMBERPROJECT_H

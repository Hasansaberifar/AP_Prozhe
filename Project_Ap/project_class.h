#ifndef PROJECT_CLASS_H
#define PROJECT_CLASS_H
#include<QString>
class Project_Class
{
private:
     QString name_project,title_project,status_project;
public:
    Project_Class();

    Project_Class (QString name,QString title,QString status);
    QString get_nameproject();
    QString get_titleproject();
    QString get_statusproject();

};

#endif // PROJECT_CLASS_H

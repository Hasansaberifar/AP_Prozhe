#ifndef PROJECT_CLASS_H
#define PROJECT_CLASS_H
#include<QString>
class Project_Class
{
private:
     QString name,title,status;
public:
    Project_Class();

    Project_Class (QString name,QString title,QString status);
    QString get_name();
    QString get_title();
    QString get_status();

};

#endif // PROJECT_CLASS_H

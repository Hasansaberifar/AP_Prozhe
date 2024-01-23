#ifndef TASK_CLASS_H
#define TASK_CLASS_H
#include<QString>
class Task_Class
{
private:
    QString name_Task;
    QString title_Task;
    QString Date_Task;
    QString Priority_Task;
public:
    Task_Class();
    Task_Class(QString name,QString title,QString Date,QString Priority);
    QString get_nametask();
    QString get_titletask();
    QString get_Datetask();
    QString get_prioritytask();

};

#endif // TASK_CLASS_H

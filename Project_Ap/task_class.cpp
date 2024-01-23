#include "task_class.h"

Task_Class::Task_Class() {}
Task_Class::Task_Class(QString name,QString title,QString Date,QString Priority){
    name_Task=name;
    title_Task=title;
    Date_Task=Date;
    Priority_Task=Priority;
}
QString Task_Class ::get_nametask(){ return name_Task; }
QString Task_Class ::get_titletask(){ return title_Task; }
QString Task_Class ::get_Datetask(){ return Date_Task; }
QString Task_Class ::get_prioritytask(){ return Priority_Task; }

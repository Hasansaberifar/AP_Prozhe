#include "project_class.h"
Project_Class::Project_Class() {}
Project_Class ::Project_Class(QString name,QString title,QString status){
    this->name_project=name;
    this->title_project=title;
    this->status_project=status;
}
Project_Class::Project_Class(QString name,QString title){
    name_project=name;
    title_project=title;
}
QString Project_Class:: get_nameproject(){  return name_project; }
QString  Project_Class::get_titleproject(){ return title_project; }
QString  Project_Class::get_statusproject(){ return status_project;}

#include "project_class.h"

Project_Class::Project_Class() {}
Project_Class ::Project_Class(QString name,QString title,QString status){
    this->name=name;
    this->title=title;
    this->status=status;
}
QString Project_Class:: get_name(){  return name; }
QString  Project_Class::get_title(){ return title; }
QString  Project_Class::get_status(){ return status;}

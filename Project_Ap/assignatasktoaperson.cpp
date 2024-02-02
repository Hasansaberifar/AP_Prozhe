#include "assignatasktoaperson.h"
#include "ui_assignatasktoaperson.h"
#include<QFile>
#include<QTextStream>
#include<QMessageBox>
AssignATaskToAPerson::AssignATaskToAPerson(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AssignATaskToAPerson)
{
    ui->setupUi(this);
}

AssignATaskToAPerson::~AssignATaskToAPerson()
{
    delete ui;
}

void AssignATaskToAPerson::on_pushButton_2_clicked()
{
    this->close();
}


void AssignATaskToAPerson::on_pushButton_clicked()
{
    QString nameperson=ui->PersonNameForAssign->text();
    QString taskname=ui->TaskNameForAssignPerson->text();
    QFile file("Log_in.txt");
    QStringList lines;
    QTextStream in(&file);
    while(!in.atEnd()){
        lines.append(in.readLine());
    }
    for(int i=0;i<lines.size();i++){
        if(lines[i]==nameperson){
            lines[i]=nameperson+"  "+taskname;
        }
    }
    file.resize(0);
    QTextStream out(&file);
    for(const QString& line:lines){
        out<<line<<"\n";
    }
    QMessageBox::information(nullptr,"Title : assign","assign was succesful !");
    file.close();
}


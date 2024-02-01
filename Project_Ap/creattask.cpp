#include "creattask.h"
#include "ui_creattask.h"
#include<QFile>
#include<QTextStream>
#include<QMessageBox>
CreatTask::CreatTask(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CreatTask)
{
    ui->setupUi(this);
}

CreatTask::~CreatTask()
{
    delete ui;
}

void CreatTask::on_pushButton_2_clicked()
{
    this->close();
}


void CreatTask::on_pushButton_clicked()
{
    QString name=ui->TaskName->text();
    QString title=ui->TaskTitle->text();
    QString filename1=name+".txt";
    QFile file(filename1);

    QFile file1("Alltasks.txt");

    if (!file1.open(QIODevice::WriteOnly | QIODevice::Append)) {
        qDebug() << "Error opening file";
        return ;
    }
    QTextStream out(&file1);
    out<<name<<"\n";
    file1.close();

    if (file.exists()){
        QMessageBox::critical(nullptr, "Title : Create Project", "This name exists !");
    }
    else if(name == "" || title == ""){

        QMessageBox::critical(nullptr, "Title : Create Project", "Please enter name and title :(");
    }
    else if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {

        QTextStream stream(&file);
        stream << name << "\n" << title <<"\n";

        file.close();
        QMessageBox::information(nullptr, "Title : Create Project", "The Project was created successfully !");

    }



    this->hide();
}


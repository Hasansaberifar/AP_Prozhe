#include "assignatasktoaproject.h"
#include "ui_assignatasktoaproject.h"
#include<QFile>
#include<QMessageBox>
#include<QTextStream>
AssignATaskToAProject::AssignATaskToAProject(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AssignATaskToAProject)
{
    ui->setupUi(this);
}

AssignATaskToAProject::~AssignATaskToAProject()
{
    delete ui;
}

void AssignATaskToAProject::on_pushButton_2_clicked()
{
    this->close();
}


void AssignATaskToAProject::on_pushButton_clicked()
{
    QString projectname=ui->ProjectNameForAssign->text();
    QString taskname=ui->TaskNameForAssignProject->text();

    QFile file(projectname+".txt");
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        qDebug() << "Error opening Allprojects.txt";
        return;
    }
    if(!file.exists())
    {
        QMessageBox::critical(nullptr,"Title: assign","this file dont exist !");

    }
    else{

    QStringList lines;
    QTextStream in(&file);
    while (!in.atEnd()) {
        lines.append(in.readLine());
    }

    lines[0]=lines[0]+ "  " +taskname;

    file.resize(0);
    QTextStream out(&file);
    for (const QString& line : lines) {
        out << line << "\n";
    }
    }
    file.close();


}


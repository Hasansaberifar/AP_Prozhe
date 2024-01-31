#include "addmembertoproject.h"
#include "ui_addmembertoproject.h"
#include<QFile>
#include<QTextStream>
#include<QMessageBox>
AddMemberToProject::AddMemberToProject(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddMemberToProject)
{
    ui->setupUi(this);
}

AddMemberToProject::~AddMemberToProject()
{
    delete ui;
}

void AddMemberToProject::on_pushButton_2_clicked()
{
    this->close();
}


void AddMemberToProject::on_pushButton_clicked()
{
    QString nameperson = ui->NamePersonForAddToProject->text();
    QString roleperson = ui->RoleForAddMember->text();
    QString projectname = ui->Projectname->text();

  //  bool found1=false;
  //  QFile file(projectname+".txt");

 //   QTextStream in(&file);
  //  while(!in.atEnd()){
     ///   QString line = in.readLine();
   //     if (line.contains(nameperson) ){
   //         found1 = true;
         //   break;
      //  }
///file.close();
    //}//
  ///  if (found1) {
   //     QMessageBox::critical(nullptr, " Add Member", "This name exists in the project ! ");
    //    this->close();
      //  return;
//    }
    QFile usersFile("Log_in.txt");
    if (usersFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream usersStream(&usersFile);
        bool found = false;

        while (!usersStream.atEnd()) {
            QString line = usersStream.readLine();
            if (line == nameperson) {
                found = true;
                break;
            }
        }

        usersFile.close();

        if (!found) {
            QMessageBox::critical(nullptr, "Title: Add Member", "The user does not exist!");
            this->close();
            return;
        }
    } else {
        QMessageBox::critical(nullptr, "Title: Add Member", "Failed to open the users file!");
        this->close();
        return;
    }

    QString projectFileName = projectname + ".txt";
    QFile projectFile(projectFileName);
    if (projectFile.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QTextStream projectStream(&projectFile);
        while(!projectFile.atEnd()){
            projectFile.readLine();

        }
        projectStream << nameperson << "\n" << roleperson << "\n";
        projectFile.close();
        QMessageBox::information(nullptr, "Title: Add Member", "Added successfully!");
        this->close();
    } else {
        QMessageBox::critical(nullptr, "Title: Add Member", "Failed to open the project file!");
        this->close();
    }
}


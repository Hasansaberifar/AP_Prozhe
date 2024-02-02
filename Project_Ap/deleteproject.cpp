#include "deleteproject.h"
#include "ui_deleteproject.h"
#include<QFile>
#include<QMessageBox>
#include<QStringList>
DeleteProject::DeleteProject(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DeleteProject)
{
    ui->setupUi(this);
}

DeleteProject::~DeleteProject()
{
    delete ui;
}

void DeleteProject::on_pushButton_2_clicked()
{
    this->close();
}


void DeleteProject::on_pushButton_clicked()
{

    QString oldname1 = ui->ProjectNameForDelete->text();
    QString oldname = oldname1 + ".txt";

    QFile file1("Allprojects.txt");
    if (!file1.open(QIODevice::ReadWrite | QIODevice::Text)) {
        qDebug() << "Error opening Allprojects.txt";
        return;
    }


    QStringList lines;
    QTextStream in(&file1);
    while (!in.atEnd()) {
        lines.append(in.readLine());
    }


    QStringList lines2;
    for (const QString& line : lines) {
        if (line != oldname1+"  Active" && line != oldname1 + "  UnActive") {
            lines2.append(line);
        }
    }


    file1.resize(0);
    QTextStream out(&file1);
    for (const QString& line : lines2) {
        out << line << "\n";
    }
    file1.close();

    // Delete the actual project file
    QFile file(oldname);
    if (file.exists() && file.remove()) {
        QMessageBox::information(nullptr, "Delete File", "The project was deleted successfully!");
    } else {
        QMessageBox::critical(nullptr, "Delete File", "File not exists or could not be deleted.");
    }

    this->hide();

}

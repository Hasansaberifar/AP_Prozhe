#include "editproject.h"
#include "ui_editproject.h"
#include<QFile>
#include<QMessageBox>
#include<QTextStream>
EditProject::EditProject(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::EditProject)
{
    ui->setupUi(this);
}

EditProject::~EditProject()
{
    delete ui;
}

void EditProject::on_pushButton_2_clicked()
{
    this->close();
}


void EditProject::on_pushButton_clicked()
{
    QString namefile1 = ui->OldNameForProject->text() ;
    QString namefile=namefile1+".txt";
    QString name = ui->NewNameForProject->text();
    QString title = ui->newTitleForProject->text();

    QFile file1("Allprojects.txt");
    if (!file1.open(QIODevice::ReadWrite)) {
        qDebug() << "Error opening file";
        return ;
    }

    QStringList lines;
    QTextStream in(&file1);
    while (!in.atEnd()) {
        lines.append(in.readLine());
    }

    for (int i = 0; i < lines.size(); ++i) {
        if (lines[i].endsWith(namefile1 + "  Active")) {
            lines[i]=name+"  Active";
        } else if (lines[i].endsWith(namefile1 + "  UnActive")) {
            lines[i]=name+"  UnActive";
        }
    }

    file1.resize(0);
    QTextStream out(&file1);
    for (const QString& line : lines) {
        out << line << "\n";
    }

    file1.close();
    QString newFilename = name + ".txt";
    QFile::rename(namefile, newFilename);

    QFile file(newFilename);
    if (file.exists()) {
        if (file.open(QIODevice::ReadWrite | QIODevice::Text)) {
            QTextStream stream(&file);
            QStringList lines;
            while (!stream.atEnd()) {
                QString line = stream.readLine();
                lines.append(line);
            }
            file.close();

            if (lines.size() >= 2) {
                lines.removeFirst();
                lines.removeFirst();

                lines.prepend(name);
                lines.prepend(title);

                if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
                    QTextStream writeStream(&file);
                    foreach (const QString& line, lines) {
                        writeStream << line << "\n";
                    }
                    file.close();
                }
            }
            QMessageBox::information(nullptr, "Title: Edit Project", "The Project was edited successfully!");
            this->hide();
        } else {
            QMessageBox::critical(nullptr, "Title: Edit Project", "Failed to open the file for reading and writing.");
        }
    } else {
        QMessageBox::critical(nullptr, "Title: Edit Project", "This name does not exist!");
    }
}

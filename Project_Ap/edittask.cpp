#include "edittask.h"
#include "ui_edittask.h"
#include<QFile>
#include<QMessageBox>
#include<QTextStream>
EditTask::EditTask(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::EditTask)
{
    ui->setupUi(this);
}

EditTask::~EditTask()
{
    delete ui;
}

void EditTask::on_pushButton_2_clicked()
{
    this->close();
}


void EditTask::on_pushButton_clicked()
{
    QString namefile = ui->OdlNameForTask->text() + ".txt";
    QString name = ui->NewNameForTask->text();
    QString title = ui->NewTitleForTask->text();


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
    }}




#include "deletetask.h"
#include "ui_deletetask.h"
#include<QFile>
#include<QMessageBox>

DeleteTask::DeleteTask(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DeleteTask)
{
    ui->setupUi(this);
}

DeleteTask::~DeleteTask()
{
    delete ui;
}

void DeleteTask::on_pushButton_clicked()
{
    QString oldname = ui->TaskNameForDelete->text();
    QString oldname1=oldname+".txt";
    QFile file1("Alltasks.txt");

    if (!file1.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "خطا در باز کردن فایل";
        return ;
    }


    QTextStream in(&file1);


    QString newText;


    while (!in.atEnd()) {

        QString line = in.readLine();


        if (line.contains(oldname)) {
            continue;
        }


        newText += line + "\n";
    }


    file1.close();


    QFile newFile("Alltasks.txt");
    if (!newFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "خطا در باز کردن فایل جدید";
        return ;
    }


    QTextStream out(&newFile);


    out << newText;


    newFile.close();
    QFile file(oldname1);
    if(file.exists()){
        if(file.remove())
            QMessageBox::information(nullptr, "Title : Delete file", "The Project was Deleted successfully !");
    }
    else
    {
        QMessageBox::critical(nullptr, "Title : Delete file", "File not Exists");
    }
    this->hide();
}


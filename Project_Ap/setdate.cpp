#include "setdate.h"
#include "ui_setdate.h"
#include<QFile>
#include<QTextStream>
#include<QMessageBox>

SetDate::SetDate(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SetDate)
{
    ui->setupUi(this);
}

SetDate::~SetDate()
{
    delete ui;
}

void SetDate::on_pushButton_clicked()
{
    QString Nametask = ui->taskName->text();
    QString date=ui->Date->text();
    QFile file(Nametask+".txt");

    if(!file.exists()){
        QMessageBox::critical(nullptr,"Title : Set Date ","File Not Exists !");
        return ;
    }
        if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
            qDebug() << "خطا در باز کردن فایل";
            return ;
        }

        QTextStream in(&file);

        QString newText;

        while (!in.atEnd()) {
            in.readLine();
        }

        in<<date<<"\n";
        QMessageBox::information(nullptr, "Title : Set Date", "Set Date was succesfully !");

        file.close();


    }




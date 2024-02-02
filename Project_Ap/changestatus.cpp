#include "changestatus.h"
#include "ui_changestatus.h"
#include<QFile>
#include<QTextStream>
#include<QMessageBox>
Changestatus::Changestatus(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Changestatus)
{
    ui->setupUi(this);
}

Changestatus::~Changestatus()
{
    delete ui;
}

void Changestatus::on_pushButton_clicked()
{
    QString pname=ui->projectname->text();
   // QString status=ui->status->text();
    QFile file("Allprojects.txt");
    if (!file.open(QIODevice::ReadWrite)) {
        qDebug() << "Error opening file";
        return ;
    }

    QStringList lines;
    QTextStream in(&file);
    while (!in.atEnd()) {
        lines.append(in.readLine());
    }

    for (int i = 0; i < lines.size(); ++i) {
        if (lines[i].contains(pname+"  Active")) {
            lines[i] = pname+"  UnActive";
        }
        else if(lines[i].contains(pname+"  UnActive"))
            lines[i]=pname+"  Active";
    }

    file.seek(0);
    QTextStream out(&file);
    for (QString line : lines) {
        out << line << "\n";
    }
    QMessageBox::information(nullptr,"Title : change status ","change status was succesfully !");
    this->hide();
    file.close();


}


void Changestatus::on_pushButton_2_clicked()
{
    this->close();
}


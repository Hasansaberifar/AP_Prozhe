#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"register_login_page.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    this->close();
}


void MainWindow::on_pushButton_2_clicked()
{
    Register_Login_Page *page1=new Register_Login_Page(this);
    page1->show();
}


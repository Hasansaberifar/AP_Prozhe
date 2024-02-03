#include "login_page.h"
#include "ui_login_page.h"
#include"forgetpassword_page.h"
#include"Organization_Page.h"
Login_Page::Login_Page(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login_Page)
{
    ui->setupUi(this);
}

Login_Page::~Login_Page()
{
    delete ui;
}

void Login_Page::on_pushButton_3_clicked()
{
    this->close();
}
void Login_Page::on_FPBTN_clicked()
{
    ForgetPassword_page *page=new ForgetPassword_page(this);
    page->show();
}


void Login_Page::on_LoginBTN_clicked()
{
    if (ui->PassInLogin->text().length() == 0 or ui->UserInLogin->text().length() == 0) {
        QMessageBox::information(this, "Error", "Please Fill All the Requirments !");
        return;
    }
    // Open the file for reading
    QFile file("Log_in.json");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);

        // Read the entire file content
        QString fileContent = in.readAll();

        // Split the content into JSON blocks based on opening braces
        QStringList jsonBlocks = fileContent.split('{', Qt::SkipEmptyParts);

        // Iterate through each JSON block
        for (const QString& blockData : jsonBlocks) {
            // Add the opening brace back to the block data
            QString blockWithBrace = "{" + blockData;

            // Check for JSON validity (optional)
            QJsonParseError error;
            QJsonDocument jsonDoc = QJsonDocument::fromJson(blockWithBrace.toUtf8(), &error);

            if (error.error != QJsonParseError::NoError) {
                qDebug() << "JSON Parsing Error:" << error.errorString();
                continue; // Skip to the next block in case of an error
            }

            // Process the JSON object as needed
            if (jsonDoc.isObject()) {
                QJsonObject jsonObj = jsonDoc.object();
                // Process the JSON object
                QString username = jsonObj["username"].toString();
                QString password = jsonObj["password"].toString();
                if(ui->PassInLogin->text()==password and ui->UserInLogin->text()==username)
                {
                    Organization_Page *page=new Organization_Page(this);
                    page->show();
                    return;
                }
            } else {
                qDebug() << "Invalid JSON block:" << blockWithBrace;
            }
        }

        // Close the file
        file.close();
        QMessageBox::information(this, "Error", "Password or username is entered incorroectly !");
    } else {
        qDebug() << "Error opening file:" << file.errorString();
    }
}

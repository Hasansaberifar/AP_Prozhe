#include "forgetpassword_page.h"
#include "ui_forgetpassword_page.h"
#include"Organization_Page.h"
ForgetPassword_page::ForgetPassword_page(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ForgetPassword_page)
{
    ui->setupUi(this);
}

ForgetPassword_page::~ForgetPassword_page()
{
    delete ui;
}

void ForgetPassword_page::on_pushButton_2_clicked()
{
    this->close();
}

void ForgetPassword_page::on_SubmtBTN_clicked()
{
    if (ui->UserInForgetPass->text().length() == 0) {
        QMessageBox::information(this, "Error", "Please Fill Username Requirments !");
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
                if(ui->UserInForgetPass->text()==username)
                {
                    ui->PassForgetPass->setText(password);
                    return;
                }
            } else {
                qDebug() << "Invalid JSON block:" << blockWithBrace;
            }
        }

        // Close the file
        file.close();
        QMessageBox::information(this, "Error", "username is entered incorroectly !");
    } else {
        qDebug() << "Error opening file:" << file.errorString();
    }
}


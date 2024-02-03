#include "sign_up.h"
#include "mainwindow.h"
#include "ui_sign_up.h"

Sign_up::Sign_up(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Sign_up)
{
    ui->setupUi(this);
}

Sign_up::~Sign_up()
{
    delete ui;
}

void Sign_up::on_pushButton_clicked()
{
    this->close();
}



void Sign_up::on_signBTN_clicked()
{
    // Read the existing JSON file
    if (ui->Password->text().length() == 0 or ui->Username->text().length() == 0) {
        QMessageBox::information(this, "Error", "Please Fill All the Requirments !");
        return;
    }
    // Open the file for reading
    QJsonObject newUser;
    bool isSmall = false;
    bool isCapital = false;
    newUser["username"] = ui->Username->text();
    if(ui->Password->text().length() >= 9) {
        for(int i =0;i<ui->Password->text().length();i++){
            if(ui->Password->text()[i] >= 'a' and ui->Password->text()[i] <= 'z')
            {
                isSmall = true;
            }
            if(ui->Password->text()[i] >= 'A' and ui->Password->text()[i] <= 'Z')
            {
                isCapital = true;
            }
        }
    }
    else
    {
        QMessageBox::information(this, "Error", "the password should be taller !");
        return;
    }
    if(!isCapital or !isSmall)
    {
        QMessageBox::information(this, "Error", "Use capital and small words in password !");
        return;
    }
    newUser["password"] = ui->Password->text();
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
                if(username==ui->Username->text())
                {
                    QMessageBox::information(this, "Error", "Username is already taken ");
                    return;
                }
            } else {
                qDebug() << "Invalid JSON block:" << blockWithBrace;
            }
        }

        // Close the file
        file.close();
    } else {
        qDebug() << "Error opening file:" << file.errorString();
    }
    // Create a JSON document with the new user object
    QJsonDocument jsonDocument;
    jsonDocument.setObject(newUser);
    // Open the file in append mode to add new content
    //QFile file("Log_in.json");
    if (file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
        file.write(jsonDocument.toJson());
        //file.write("\n"); // Add a newline for better readability (optional)
        file.close();
    } else {
        qDebug() << "Error opening file:" << file.errorString();
    }
    this->close();
}


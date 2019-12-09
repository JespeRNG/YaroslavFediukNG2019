#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::toencrypt()
{
    ui->lineEdit_res->setText("");
    //expanding the key in word length
    QString input = "", key = "", output = "";
    QString key_buf = "";

    input = ui->lineEdit_inp->text();
    key = ui->lineEdit_key->text();
    key_buf = key;


    double times = input.length()/key.length();
    int i = 1;

    while (i < times)
    {
        key += key_buf;
        i++;
    }
    if((input.length()%key.length()) != 0)
        key += key_buf;

    key.chop(key.length()-input.length());

    qDebug() << key;

    //encrypting words
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    string alphau = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    //Converting some variables from QString -> string
    string input_s = input.toUtf8().constData();
    string key_s = key.toUtf8().constData();

    int key_codes[50], out_codes[50], in_codes[50];

    for(int i=0; i < input.length(); i++)
    {
        if (int(input_s[i]) >= 64 && int(input_s[i])<=90)
            in_codes[i] = alphau.find(input_s[i]);
        else
            in_codes[i] = alpha.find(input_s[i]);
    }

    for(int i=0; i < key.length(); i++)
    {
        key_codes[i] = alpha.find(key_s[i]);
        out_codes[i] = in_codes[i] + key_codes[i]+1;

        if(out_codes[i] > 26)
            out_codes[i] = out_codes[i]-26;

        if (int(input_s[i]) >= 64 && int(input_s[i])<=90)
            out_codes[i] += 64;
        else
            out_codes[i] += 96;
    }

    //Converting codes to QString for a proper output
    string output_s = "";

    for(int i=0; i < input.length(); i++)
    {
        output_s += (char)out_codes[i];
    }

    ui->lineEdit_res->setText(QString::fromStdString(output_s));

}

void MainWindow::todecrypt()
{
    ui->lineEdit_res->setText("");
    //expanding the key in word length
    QString input = "", key = "", output = "";
    QString key_buf = "";

    input = ui->lineEdit_inp->text();
    key = ui->lineEdit_key->text();
    double times = input.length()/key.length();
    key_buf = key;

    int i = 1;

    while (i < times)
    {
        key += key_buf;
        i++;
    }
    if((input.length()%key.length()) != 0)
        key += key_buf;

    key.chop(key.length()-input.length());

    //encrypting words
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    string alphau = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    //Converting some variables from QString -> string
    string input_s = input.toUtf8().constData();
    string key_s = key.toUtf8().constData();

    int key_codes[50], out_codes[50], in_codes[50];

    for(int i=0; i < input.length(); i++)
    {
        if (int(input_s[i]) >= 64 && int(input_s[i])<=90)
            in_codes[i] = alphau.find(input_s[i]);
        else
            in_codes[i] = alpha.find(input_s[i]);
    }

    for(int i=0; i < key.length(); i++)
    {
        key_codes[i] = alpha.find(key_s[i]);
        out_codes[i] = in_codes[i] - key_codes[i] + 1;
        if(out_codes[i] < 0)
            out_codes[i] = out_codes[i] + 26;
        if (int(input_s[i]) >= 64 && int(input_s[i]) <= 90)
            out_codes[i] += 64;
        else
            out_codes[i] += 96;
    }

    for (int i=0; i < key.length(); i++)
    {
        qDebug() << "Code " << i << " :" << out_codes[i] << endl;
    }

    //Converting codes to QString for a proper output
    string output_s = "";

    for(int i=0; i < input.length(); i++)
    {
        output_s += (char)out_codes[i];
    }

    ui->lineEdit_res->setText(QString::fromStdString(output_s));
}

void MainWindow::on_pushButton_toenc_clicked()
{
    MainWindow::toencrypt();
}

void MainWindow::on_pushButton_todec_clicked()
{
    MainWindow::todecrypt();
}

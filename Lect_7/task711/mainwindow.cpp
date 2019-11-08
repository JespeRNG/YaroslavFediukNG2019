#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <math.h>

double num_x;
double num_y;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_0, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_plus, SIGNAL(clicked()), this, SLOT(actions()));
    connect(ui->pushButton_minus, SIGNAL(clicked()), this, SLOT(actions()));
    connect(ui->pushButton_multi, SIGNAL(clicked()), this, SLOT(actions()));
    connect(ui->pushButton_div, SIGNAL(clicked()), this, SLOT(actions()));
    connect(ui->pushButton_sqrt, SIGNAL(clicked()), this, SLOT(actions()));
    connect(ui->pushButton_power, SIGNAL(clicked()), this, SLOT(actions()));

    ui->pushButton_plus->setCheckable(true);
    ui->pushButton_minus->setCheckable(true);
    ui->pushButton_power->setCheckable(true);
    ui->pushButton_multi->setCheckable(true);
    ui->pushButton_div->setCheckable(true);
    ui->pushButton_sqrt->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digits_numbers()
{
    QPushButton *button = (QPushButton *)sender();

    double all_numbers;
    all_numbers = (ui->Display->text()+button->text().remove("&")).toDouble();
    new_res = QString::number(all_numbers);

    ui->Display->setText(new_res.remove("&"));
}

void MainWindow::on_pushButton_dot_clicked()
{
    if(!(ui->Display->text().contains('.')))
       ui->Display->setText(ui->Display->text() + ".");
}

void MainWindow::actions()
{
    QPushButton *button = (QPushButton *)sender();

    num_x = ui->Display->text().toDouble();

    ui->Display->setText("0");
    if(ui->pushButton_sqrt->isChecked()) on_pushButton_equals_clicked();

    button->setChecked(true);
}

void MainWindow::on_pushButton_equals_clicked()
{
    double result;
    QString new_label;

    num_y = ui->Display->text().toDouble();

    if(ui->pushButton_plus->isChecked()){
        result = num_x + num_y;
        new_label = QString::number(result, 'g', 15);
        ui->Display->setText(new_label);
        ui->pushButton_plus->setChecked(false);
    }else if(ui->pushButton_minus->isChecked()){
        result = num_x - num_y;
        new_label = QString::number(result, 'g', 15);
        ui->Display->setText(new_label);
        ui->pushButton_minus->setChecked(false);
    }else if(ui->pushButton_multi->isChecked()){
        result = num_x * num_y;
        new_label = QString::number(result, 'g', 15);
        ui->Display->setText(new_label);
        ui->pushButton_multi->setChecked(false);
    }else if(ui->pushButton_div->isChecked()){
        result = num_x / num_y;
        new_label = QString::number(result, 'g', 15);
        ui->Display->setText(new_label);
        ui->pushButton_div->setChecked(false);

    }else if(ui->pushButton_power->isChecked()){
        result = num_x;

        for(int i=1; i < num_y; i++){
            result = result * num_x;
        }

        if (num_y == 0) result = 0;

        new_label = QString::number(result, 'g', 15);
        ui->Display->setText(new_label);
        ui->pushButton_power->setChecked(false);
    }else if(ui->pushButton_sqrt->isChecked()){
        result = sqrt(num_x);

        new_label = QString::number(result, 'g', 15);
        qDebug() << "first: " << new_label;
        ui->Display->setText(new_label);
    }
    ui->pushButton_sqrt->setChecked(false);
}

void MainWindow::on_pushButton_AC_clicked()
{
    ui->Display->setText("0");
}

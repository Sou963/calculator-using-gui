#include "mainwindow.h"
#include "./ui_mainwindow.h"
float number1,number2,result;
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


void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    number1=arg1.toFloat();
}


void MainWindow::on_lineEdit_2_textChanged(const QString &arg1)
{
     number2=arg1.toFloat();
}


void MainWindow::on_pushButton_clicked()
{
     result=number1+number2;
     ui->label->setText(QString::number(result));
}


void MainWindow::on_pushButton_2_clicked()
{
     result=number1-number2;
     ui->label->setText(QString::number(result));
}


void MainWindow::on_pushButton_3_clicked()
{
     result=number1*number2;
     ui->label->setText(QString::number(result));
}


void MainWindow::on_pushButton_4_clicked()
{
     result=(number1/number2);
     ui->label->setText(QString::number(result));
}


void MainWindow::on_pushButton_5_clicked()
{
     result=(number1*number1);
     ui->label->setText(QString::number(result));
}


void MainWindow::on_pushButton_6_clicked()
{
     ui->label->setText("1");
}


void MainWindow::on_pushButton_7_clicked()
{
    ui->label->setText("2");
}


void MainWindow::on_pushButton_8_clicked()
{
    ui->label->setText("3");
}


void MainWindow::on_pushButton_9_clicked()
{
    ui->label->setText("4");
}


void MainWindow::on_pushButton_10_clicked()
{
    ui->label->setText("5");
}


void MainWindow::on_pushButton_11_clicked()
{
    ui->label->setText("6");
}


void MainWindow::on_pushButton_12_clicked()
{
    ui->label->setText("7");
}


void MainWindow::on_pushButton_13_clicked()
{
    ui->label->setText("8");
}


void MainWindow::on_pushButton_14_clicked()
{
    ui->label->setText("9");
}


void MainWindow::on_pushButton_15_clicked()
{
    ui->label->setText("0");
}


void MainWindow::on_pushButton_16_clicked()
{
    ui->label->setText("0");
}


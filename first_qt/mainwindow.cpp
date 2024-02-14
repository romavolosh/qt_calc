#include "mainwindow.h"
#include "ui_mainwindow.h"

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

float firstNum, secNum, res;

void MainWindow::on_plus_clicked()
{
    firstNum = ui -> first_num -> text().toInt();
    secNum = ui -> second_num -> text().toInt();
    res = firstNum + secNum;
    ui -> restxt -> setText(QString::number(res)) ;
}
void MainWindow::on_minus_clicked()
{
    firstNum = ui -> first_num -> text().toInt();
    secNum = ui -> second_num -> text().toInt();
    res = firstNum - secNum;
    ui -> restxt -> setText(QString::number(res)) ;
}

void MainWindow::on_multiplying_clicked()
{
    firstNum = ui -> first_num -> text().toInt();
    secNum = ui -> second_num -> text().toInt();
    res = firstNum * secNum;
    ui -> restxt -> setText(QString::number(res)) ;
}


void MainWindow::on_dividing_clicked()
{
    firstNum = ui -> first_num -> text().toInt();
    secNum = ui -> second_num -> text().toInt();
    res = firstNum / secNum;
    ui -> restxt -> setText(QString::number(res)) ;
}


#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
using namespace std;

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

void MainWindow::on_countButton_clicked()
{
    //increase int number
    number = number + 1;
    //convert int to string
    string strNum = to_string(number);
    //convert string to QString
    QString qstring = QString::fromStdString(strNum);
    //set new text
    ui->numberLineEdit->setText(qstring);
}

void MainWindow::on_resetButton_clicked()
{
    number = 0;
    //convert int to string
    string strNum = to_string(number);
    //convert string to QString
    QString qstring = QString::fromStdString(strNum);
    //set new text
    ui->numberLineEdit->setText(qstring);
}

void MainWindow::on_numberLineEdit_textChanged(const QString &arg1)
{
    //convert QString to string
    string a = arg1.toStdString();

    //check is string empty = ""
    if (a.empty()){
        a = "0";
    }
    //convert string to int & update number value
    number = stoi(a);
}

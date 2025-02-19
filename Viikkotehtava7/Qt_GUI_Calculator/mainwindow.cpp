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

void MainWindow::numberClickedHandler()
{
    if (state == 1){
        ui->num1LineEdit->setText(num1);
    }
    if (state == 2){
        ui->num2LineEdit->setText(num2);
    }
}


void MainWindow::on_num0Button_clicked()
{
    //Push "0" into number1 end
    if (state == 1){
        num1.push_back("0");
    }
    //Push "0" into number2 end
    if (state == 2){
        num2.push_back("0");
    }
    numberClickedHandler();
}

void MainWindow::on_num1Button_clicked()
{
    if (state == 1){
        num1.push_back("1");
    }
    if (state == 2){
        num2.push_back("1");
    }
    numberClickedHandler();
}

void MainWindow::on_num2Button_clicked()
{
    if (state == 1){
        num1.push_back("2");
    }
    if (state == 2){
        num2.push_back("2");
    }
    numberClickedHandler();
}

void MainWindow::on_num3Button_clicked()
{
    if (state == 1){
        num1.push_back("3");
    }
    if (state == 2){
        num2.push_back("3");
    }
    numberClickedHandler();
}

void MainWindow::on_num4Button_clicked()
{
    if (state == 1){
        num1.push_back("4");
    }
    if (state == 2){
        num2.push_back("4");
    }
    numberClickedHandler();
}

void MainWindow::on_num5Button_clicked()
{
    if (state == 1){
        num1.push_back("5");
    }
    if (state == 2){
        num2.push_back("5");
    }
    numberClickedHandler();
}

void MainWindow::on_num6Button_clicked()
{
    if (state == 1){
        num1.push_back("6");
    }
    if (state == 2){
        num2.push_back("6");
    }
    numberClickedHandler();
}

void MainWindow::on_num7Button_clicked()
{
    if (state == 1){
        num1.push_back("7");
    }
    if (state == 2){
        num2.push_back("7");
    }
    numberClickedHandler();
}

void MainWindow::on_num8Button_clicked()
{
    if (state == 1){
        num1.push_back("8");
    }
    if (state == 2){
        num2.push_back("8");
    }
    numberClickedHandler();
}

void MainWindow::on_num9Button_clicked()
{
    if (state == 1){
        num1.push_back("9");
    }
    if (state == 2){
        num2.push_back("9");
    }
    numberClickedHandler();
}


void MainWindow::on_sumButton_clicked()
{
    operand = 0;
    state = 2;
}

void MainWindow::on_subButton_clicked()
{
    operand = 1;
    state = 2;
}

void MainWindow::on_multButton_clicked()
{
    operand = 2;
    state = 2;
}

void MainWindow::on_diviButton_clicked()
{
    operand = 3;
    state = 2;
}


void MainWindow::on_enterButton_clicked()
{
    //Convert qstring to float
    float num1_f = num1.toFloat();
    float num2_f = num2.toFloat();
    //Make the calculation
    switch (operand) {
    case 0:
        result = num1_f + num2_f;
        break;
    case 1:
        result = num1_f - num2_f;
        break;
    case 2:
        result = num1_f * num2_f;
        break;
    case 3:
        result = num1_f / num2_f;
        break;
    default:
        break;
    }

    //Convert float to string
    string resStr = to_string(result);

    //Find "." in the string, example "23.000000"
    int findDot = resStr.find(".");

    //Substring characters after ".", example "000000"
    string resSubStr = resStr.substr((findDot + 1), 6);

    //Check is all characters "000000"
    if (resSubStr == "000000"){
        //Yes, remove ".000000" from original string, example "23.000000"
        resStr = resStr.substr(0, findDot);
    }

    //Convert string to qstring
    QString qstr = QString::fromStdString(resStr);
    //Set new result text
    ui->resultLineEdit->setText(qstr);
}

void MainWindow::on_clearButton_clicked()
{
    state = 1;
    num1 = "";
    num2 = "";
    ui->resultLineEdit->setText("");
    ui->num2LineEdit->setText("");
    ui->num1LineEdit->setText("");
}

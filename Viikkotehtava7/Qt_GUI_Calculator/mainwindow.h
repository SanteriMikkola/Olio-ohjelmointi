#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_num9Button_clicked();

    void on_diviButton_clicked();

    void on_enterButton_clicked();

    void on_clearButton_clicked();

    void on_num0Button_clicked();

    void on_multButton_clicked();

    void on_num8Button_clicked();

    void on_num7Button_clicked();

    void on_subButton_clicked();

    void on_num6Button_clicked();

    void on_num5Button_clicked();

    void on_num4Button_clicked();

    void on_sumButton_clicked();

    void on_num3Button_clicked();

    void on_num2Button_clicked();

    void on_num1Button_clicked();

private:
    Ui::MainWindow *ui;
    QString num1, num2;
    float result;
    int state = 1;
    short operand;

    void numberClickedHandler();
};
#endif // MAINWINDOW_H

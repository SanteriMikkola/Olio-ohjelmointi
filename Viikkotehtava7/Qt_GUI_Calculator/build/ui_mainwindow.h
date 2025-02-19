/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *num1Label;
    QLabel *num2Label;
    QLineEdit *num1LineEdit;
    QLineEdit *num2LineEdit;
    QLineEdit *resultLineEdit;
    QPushButton *num1Button;
    QPushButton *num2Button;
    QPushButton *num3Button;
    QPushButton *sumButton;
    QPushButton *num5Button;
    QPushButton *num4Button;
    QPushButton *subButton;
    QPushButton *num6Button;
    QPushButton *num8Button;
    QPushButton *num7Button;
    QPushButton *multButton;
    QPushButton *num0Button;
    QPushButton *enterButton;
    QPushButton *diviButton;
    QPushButton *clearButton;
    QPushButton *num9Button;
    QLabel *resultLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(392, 284);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        num1Label = new QLabel(centralwidget);
        num1Label->setObjectName("num1Label");
        num1Label->setGeometry(QRect(20, 10, 72, 22));
        num1Label->setMinimumSize(QSize(72, 22));
        num1Label->setMaximumSize(QSize(72, 22));
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        num1Label->setFont(font);
        num2Label = new QLabel(centralwidget);
        num2Label->setObjectName("num2Label");
        num2Label->setGeometry(QRect(140, 10, 72, 22));
        num2Label->setMinimumSize(QSize(72, 22));
        num2Label->setMaximumSize(QSize(72, 22));
        num2Label->setFont(font);
        num1LineEdit = new QLineEdit(centralwidget);
        num1LineEdit->setObjectName("num1LineEdit");
        num1LineEdit->setEnabled(true);
        num1LineEdit->setGeometry(QRect(20, 40, 111, 24));
        QFont font1;
        font1.setBold(true);
        num1LineEdit->setFont(font1);
        num1LineEdit->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        num1LineEdit->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        num1LineEdit->setReadOnly(true);
        num2LineEdit = new QLineEdit(centralwidget);
        num2LineEdit->setObjectName("num2LineEdit");
        num2LineEdit->setEnabled(true);
        num2LineEdit->setGeometry(QRect(140, 40, 111, 24));
        num2LineEdit->setFont(font1);
        num2LineEdit->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        num2LineEdit->setReadOnly(true);
        resultLineEdit = new QLineEdit(centralwidget);
        resultLineEdit->setObjectName("resultLineEdit");
        resultLineEdit->setEnabled(true);
        resultLineEdit->setGeometry(QRect(260, 40, 111, 24));
        resultLineEdit->setFont(font1);
        resultLineEdit->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        resultLineEdit->setReadOnly(true);
        num1Button = new QPushButton(centralwidget);
        num1Button->setObjectName("num1Button");
        num1Button->setGeometry(QRect(20, 80, 81, 24));
        num1Button->setFont(font1);
        num2Button = new QPushButton(centralwidget);
        num2Button->setObjectName("num2Button");
        num2Button->setGeometry(QRect(110, 80, 81, 24));
        num2Button->setFont(font1);
        num3Button = new QPushButton(centralwidget);
        num3Button->setObjectName("num3Button");
        num3Button->setGeometry(QRect(200, 80, 81, 24));
        num3Button->setFont(font1);
        sumButton = new QPushButton(centralwidget);
        sumButton->setObjectName("sumButton");
        sumButton->setGeometry(QRect(290, 80, 81, 24));
        sumButton->setFont(font1);
        num5Button = new QPushButton(centralwidget);
        num5Button->setObjectName("num5Button");
        num5Button->setGeometry(QRect(110, 120, 81, 24));
        num5Button->setFont(font1);
        num4Button = new QPushButton(centralwidget);
        num4Button->setObjectName("num4Button");
        num4Button->setGeometry(QRect(20, 120, 81, 24));
        num4Button->setFont(font1);
        subButton = new QPushButton(centralwidget);
        subButton->setObjectName("subButton");
        subButton->setGeometry(QRect(290, 120, 81, 24));
        subButton->setFont(font1);
        num6Button = new QPushButton(centralwidget);
        num6Button->setObjectName("num6Button");
        num6Button->setGeometry(QRect(200, 120, 81, 24));
        num6Button->setFont(font1);
        num8Button = new QPushButton(centralwidget);
        num8Button->setObjectName("num8Button");
        num8Button->setGeometry(QRect(110, 160, 81, 24));
        num8Button->setFont(font1);
        num7Button = new QPushButton(centralwidget);
        num7Button->setObjectName("num7Button");
        num7Button->setGeometry(QRect(20, 160, 81, 24));
        num7Button->setFont(font1);
        multButton = new QPushButton(centralwidget);
        multButton->setObjectName("multButton");
        multButton->setGeometry(QRect(290, 160, 81, 24));
        multButton->setFont(font1);
        num0Button = new QPushButton(centralwidget);
        num0Button->setObjectName("num0Button");
        num0Button->setGeometry(QRect(20, 200, 81, 24));
        num0Button->setFont(font1);
        enterButton = new QPushButton(centralwidget);
        enterButton->setObjectName("enterButton");
        enterButton->setGeometry(QRect(200, 200, 81, 24));
        enterButton->setFont(font1);
        diviButton = new QPushButton(centralwidget);
        diviButton->setObjectName("diviButton");
        diviButton->setGeometry(QRect(290, 200, 81, 24));
        diviButton->setFont(font1);
        clearButton = new QPushButton(centralwidget);
        clearButton->setObjectName("clearButton");
        clearButton->setGeometry(QRect(110, 200, 81, 24));
        clearButton->setFont(font1);
        num9Button = new QPushButton(centralwidget);
        num9Button->setObjectName("num9Button");
        num9Button->setGeometry(QRect(200, 160, 81, 24));
        num9Button->setFont(font1);
        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName("resultLabel");
        resultLabel->setGeometry(QRect(260, 10, 72, 22));
        resultLabel->setMinimumSize(QSize(72, 22));
        resultLabel->setMaximumSize(QSize(72, 22));
        resultLabel->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 392, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        num1Label->setText(QCoreApplication::translate("MainWindow", "Number1", nullptr));
        num2Label->setText(QCoreApplication::translate("MainWindow", "Number2", nullptr));
        num1LineEdit->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        num1LineEdit->setPlaceholderText(QString());
        num2LineEdit->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        num2LineEdit->setPlaceholderText(QString());
        resultLineEdit->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        resultLineEdit->setPlaceholderText(QString());
        num1Button->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        num2Button->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        num3Button->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        sumButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        num5Button->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        num4Button->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        subButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        num6Button->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        num8Button->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        num7Button->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        multButton->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        num0Button->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        enterButton->setText(QCoreApplication::translate("MainWindow", "enter", nullptr));
        diviButton->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        clearButton->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        num9Button->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        resultLabel->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

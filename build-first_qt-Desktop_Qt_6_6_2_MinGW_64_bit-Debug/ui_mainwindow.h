/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *first_num;
    QLineEdit *second_num;
    QPushButton *plus;
    QPushButton *minus;
    QPushButton *multiplying;
    QPushButton *dividing;
    QLabel *l_result;
    QLineEdit *restxt;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(600, 248);
        MainWindow->setMaximumSize(QSize(600, 400));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 50, 111, 41));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 100, 121, 41));
        label_2->setFont(font);
        first_num = new QLineEdit(centralwidget);
        first_num->setObjectName("first_num");
        first_num->setGeometry(QRect(150, 60, 113, 24));
        second_num = new QLineEdit(centralwidget);
        second_num->setObjectName("second_num");
        second_num->setGeometry(QRect(170, 110, 113, 24));
        plus = new QPushButton(centralwidget);
        plus->setObjectName("plus");
        plus->setGeometry(QRect(50, 150, 41, 41));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(false);
        plus->setFont(font1);
        minus = new QPushButton(centralwidget);
        minus->setObjectName("minus");
        minus->setGeometry(QRect(100, 150, 41, 41));
        minus->setFont(font1);
        multiplying = new QPushButton(centralwidget);
        multiplying->setObjectName("multiplying");
        multiplying->setGeometry(QRect(150, 150, 41, 41));
        multiplying->setFont(font1);
        dividing = new QPushButton(centralwidget);
        dividing->setObjectName("dividing");
        dividing->setGeometry(QRect(200, 150, 41, 41));
        dividing->setFont(font1);
        l_result = new QLabel(centralwidget);
        l_result->setObjectName("l_result");
        l_result->setGeometry(QRect(380, 50, 111, 41));
        l_result->setFont(font);
        restxt = new QLineEdit(centralwidget);
        restxt->setObjectName("restxt");
        restxt->setGeometry(QRect(380, 90, 113, 24));
        restxt->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "First number:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Second number:", nullptr));
        plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        multiplying->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        dividing->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        l_result->setText(QCoreApplication::translate("MainWindow", "Result is:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

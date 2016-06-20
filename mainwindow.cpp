#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "about.h"
#include "ui_about.h"
#include <math.h>
#include <QDebug>
#include <QDialog>
#include <QFileDialog>
#include <QIcon>

// declaring plus, minus, multiply and divide
bool plus = false;
bool minus = false;
bool multiplication = false;
bool division = false;
double a,b,c;
//end declaration

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //connecting buttons to corresponding functions
    push_point_button = ui->push_point;
    connect(push_point_button, SIGNAL(clicked()), this, SLOT(push_point()));

    push_point_button = ui->push_point;
    connect(push_point_button, SIGNAL(clicked()), this, SLOT(push_point()));

    push_0_button = ui->push_0;
    connect(push_0_button, SIGNAL(clicked()), this, SLOT(push_0()));

    push_1_button = ui->push_1;
    connect(push_1_button, SIGNAL(clicked()), this, SLOT(push_1()));

    push_2_button = ui->push_2;
    connect(push_2_button, SIGNAL(clicked()), this, SLOT(push_2()));

    push_3_button = ui->push_3;
    connect(push_3_button, SIGNAL(clicked()), this, SLOT(push_3()));

    push_4_button = ui->push_4;
    connect(push_4_button, SIGNAL(clicked()), this, SLOT(push_4()));

    push_5_button = ui->push_5;
    connect(push_5_button, SIGNAL(clicked()), this, SLOT(push_5()));

    push_6_button = ui->push_6;
    connect(push_6_button, SIGNAL(clicked()), this, SLOT(push_6()));

    push_7_button = ui->push_7;
    connect(push_7_button, SIGNAL(clicked()), this, SLOT(push_7()));

    push_8_button = ui->push_8;
    connect(push_8_button, SIGNAL(clicked()), this, SLOT(push_8()));

    push_9_button = ui->push_9;
    connect(push_9_button, SIGNAL(clicked()), this, SLOT(push_9()));

    push_divided_button = ui->push_divided;
    connect(push_divided_button, SIGNAL(clicked()), this, SLOT(push_divided()));

    push_plus_button = ui->push_plus;
    connect(push_plus_button, SIGNAL(clicked()), this, SLOT(push_plus()));

    push_minus_button = ui->push_minus;
    connect(push_minus_button, SIGNAL(clicked()), this, SLOT(push_minus()));

    push_equals_button = ui->push_equals;
    connect(push_equals_button, SIGNAL(clicked()), this, SLOT(push_equals()));

    push_times_button = ui->push_times;
    connect(push_times_button, SIGNAL(clicked()), this, SLOT(push_times()));

    push_clear_button = ui->push_clear;
    connect(push_clear_button, SIGNAL(clicked()), this, SLOT(push_clear()));

    push_squareroot_button = ui->push_squareroot;
    connect(push_squareroot_button, SIGNAL(clicked()), this, SLOT(push_squareroot()));

    push_squared_button = ui->push_squared;
    connect(push_squared_button, SIGNAL(clicked()), this, SLOT(push_squared()));

    push_negative_button = ui->push_negative;
    connect(push_negative_button, SIGNAL(clicked()), this, SLOT(push_negative()));
}//end button connections

MainWindow::~MainWindow()
{
    delete ui;
}

//number buttons will write corresponding number to lineEdit
void MainWindow::push_point()
{
    ui->lineEdit->setText(ui->lineEdit->text() + ".");
    ui->lineEdit_2->setText(ui->lineEdit_2->text() + ".");
    qDebug() << ".";
}

void MainWindow::push_0()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "0");
    ui->lineEdit_2->setText(ui->lineEdit_2->text() + "0");
    qDebug() << "0";
}

void MainWindow::push_1()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "1");
    ui->lineEdit_2->setText(ui->lineEdit_2->text() + "1");
    qDebug() << "1";
}
void MainWindow::push_2()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "2");
    ui->lineEdit_2->setText(ui->lineEdit_2->text() + "2");
    qDebug() << "2";
}
void MainWindow::push_3()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "3");
    ui->lineEdit_2->setText(ui->lineEdit_2->text() + "3");
    qDebug() << "3";
}
void MainWindow::push_4()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "4");
    ui->lineEdit_2->setText(ui->lineEdit_2->text() + "4");
    qDebug() << "4";
}
void MainWindow::push_5()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "5");
    ui->lineEdit_2->setText(ui->lineEdit_2->text() + "5");
    qDebug() << "5";
}
void MainWindow::push_6()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "6");
    ui->lineEdit_2->setText(ui->lineEdit_2->text() + "6");
    qDebug() << "6";
}
void MainWindow::push_7()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "7");
    ui->lineEdit_2->setText(ui->lineEdit_2->text() + "7");
    qDebug() << "7";
}
void MainWindow::push_8()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "8");
    ui->lineEdit_2->setText(ui->lineEdit_2->text() + "8");
    qDebug() << "8";
}
void MainWindow::push_9()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "9");
    ui->lineEdit_2->setText(ui->lineEdit_2->text() + "9");
    qDebug() << "9";
}//end number buttons

//makes number a negative number
void MainWindow::push_negative()
{
    if(ui->lineEdit->text().contains("-")){
        ui->lineEdit->setCursorPosition(1);
        ui->lineEdit->backspace();
    }
    else{
        ui->lineEdit->setText("-"+ ui->lineEdit->text());
        ui->lineEdit_2->setText("-" + ui->lineEdit_2->text());
    }
    qDebug() << "negative number";
}

//equals button, checks for the operation condition used and executes calculation
void MainWindow::push_equals()
{
    b = ui->lineEdit->text().toDouble();
    if(plus==true){
        c=a+b;
        ui->lineEdit->setText(QString::number(c));
        ui->lineEdit_2->setText(ui->lineEdit_2->text() + " = " + (QString::number(c)));
    }
    if(minus==true){
        c=a-b;
        ui->lineEdit->setText(QString::number(c));
        ui->lineEdit_2->setText(ui->lineEdit_2->text() + " = " + (QString::number(c)));

    }
    if(multiplication==true){
        c=a*b;
        ui->lineEdit->setText(QString::number(c));
        ui->lineEdit_2->setText(ui->lineEdit_2->text() + " = " + (QString::number(c)));

    }
    if(division==true){
        if(b!=0){
        c=a/b;
        ui->lineEdit->setText(QString::number(c));
        ui->lineEdit_2->setText(ui->lineEdit_2->text() + " = " + (QString::number(c)));

        }
        else{
            ui->lineEdit->setText("Cant Divide by 0");
        }
    }
    plus = minus = division = multiplication = false;
    qDebug() << "=";
}

//adding button
void MainWindow::push_plus()
{
    a = ui->lineEdit->text().toDouble();
    plus = true;
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText(ui->lineEdit_2->text() + "+");
    qDebug() << "add";
}

//minus button
void MainWindow::push_minus()
{
    a = ui->lineEdit->text().toDouble();
    minus = true;
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText(ui->lineEdit_2->text() + "-");
    qDebug() << "-";
}

//multiply
void MainWindow::push_times()
{
    a = ui->lineEdit->text().toDouble();
    multiplication = true;
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText(ui->lineEdit_2->text() + "*");
    qDebug() << "x";
}

//divide button
void MainWindow::push_divided()
{
    a = ui->lineEdit->text().toDouble();
    division = true;
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText(ui->lineEdit_2->text() + "/");
    qDebug() << "Divided";
}

//clear button
void MainWindow::push_clear()
{
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
    plus = minus = division = multiplication = false;
    qDebug() << "cleared";
}

//sqare root button
void MainWindow::push_squareroot()
{
    a = ui->lineEdit->text().toDouble();
    c = sqrt(a);
    ui->lineEdit->setText(QString::number(c));
    ui->lineEdit_2->setText(ui->lineEdit_2->text() + (QString::number(c)));
    qDebug() << "square root";
}

//squaring button
void MainWindow::push_squared()
{
    a = ui->lineEdit->text().toDouble();
    c = a*a;
    ui->lineEdit->setText(QString::number(c));
    ui->lineEdit_2->setText(ui->lineEdit_2->text() + (QString::number(c)));
    qDebug() << "squared";
}

void MainWindow::on_actionInfo_triggered()
{
    about about;
    about.setModal(true);
    about.exec();
}

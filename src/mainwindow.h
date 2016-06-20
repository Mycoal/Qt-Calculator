#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QAction>
#include "about.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void push_0();
    void push_1();
    void push_2();
    void push_3();
    void push_4();
    void push_5();
    void push_6();
    void push_7();
    void push_8();
    void push_9();
    void push_negative();
    void push_plus();
    void push_minus();
    void push_divided();
    void push_times();
    void push_equals();
    void push_clear();
    void push_squareroot();
    void push_squared();
    void push_point();
    void on_actionInfo_triggered();

private:
    Ui::MainWindow *ui;
    QPushButton *push_1_button;
    QPushButton *push_2_button;
    QPushButton *push_3_button;
    QPushButton *push_4_button;
    QPushButton *push_5_button;
    QPushButton *push_6_button;
    QPushButton *push_7_button;
    QPushButton *push_8_button;
    QPushButton *push_9_button;
    QPushButton *push_0_button;
    QPushButton *push_plus_button;
    QPushButton *push_minus_button;
    QPushButton *push_negative_button;
    QPushButton *push_equals_button;
    QPushButton *push_times_button;
    QPushButton *push_divided_button;
    QPushButton *push_clear_button;
    QPushButton *push_squareroot_button;
    QPushButton *push_squared_button;
    QPushButton *push_point_button;


};

#endif // MAINWINDOW_H

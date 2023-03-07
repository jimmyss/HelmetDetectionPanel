#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "signup.h"
#include <QCamera>
#include <QMediaDevices>

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


void MainWindow::on_pushButton_clicked()
{
    this->close();
    Signup *s = new Signup;
    s->show();
}

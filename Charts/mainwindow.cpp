#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(Horiz *h,Vert *v,Pie *p,QWidget *parent) :
    QMainWindow(parent), v(v), p(p), h(h),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete v;
    delete h;
    delete p;
    delete ui;
}

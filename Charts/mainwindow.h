#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "vert.h"
#include "horiz.h"
#include "pie.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Vert *v;
    Horiz *h;
    Pie *p;
    explicit MainWindow(Horiz *h = nullptr, Vert *v = nullptr,  Pie *p = nullptr, QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

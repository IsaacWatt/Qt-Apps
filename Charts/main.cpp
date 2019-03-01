#include "mainwindow.h"
#include "vert.h"
#include "pie.h"
#include "horiz.h"

#include <QApplication>
#include <QtWidgets/QMainWindow>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Horiz *v = new Horiz();
    QChartView *chartView = v->makeChart();

    // Create the main app window
    QMainWindow window;

    // Set the main window widget
    window.setCentralWidget(chartView);
    window.resize(420, 300);
    window.show();

    return a.exec();
}

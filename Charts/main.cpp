#include "mainwindow.h"
#include "vert.h"
#include "pie.h"
#include "horiz.h"

#include <QApplication>
#include <QtWidgets/QMainWindow>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

// 1
//    QLineSeries *series = new QLineSeries();
//    series->append(0, 10);
//    series->append(1, 11);
//    series->append(2, 16);
//    series->append(3, 23);
//    series->append(4, 15);
//    series->append(5, 19);
//    series->append(6, 1);

//    QCategoryAxis *axisX = new QCategoryAxis();
//    axisX->append("1980",0);
//    axisX->append("1985",1);
//    axisX->append("1990",2);
//    axisX->append("1995",3);
//    axisX->append("2000",4);
//    axisX->append("2005",5);
//    axisX->append("2010",6);

//    QString title = QString("Sample Chart");
//    Horiz *v = new Horiz(series, title, axisX);
//    QChartView *chartView = new QChartView(v->chart);
//    chartView->setRenderHint(QPainter::Antialiasing);


// 2
//    QPieSeries *series = new QPieSeries();
//    series->append("red",.40);
//    series->append("blue",.20);
//    series->append("green",.15);
//    series->append("yellow",.10);
//    series->append("purple",.15);

//    QString title = QString("hello");
//    Pie *v = new Pie(series, title);

//    QPieSlice *slice0 = v->series->slices().at(0);
//    slice0->setLabelVisible();
//    QPieSlice *slice1 = v->series->slices().at(1);
//    slice1->setExploded();
//    slice1->setLabelVisible();
//    slice1->setPen(QPen(Qt::darkGreen, 2));
//    slice1->setBrush(Qt::green);
//    QPieSlice *slice2 = v->series->slices().at(2);
//    slice2->setLabelVisible();
//    QPieSlice *slice3 = v->series->slices().at(3);
//    slice3->setLabelVisible();
//    QPieSlice *slice4 = v->series->slices().at(4);
//    slice4->setLabelVisible();

//    QChartView *chartView = new QChartView(v->chart);
//    chartView->setRenderHint(QPainter::Antialiasing);

// 3
    QBarSet *set0 = new QBarSet("Altuve");
    QBarSet *set1 = new QBarSet("Martinez");
    QBarSet *set2 = new QBarSet("Segura");
    QBarSet *set3 = new QBarSet("Simmons");
    QBarSet *set4 = new QBarSet("Trout");

    *set0 << 283 << 341 << 313 << 338 << 346 << 335;
    *set1 << 250 << 315 << 282 << 307 << 303 << 330;
    *set2 << 294 << 246 << 257 << 319 << 300 << 325;
    *set3 << 248 << 244 << 265 << 281 << 278 << 313;
    *set4 << 323 << 287 << 299 << 315 << 306 << 313;

    QBarSeries *series = new QBarSeries();

    series->append(set0);
    series->append(set1);
    series->append(set2);
    series->append(set3);
    series->append(set4);

    QStringList categories;
    categories << "2013" << "2014" << "2015" << "2016" << "2017" << "2018";

    QString title = QString("Vert");
    Vert *v = new Vert(series, title, categories);

    QChartView *chartView = new QChartView(v->chart);

    chartView->setRenderHint(QPainter::Antialiasing);
    QPalette pal = qApp->palette();

    pal.setColor(QPalette::Window, QRgb(0xffffff));
    pal.setColor(QPalette::WindowText, QRgb(0x404044));
    qApp->setPalette(pal);

    // Create the main app window
    QMainWindow window;

    // Set the main window widget
    window.setCentralWidget(chartView);
    window.resize(420, 300);
    window.show();

    return a.exec();
}

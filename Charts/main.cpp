#include "mainwindow.h"
#include "vert.h"
#include "pie.h"
#include "horiz.h"

#include <QApplication>
#include <QtWidgets/QMainWindow>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // 1 Horiz
    QLineSeries *Horizseries = new QLineSeries();
    Horizseries->append(0, 10);
    Horizseries->append(1, 11);
    Horizseries->append(2, 16);
    Horizseries->append(3, 23);
    Horizseries->append(4, 15);
    Horizseries->append(5, 19);
    Horizseries->append(6, 1);

    QCategoryAxis *HorizaxisX = new QCategoryAxis();
    HorizaxisX->append("1980",0);
    HorizaxisX->append("1985",1);
    HorizaxisX->append("1990",2);
    HorizaxisX->append("1995",3);
    HorizaxisX->append("2000",4);
    HorizaxisX->append("2005",5);
    HorizaxisX->append("2010",6);

    QString Horiztitle = QString("Sample Horizontal Chart");
    Horiz *h = new Horiz(Horizseries, Horiztitle, HorizaxisX);

    // 2 Pie
    QPieSeries *Pieseries = new QPieSeries();
    Pieseries->append("red",.40);
    Pieseries->append("blue",.20);
    Pieseries->append("green",.15);
    Pieseries->append("yellow",.10);
    Pieseries->append("purple",.15);

    QString Pietitle = QString("Pie chart");
    Pie *p = new Pie(Pieseries, Pietitle);

    QPieSlice *slice0 = p->series->slices().at(0);
    slice0->setLabelVisible();
    QPieSlice *slice1 = p->series->slices().at(1);
    slice1->setExploded();
    slice1->setLabelVisible();
    slice1->setPen(QPen(Qt::darkGreen, 2));
    slice1->setBrush(Qt::green);
    QPieSlice *slice2 = p->series->slices().at(2);
    slice2->setLabelVisible();
    QPieSlice *slice3 = p->series->slices().at(3);
    slice3->setLabelVisible();
    QPieSlice *slice4 = p->series->slices().at(4);
    slice4->setLabelVisible();

    // 3 Vert:
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

    QBarSeries *Vertseries = new QBarSeries();

    Vertseries->append(set0);
    Vertseries->append(set1);
    Vertseries->append(set2);
    Vertseries->append(set3);
    Vertseries->append(set4);

    QStringList categories;
    categories << "2013" << "2014" << "2015" << "2016" << "2017" << "2018";

    QString Verttitle = QString("Vert");
    Vert *v = new Vert(Vertseries, Verttitle, categories);

    // Set up chart views
    QChartView *VertChartView = new QChartView(v->chart);
    VertChartView->setRenderHint(QPainter::Antialiasing);
    QPalette pal = qApp->palette();
    pal.setColor(QPalette::Window, QRgb(0xffffff));
    pal.setColor(QPalette::WindowText, QRgb(0x404044));
    qApp->setPalette(pal);

    QChartView *PieChartView = new QChartView(p->chart);
    PieChartView->setRenderHint(QPainter::Antialiasing);

    QChartView *HorizChartView = new QChartView(h->chart);
    HorizChartView->setRenderHint(QPainter::Antialiasing);

    // Create the main app window
    QMainWindow *window = new MainWindow(h, v, p, nullptr);
    // Set the main window widget
    window->setCentralWidget(PieChartView); // chose a chart to display
    window->resize(420, 300);
    window->show();

    QMainWindow *window2 = new MainWindow(h, v, p, nullptr);
    // Set the main window widget
    window2->setCentralWidget(HorizChartView); // chose a chart to display
    window2->resize(420, 300);
    window2->show();

    QMainWindow *window3 = new MainWindow(h, v, p, nullptr);
    // Set the main window widget
    window3->setCentralWidget(VertChartView); // chose a chart to display
    window3->resize(420, 300);
    window3->show();

    return a.exec();
}

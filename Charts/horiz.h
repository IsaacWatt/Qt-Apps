#ifndef HORIZ_H
#define HORIZ_H

#include <QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QHorizontalStackedBarSeries>
#include <QtCharts/QLineSeries>
#include <QtCharts/QCategoryAxis>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
QT_CHARTS_USE_NAMESPACE

class Horiz
{

    QLineSeries *series;
    QFont font;
    QCategoryAxis *axisX;

public:
    QChart *chart;
    Horiz(QLineSeries *series, QString &title, QCategoryAxis *axisX);
    ~Horiz();
};

#endif // HORIZ_H

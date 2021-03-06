#ifndef VERT_H
#define VERT_H

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

class Vert
{

    QBarSeries *series;
    QFont font;
    QCategoryAxis *axisX;

public:
    QChart *chart;
    QBarCategoryAxis *axis;
    Vert(QBarSeries *series, QString &title, QStringList categories);
    ~Vert();
};

#endif // VERT_H

#ifndef PIE_H
#define PIE_H
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

class Pie
{


    QFont font;
    QCategoryAxis *axisX;

public:
    QChart *chart;
    QPieSeries *series;
    Pie(QPieSeries *series, QString &title);
    ~Pie();
};

#endif // PIE_H

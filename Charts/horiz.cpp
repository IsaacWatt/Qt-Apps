#include "horiz.h"

Horiz::Horiz()
{
// series
// chart
// axisX
}

QChartView * Horiz::makeChart() {
    QLineSeries *series = new QLineSeries();
    series->append(0, 16);
    series->append(1, 25);
    series->append(2, 24);
    series->append(3, 19);
    series->append(4, 33);
    series->append(5, 25);
    series->append(6, 34);

    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();

    QFont font;
    font.setPixelSize(18);
    chart->setTitleFont(font);
    chart->setTitleBrush(QBrush(Qt::black));
    chart->setTitle("Barry Bonds HRs as Pirate");

    QPen pen(QRgb(0x000000));
    pen.setWidth(5);
    series->setPen(pen);

    chart->setAnimationOptions(QChart::AllAnimations);
    QCategoryAxis *axisX = new QCategoryAxis();
    axisX->append("1986",0);
    axisX->append("1987",1);
    axisX->append("1988",2);
    axisX->append("1989",3);
    axisX->append("1990",4);
    axisX->append("1991",5);
    axisX->append("1992",6);
    chart->setAxisX(axisX, series);
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    return chartView;
}

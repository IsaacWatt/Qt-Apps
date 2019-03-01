#include "pie.h"

Pie::Pie()
{

}

QChartView * Pie::makeChart() {
    QPieSeries *series = new QPieSeries();
    series->append("Vegetables",.40);
    series->append("Beans",.20);
    series->append("Fruits",.15);
    series->append("Seeds/Nuts",.10);
    series->append("Whole Grains",.15);

    QPieSlice *slice0 = series->slices().at(0);
    slice0->setLabelVisible();
    QPieSlice *slice1 = series->slices().at(1);
    slice1->setExploded();
    slice1->setLabelVisible();
    slice1->setPen(QPen(Qt::darkGreen, 2));
    slice1->setBrush(Qt::green);
    QPieSlice *slice2 = series->slices().at(2);
    slice2->setLabelVisible();
    QPieSlice *slice3 = series->slices().at(3);
    slice3->setLabelVisible();
    QPieSlice *slice4 = series->slices().at(4);
    slice4->setLabelVisible();

    QChart *chart = new QChart();

    chart->addSeries(series);
    chart->setTitle("What Derek Ate this Week");
    chart->legend()->hide();

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    return chartView;
}

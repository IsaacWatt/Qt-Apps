#include "pie.h"

Pie::Pie(QPieSeries *series, QString &title)
{
    // series data
    this->series = series;

    // create chart
    this->chart = new QChart();
    this->chart->addSeries(series);
    this->chart->setTitle(title);
    this->chart->legend()->hide();
}

Pie::~Pie()
{
    delete this->series;
    delete this->chart;
}

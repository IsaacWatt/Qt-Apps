#include "horiz.h"

Horiz::Horiz(QLineSeries *series, QString &title, QCategoryAxis *axisX)
{
    // series data
    this->series = series;

    // make Pen
    QPen pen(QRgb(0x000000));
    pen.setWidth(5);
    this->series->setPen(pen);

    // create chart
    this->chart = new QChart();
    this->chart->legend()->hide();
    this->chart->addSeries(series);
    this->chart->createDefaultAxes();

    // decorations
    this->font.setPixelSize(18);

    this->chart->setTitleFont(this->font);
    this->chart->setTitleBrush(QBrush(Qt::black));

    this->chart->setTitle(title);
    this->chart->setAnimationOptions(QChart::AllAnimations);

    this->axisX = axisX;

    // set chart
    this->chart->setAxisX(this->axisX, this->series);
}

Horiz::~Horiz()
{
    delete this->series;
    delete this->chart;
    delete this->axisX;
}

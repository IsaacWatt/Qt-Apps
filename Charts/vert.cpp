#include "vert.h"

Vert::Vert(QBarSeries *series, QString &title, QStringList categories)
{
    // series data
    this->series = series;

    // create chart
    this->chart = new QChart();
    this->chart->addSeries(series);
    this->chart->legend()->setVisible(true);
    this->chart->legend()->setAlignment(Qt::AlignBottom);

    this->chart->setTitleFont(this->font);
    this->chart->setTitleBrush(QBrush(Qt::black));

    this->chart->setTitle(title);
    this->chart->setAnimationOptions(QChart::AllAnimations);

    // categories
    this->axis = new QBarCategoryAxis();
    this->axis->append(categories);
    this->chart->createDefaultAxes();
}

Vert::~Vert()
{
    delete this->series;
    delete this->chart;
    delete this->axis;
}

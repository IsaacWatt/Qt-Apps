#include "scribblearea.h"
#include "ui_scribblearea.h"

ScribbleArea::ScribbleArea(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ScribbleArea)
{
    ui->setupUi(this);
}

ScribbleArea::~ScribbleArea()
{
    delete ui;
}

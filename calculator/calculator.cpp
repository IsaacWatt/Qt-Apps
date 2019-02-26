#include "calculator.h"
#include "ui_calculator.h"

double calcValue = 0.0;
bool divTrigger = false;
bool multTrigger = false;
bool addTrigger = false;
bool subTrigger = false;

Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);

    ui->Display->setText(QString::number(calcValue));
    QPushButton *numButtons[10];
    for (int i = 0; i < 10; ++i) {
        QString btnName = "button" + QString::number(i);
        numButtons[i] = Calculator::findChild<QPushButton *>(btnName);
        connect(numButtons[i], SIGNAL(released()), this, SLOT(NumPressed()));
    }

    connect(ui->add, SIGNAL(released()), this, SLOT(MathButton()));
    connect(ui->multiply, SIGNAL(released()), this, SLOT(MathButton()));
    connect(ui->divide, SIGNAL(released()), this, SLOT(MathButton()));
    connect(ui->subtract, SIGNAL(released()), this, SLOT(MathButton()));

    connect(ui->equals, SIGNAL(released()), this, SLOT(EqualButton()));
    connect(ui->changesign, SIGNAL(released()), this, SLOT(ChangeNumberSign()));
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::NumPressed() {
    QPushButton *button = (QPushButton *)sender();
    QString btnVal = button->text();
    QString displayValue = ui->Display->text();

    if ( (displayValue.toDouble() == 0) || (displayValue.toDouble() == 0.0)) {
        ui->Display->setText(btnVal);
    } else {
        QString newVal = displayValue + btnVal;
        double dblNewVal = newVal.toDouble();
        ui->Display->setText(QString::number(dblNewVal, 'g', 16));
    }
}

void Calculator::MathButton() {
    divTrigger = false;
    multTrigger = false;
    addTrigger = false;
    subTrigger = false;

    QString displayValue = ui->Display->text();
    calcValue = displayValue.toDouble();

    QPushButton *button = (QPushButton *)sender();
    QString btnVal = button->text();
    if (QString::compare(btnVal, "/", Qt::CaseInsensitive) == 0 ) {
        divTrigger = true;
    } else if (QString::compare(btnVal, "*", Qt::CaseInsensitive) == 0 ) {
       multTrigger = true;
    } else if (QString::compare(btnVal, "+", Qt::CaseInsensitive) == 0 ) {
       addTrigger = true;
    } else {
        subTrigger = true;
    }

    ui->Display->setText("");
}


void Calculator::EqualButton() {
    double solution = 0.0;
    QString displayValue = ui->Display->text();
    double dblDisplayValue = displayValue.toDouble();

    if (addTrigger || subTrigger || multTrigger || divTrigger) {
        if (addTrigger) {
            solution = calcValue + dblDisplayValue;
        } else if (subTrigger) {
            solution = calcValue - dblDisplayValue;
        } else if (multTrigger) {
            solution = calcValue * dblDisplayValue;
        } else {
            solution = calcValue / dblDisplayValue;
        }
    }

    ui->Display->setText(QString::number(solution));
}

void Calculator::ChangeNumberSign() {
    QString displayValue = ui->Display->text();
    QRegExp reg("[-]?[0-9]*");
    if (reg.exactMatch(displayValue)) {
        double dblDisplayVal = displayValue.toDouble();
        double dblDisplayValSign = -1 * dblDisplayVal;

        ui->Display->setText(QString::number(dblDisplayValSign));
    }
}


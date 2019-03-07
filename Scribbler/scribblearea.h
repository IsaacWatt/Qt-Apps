#ifndef SCRIBBLEAREA_H
#define SCRIBBLEAREA_H

#include <QMainWindow>

namespace Ui {
class ScribbleArea;
}

class ScribbleArea : public QMainWindow
{
    Q_OBJECT

public:
    explicit ScribbleArea(QWidget *parent = nullptr);
    ~ScribbleArea();

private:
    Ui::ScribbleArea *ui;
};

#endif // SCRIBBLEAREA_H

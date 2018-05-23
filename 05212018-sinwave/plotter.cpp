#include <QPainter>
#include <QBrush>
#include <QPen>
#include <QColor>
#include <cmath>
#include "plotter.h"

Plotter::Plotter(QWidget *parent) : QWidget(parent)
{

}

void Plotter::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QBrush   brush;
    QPen     pen;

    // turn on anti-aliasing
    painter.setRenderHint(QPainter::Antialiasing);

    // set brush to the yellow color by RGB
    brush.setColor(QColor(255, 255, 100));
    brush.setStyle(Qt::SolidPattern);

    // pass on the brush created over to the painter
    painter.setBrush(brush);

    // create a red pen by RGB
    pen.setColor(QColor(255, 0, 0));
    pen.setWidth(2);

    // pass on the pen to the painter
    painter.setPen(pen);

    // fill the component with a rectangle
    painter.drawRect(0, 0, this->width(), this->height());

    // draw the horizontal x-axis
    pen.setStyle(Qt::DashLine);
    painter.setPen(pen);
    painter.drawLine(0, height()/2.0, width(), height()/2.0);

    // draw a blue solid-lined sine function
    pen.setStyle(Qt::SolidLine);
    pen.setColor(QColor(0, 0, 255));
    painter.setPen(pen);

    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;

    for (int i = 0; i < (width() - 1); i++)
    {
        x1 = x2;
        y1 = y2;

        x2 = i;
        y2 = (height()/2.0) - (height()/2.0) * sin(2 * M_PI * x2/width());

        painter.drawLine(x1, y1, x2, y2);
    }
}

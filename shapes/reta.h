#ifndef RETA_H
#define RETA_H

#include "figurageometrica.h"

class Reta : public FiguraGeometrica
{
private:
    int end_x, end_y;
public:
    Reta(int begin_x, int begin_y, int end_x, int end_y);
    void draw(Screen &t);
};

#endif // RETA_H

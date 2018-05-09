#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

#include "screen.h"

class FiguraGeometrica
{
protected:
    int origin_x, origin_y;
    int height, width;

public:
    virtual void draw(Screen &t) = 0;
};

#endif // FIGURAGEOMETRICA_H

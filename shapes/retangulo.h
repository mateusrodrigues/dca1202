#ifndef RETANGULO_H
#define RETANGULO_H

#include "figurageometrica.h"

class Retangulo : public FiguraGeometrica
{
public:
    Retangulo(int origin_x, int origin_y, int width, int height);
    void draw(Screen &t);
};

#endif // RETANGULO_H

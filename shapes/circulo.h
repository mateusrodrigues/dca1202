#ifndef CIRCULO_H
#define CIRCULO_H

#include "figurageometrica.h"

class Circulo : public FiguraGeometrica
{
private:
    int radius;
    bool fill;
public:
    Circulo(int xc, int yc, int rad, bool fill);
    void draw(Screen &t);
};

#endif // CIRCULO_H

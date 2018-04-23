#ifndef POLIGONO_H
#define POLIGONO_H

#include "ponto.h"

class Poligono
{
private:
    Ponto vertices[];
public:
    Poligono();
    ~Poligono();
};

#endif // POLIGONO_H

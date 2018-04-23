#ifndef POLIGONO_H
#define POLIGONO_H

#include "ponto.h"

class Poligono
{
private:
    int nVertices;
    Ponto* vertices;
public:
    Poligono();
    ~Poligono();
    void addVertice(Ponto p1);
    void imprimePonto(int n);
};

#endif // POLIGONO_H

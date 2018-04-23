#include "poligono.h"

#include <cstdlib>

Poligono::Poligono()
{
    vertices = (Ponto*) malloc(1 * sizeof(Ponto));
}

Poligono::~Poligono()
{
    free(vertices);
}

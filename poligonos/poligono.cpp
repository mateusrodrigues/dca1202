#include "poligono.h"

#include <iostream>
#include <cstdlib>

Poligono::Poligono()
{
    nVertices = 0;
    vertices = (Ponto*) malloc(1 * sizeof(Ponto));
    std::cout << "Constructed: size of ponto = " << sizeof(Ponto) << std::endl;
}

Poligono::~Poligono()
{
    free(vertices);
}

void Poligono::addVertice(Ponto p1)
{
    if (nVertices == 100)
        return;

    vertices[nVertices++] = p1;
    vertices = (Ponto*) realloc(vertices, (nVertices + 1) * sizeof(Ponto));
}

void Poligono::imprimePonto(int n)
{
    std::cout << "Ponto " << n << ": ";
    vertices[n].imprime();
    std::cout << std::endl;
}

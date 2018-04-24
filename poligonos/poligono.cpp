#include "poligono.h"

#include <cmath>
#include <iostream>

Poligono::Poligono()
{
    nVertices = 0;
}

void Poligono::addVertice(Ponto p1)
{
    vertices[nVertices++] = p1;
}

int Poligono::getNumeroVertices()
{
    return nVertices;
}

float Poligono::getArea()
{
    float area = 0.0;

    int j = nVertices - 1;
    for (int i = 0; i < nVertices; i++)
    {
        area += (vertices[j].getX() + vertices[i].getX())
                * (vertices[j].getY() - vertices[i].getY());
        j = i;
    }

    return std::abs(area / 2.0);
}

void Poligono::translada(float a, float b)
{
    for (int i = 0; i < nVertices; i++)
    {
        vertices[i].translada(a, b);
    }
}

void Poligono::rotaciona(Ponto origem, float graus)
{
    // converter angulo para radiano
    float rad = graus * (M_PI / 180.0);
    // rotaciona o poligono ao redor do ponto
    for (int i = 0; i < nVertices; i++)
    {
        float xr = origem.getX() + ((vertices[i].getX() - origem.getX())
                                 * std::cos(rad)
                - (vertices[i].getY() - origem.getY())
                                 * std::sin(rad));
        float yr = origem.getY() + ((vertices[i].getX() - origem.getX())
                                 * std::sin(rad)
                + (vertices[i].getY() - origem.getY())
                                 * std::cos(rad));
        vertices[i].setXY(xr, yr);
    }
}

void Poligono::imprime()
{
    for (int i = 0; i < nVertices - 1; i++)
    {
        printf("(%.2f, %.2f) → ", vertices[i].getX(),
               vertices[i].getY());
    }
    printf("(%.2f, %.2f)\n", vertices[nVertices - 1].getX(),
           vertices[nVertices - 1].getY());
}

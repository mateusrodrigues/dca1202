#include <cmath>
#include <cstdio>
#include "ponto.h"

Ponto::Ponto()
{

}

void Ponto::setX(float _x)
{
    x = _x;
}

void Ponto::setY(float _y)
{
    y = _y;
}

void Ponto::setXY(float _x, float _y)
{
    x = _x; y = _y;
}

float Ponto::getX()
{
    return x;
}

float Ponto::getY()
{
    return y;
}

Ponto Ponto::add(Ponto p1)
{
    Ponto res;
    res.x = x + p1.x;
    res.y = y + p1.y;
    return res;
}

Ponto Ponto::sub(Ponto p1)
{
    Ponto res;
    res.x = x - p1.x;
    res.y = y - p1.y;
    return res;
}

float Ponto::norma()
{
    return sqrt(x*x + y*y);
}

void Ponto::translada(float a, float b)
{
    x = x + a;
    y = y + b;
}

void Ponto::imprime()
{
    printf("(%f, %f)\n", x, y);
}

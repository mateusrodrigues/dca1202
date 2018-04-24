#include "retangulo.h"

Retangulo::Retangulo(float x, float y, float largura, float altura)
{
    Ponto p1, p2, p3, p4;
    p1.setXY(x, y);
    p2.setXY(x + largura, y);
    p3.setXY(x + largura, y + altura);
    p4.setXY(x, y + altura);

    addVertice(p1);
    addVertice(p2);
    addVertice(p3);
    addVertice(p4);
}

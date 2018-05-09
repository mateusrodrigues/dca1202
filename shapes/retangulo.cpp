#include "retangulo.h"

Retangulo::Retangulo(int origin_x, int origin_y, int width, int height)
{
    this->origin_x = origin_x;
    this->origin_y = origin_y;
    this->width    = width;
    this->height   = height;
}

void Retangulo::draw(Screen &t)
{
    for (int i = 0; i <= width; i++)
    {
        t.setPixel(origin_x + i, origin_y);
        t.setPixel(origin_x + i, origin_y + height);
    }
    for (int i = 0; i <= height; i++)
    {
        // TODO: Finish this implementation
    }
}

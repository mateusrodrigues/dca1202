#include "circulo.h"
#include "reta.h"

Circulo::Circulo(int xc, int yc, int rad, bool fill)
{
    origin_x = xc;
    origin_y = yc;
    radius = rad;
    this->fill = fill;
}

void Circulo::draw(Screen &t)
{
    int x = radius - 1;
    int y = 0;
    int dx = 1;
    int dy = 1;
    int err = dx - (radius << 1);

    while (x >= y)
    {
        if (!fill)
        {
            t.setPixel(origin_x + x, origin_y + y);
            t.setPixel(origin_x - x, origin_y + y);
        }
        else
        {
            Reta ret1(origin_x - x, origin_y + y,
                     origin_x + x, origin_y + y);
            Reta ret2(origin_x - x, origin_y - y,
                     origin_x + x, origin_y - y);
            ret1.draw(t);
            ret2.draw(t);
        }
        t.setPixel(origin_x + y, origin_y + x);
        t.setPixel(origin_x - y, origin_y + x);
        t.setPixel(origin_x - x, origin_y - y);
        t.setPixel(origin_x - y, origin_y - x);
        t.setPixel(origin_x + y, origin_y - x);
        t.setPixel(origin_x + x, origin_y - y);

        if (err <= 0)
        {
            y++;
            err += dy;
            dy += 2;
        }

        if (err > 0)
        {
            x--;
            dx += 2;
            err += dx - (radius << 1);
        }
    }
}

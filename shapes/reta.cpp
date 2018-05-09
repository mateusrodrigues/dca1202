#include "reta.h"

Reta::Reta(int begin_x, int begin_y, int end_x, int end_y)
{
    this->origin_x = begin_x;
    this->origin_y = begin_y;
    this->end_x = end_x;
    this->end_y = end_y;
}

void Reta::draw(Screen &t)
{
    int dx = end_x - origin_x;
    int dy = end_y - origin_y;
    int D  = (2 * dy) - dx;
    int y  = origin_y;

    for (int x = origin_x; x <= end_x; x++)
    {
        t.setPixel(x, y);
        if (D > 0)
        {
            y = y + 1;
            D = D - (2 * dx);
        }
        D = D + (2 * dy);
    }
}

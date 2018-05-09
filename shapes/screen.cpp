#include "screen.h"

#define SPACE_CHAR 32

Screen::Screen(int nlin, int ncol)
{
    this->nlin = nlin;
    this->ncol = ncol;
    mat = vector< vector<char> >(nlin, vector<char>(ncol, SPACE_CHAR));
}

void Screen::setPixel(int x, int y)
{
    if ((x >= 0 && x <= ncol)
            && (y >= 0 && y <= nlin))
    {
        mat[x][y] = brush;
    }
}

void Screen::clear()
{
    for (int i = 0; i < nlin; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            mat[i][j] = SPACE_CHAR;
        }
    }
}

void Screen::setBrush(char brush)
{
    this->brush = brush;
}

ostream &operator<<(ostream &os, Screen &t)
{
    for (int i = 0; i < t.nlin; i++)
    {
        for (int j = 0; j < t.ncol; j++)
        {
            // TODO: Check the need for inverted indexes
            os << t.mat[j][i];
        }

        os << endl;
    }

    return os;
}


#include "matrix.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Matrix::Matrix(unsigned int _nl, unsigned int _nc)
{
    x = nullptr;

    if (_nl == 0 || _nc == 0)
    {
        nl = nc = 0;
        return;
    }

    nl = _nl;
    nc = _nc;

    // allocate auxiliary array
    x = new float*[nl];
    if (x == nullptr)
    {
        exit(-1);
    }

    x[0] = new float[nl * nc];
    if (x[0] == nullptr)
    {
        exit(-1);
    }

    for (int i = 1; i < nl; i++)
    {
        x[i] = x[i - 1] + nc;
    }
}

Matrix::~Matrix()
{
    if (x != nullptr)
    {
        delete [] x[0];
        delete [] x;
    }
}

float& Matrix::operator()(unsigned int i, unsigned int j)
{
    if (i < nl && j < nc)
    {
        return x[i][j];
    }
    else
    {
        exit(-1);
    }
}

void Matrix::random()
{
    for (int i = 0; i < nl*nc; i++)
    {
        x[0][i] = rand() % 10;
    }
}

void Matrix::print()
{
    for (int i = 0; i < nl; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            printf("%.2f ", x[i][j]);
        }
        printf("\n");
    }
}

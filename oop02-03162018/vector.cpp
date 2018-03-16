#include "vector.h"
#include <cmath>
#include <iostream>

using namespace std;

Vector::Vector()
{

}

void Vector::setX(float _x)
{
    x = _x;
}

void Vector::setY(float _y)
{
    y = _y;
}

float Vector::getX(void)
{
    return x;
}

float Vector::getY(void)
{
    return y;
}

float Vector::norm(void)
{
    return sqrt(x*x + y*y);
}

float Vector::theta(void)
{
    return atan(y/x) * 180.0/M_PI;
}

void Vector::print(void)
{
    cout << "("
         << x
         << ", "
         << y
         << ")"
         << endl;
}

void Vector::invert(void)
{
    x = -x; y = -y;
}

void Vector::invert(int mode)
{
    if (mode == 1)
        x = -x;
    else if (mode == 2)
        y = -y;
}

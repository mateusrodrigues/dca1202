#include "vector.h"
#include <cmath>
#include <iostream>

using namespace std;

//Vector::Vector()
//{
//    cout << "Default constructor (without arguments)!" << endl;
//    x = y = 0;
//}

Vector::Vector(float _x, float _y)
{
    cout << "Class constructor with arguments!" << endl;
    x = _x; y = _y;
}

Vector::Vector(Vector &v)
{
    cout << "Copy constructor\n";
}

Vector::~Vector()
{
    cout << "Class destructor!" << endl;
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

Vector Vector::add(Vector &v)
{
    Vector ret;
    ret.x = x + v.x;
    ret.y = y + v.y;

    return ret;
}

Vector Vector::subtract(Vector v)
{
    Vector ret;
    ret.x = x - v.x;
    ret.y = y - v.y;

    return ret;
}

Vector Vector::multiply(float scalar)
{
    Vector ret;
    ret.x = x * scalar;
    ret.y = y * scalar;

    return ret;
}

Vector Vector::multiply(Vector v)
{
    Vector ret;
    ret.x = x * v.x;
    ret.y = y * v.y;

    return ret;
}

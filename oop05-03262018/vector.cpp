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

Vector Vector::operator +(Vector v)
{
    Vector ret;
    ret.x = x + v.x;
    ret.y = y + v.y;

    return ret;
}

Vector Vector::operator -(Vector v)
{
    Vector ret;
    ret.x = x - v.x;
    ret.y = y - v.y;

    return ret;
}

Vector Vector::operator *(Vector v)
{
    Vector ret;
    ret.x = x * v.x;
    ret.y = y * v.y;

    return ret;
}

Vector Vector::operator *(float scalar)
{
    Vector ret;
    ret.x = scalar * x;
    ret.y = scalar * y;

    return ret;
}

Vector operator *(float scalar, Vector v)
{
    Vector ret;
//    ret.setX(v.getX() * scalar);
//    ret.setY(v.getY() * scalar);

    ret.x = v.x * scalar;
    ret.y = v.y * scalar;

    return ret;
}

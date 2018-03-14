#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Vector
{
private:
    float x, y;

public:
    void setX(float _x)
    {
        x = _x;
    }

    void setY(float _y)
    {
        y = _y;
    }

    float getX(void)
    {
        return x;
    }

    float getY(void)
    {
        return y;
    }

    float norm(void)
    {
        return sqrt(x*x + y*y);
    }

    float theta(void)
    {
        return atan(y/x) * 180.0/M_PI;
    }

    void print(void)
    {
        cout << "("
             << x
             << ", "
             << y
             << ")"
             << endl;
    }
};

int main()
{
    Vector v1;
    v1.setX(4);
    v1.setY(4);

    float norm = v1.norm();
    float theta = v1.theta();

    cout << "Vector = ";
    v1.print();

    cout << "Norm: " << norm << endl;
    cout << "Theta: " << theta << " degrees" << endl;

    return 0;
}

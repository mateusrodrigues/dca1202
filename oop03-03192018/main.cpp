#include <iostream>
#include <cmath>
#include "vector.h"

using namespace std;

int main()
{
    Vector v1(3, 4), v2(-1, 10), v3;
    v1.print();

    v3 = v1.multiply(M_PI);
    v3.print();

    v1.print();
    v1.invert();
    v1.print();

    return 0;
}

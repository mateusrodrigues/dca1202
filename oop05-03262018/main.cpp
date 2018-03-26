#include "vector.h"
#include <iostream>

using namespace std;

int main()
{
    Vector v1(10, 10), v2(1, 1), v3;

    v1.print();
    v2.print();
    v3 = v1 + v2;
    v3.print();

    v3 = v1 - v2;

    v3.print();

    v3 = v1 * v2;

    v3.print();

    v3 = v1 * 4;

    v3.print();

    v3 = 4 * v1;

    v3.print();

    return 0;
}

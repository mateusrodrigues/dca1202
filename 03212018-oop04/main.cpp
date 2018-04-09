#include "vector.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    Vector v1(3, 4), v2(-1, 10), v3;
    v1.print();

    cout << "-------v3--------\n";
    v3.print();
    cout << "-----------------\n";

    v3 = v1.multiply(M_PI);
    v3.print();
    v3 = v1.add(v2);

    Vector v4 = v1, v5(v3);
    cout << "-------v4--------\n";
    v4.print();
    cout << "-------v5--------\n";
    v5.print();
    cout << "-----------------\n";
    v1.print();
    v1.invert();
    v1.print();

    return 0;
}

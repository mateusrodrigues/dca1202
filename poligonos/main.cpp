#include <iostream>
#include "ponto.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    Ponto a, b;
    a.setXY(1.54, 2.33);
    b.setXY(2.33, 5.44);

    a.imprime();
    b.imprime();

    Ponto c;
    c = a.add(b);

    c.imprime();

    return 0;
}

#include <iostream>
#include "ponto.h"
#include "poligono.h"

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

    Poligono p;
    for (int i = 0; i < 100; i++)
    {
        p.addVertice(a);
    }

    p.addVertice(a);
    p.imprimePonto(0);
    p.imprimePonto(1);
    p.imprimePonto(2);

    return 0;
}

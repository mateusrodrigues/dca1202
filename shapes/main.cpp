#include <iostream>

#include "screen.h"
#include "reta.h"
#include "retangulo.h"

using namespace std;

int main()
{
    Screen t(20, 20);
    t.setBrush('*');

    Retangulo ret(0, 0, 15, 5);
    ret.draw(t);

    cout << t << endl;
    return 0;
}

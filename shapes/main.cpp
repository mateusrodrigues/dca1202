#include <iostream>

#include "screen.h"
#include "reta.h"

using namespace std;

int main()
{
    Screen t(20, 20);
    t.setBrush('*');

    Reta reta(0, 0, 10, 5);
    reta.draw(t);

    t.setPixel(15,5);

    cout << t << endl;
    return 0;
}

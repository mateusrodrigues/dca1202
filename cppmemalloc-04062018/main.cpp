#include <iostream>
#include "test.h"

using namespace std;

int main()
{    
    int *x;
    Test *t;

    t = new Test;
    delete t;
    t = new Test(10);
    t->hello();
    delete t;

    t = new Test[5];
    delete [] t;

    x = new int;
    *x = 5;
    x[0] = 8;

    cout << "*x = " << *x << endl;
    cout << "x[0] = " << x[0] << endl;
    delete x;

    x = new int[5];
    x[0] = 8; x[1] = -9;
    delete [] x;

    return 0;
}

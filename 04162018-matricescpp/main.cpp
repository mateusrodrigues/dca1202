#include <iostream>
#include "matrix.h"

using namespace std;

int main()
{
    Matrix A(3, 3);
    A.random();
    A(2, 2) = 100;
    A.print();
    cout << "Hello World!" << endl;
    return 0;
}

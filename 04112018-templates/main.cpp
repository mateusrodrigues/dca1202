#include <iostream>
#include "vector.h"

template <typename T, int n = 10>
T average(T a, T b);

using namespace std;

int main()
{
    float x, y;
    cin >> x >> y;

    Vector v1(3, 4), v2(8, -6), v3;
    v3 = average<Vector>(v1, v2);
    v3.print();

    // calling the function for floats
    cout << "average for floats = " << average<float>(x, y)
         << endl;
    cout << "average for ints   = " << average<int>(x, y)
         << endl;
    cout << "average for what   = " << average(x, y)
         << endl;

    return 0;
}

template <typename T, int n = 10>
T average(T a, T b)
{
    T x[n];
    T ret;
    ret = (a + b) / 2;
    return ret;
}

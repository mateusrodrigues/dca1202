#include <iostream>
#include <vector.h>

using namespace std;

int main()
{
    Vector v1;

    v1.setX(4);
    v1.setY(3);
    v1.print();
    cout << endl;

    cout << "Norm = " << v1.norm() << endl;
    cout << "Theta = " << v1.theta() << endl;
    cout << "v1x = " << v1.getX() << endl;
    cout << "v1y = " << v1.getY() << endl << endl;

    cout << "Inverting the first element..." << endl;
    v1.invert(1);
    cout << "v1x = " << v1.getX() << endl;

    return 0;
}

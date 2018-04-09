#include <iostream>
#include "engine.h"

using namespace std;

int main()
{
    Engine m;
    m.setMake("ACME");
    m.setPrice(23.45);
    m.setName("Speedatron");
    m.setPower(130);
    m.setSpeed(280);

    cout << m.getMake() << endl
         << m.getPrice() << endl
         << m.getName() << endl
         << m.getPower() << endl
         << m.getSpeed() << endl;

    return 0;
}

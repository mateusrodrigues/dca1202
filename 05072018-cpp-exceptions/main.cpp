#include <iostream>
#include <cmath>

using namespace std;

float geometrica(float a, float b) {
    if (a*b >= 0)
        return sqrt(a*b);
    else
        throw "a * b < 0";
}

float harmonica(float a, float b) {
    if (a + b != 0)
        return 2*a*b/(a + b);
    else
        throw "a + b = 0";
}

int main()
{
    float x, y;
    cout << "Digite x e y: ";
    cin >> x >> y;
    try
    {
        cout << "geometrica = " << geometrica(x, y) << endl;
    }
    catch (const char* e)
    {
        cout << "ERRO: " << e << endl;
    }

    try
    {
        cout << "harmonica = " << harmonica(x, y) << endl;
    }
    catch (const char* e)
    {
        cout << "ERRO: " << e << endl;
    }
    catch (...)
    {
        cout << "ERRO desconhecido" << endl;
    }


    return 0;
}

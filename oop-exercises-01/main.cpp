#include "veiculo.h"
#include <iostream>

using namespace std;

int main()
{
    Veiculo v1(100, 1000, 4);
    v1.setFabricante("Maseratti");
    v1.setValocidadeMaxima(100);

    cout << "Seu " << v1.getFabricante() << " acelera até " << v1.getVelocidadeMaxima() << endl;

    int i = 0;
    for (i = 0; i < 4; i++)
    {
        cout << "Acelerando..." << endl;
        v1.acelerar();
        cout << "Velocidade atual: " << v1.getVelocidade() << endl;
    }

    for (i = 0; i < 4; i++)
    {
        cout << "Freando..." << endl;
        v1.frear();
        cout << "Velocidade atual: " << v1.getVelocidade() << endl;
    }

    return 0;
}

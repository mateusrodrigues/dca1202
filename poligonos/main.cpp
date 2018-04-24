#include <iostream>
#include "retangulo.h"

using namespace std;

int main()
{
    Retangulo ret(0, 0, 3, 4);
    ret.imprime();

    cout << "Área do retângulo: " << ret.getArea()
         << " (antes da translação)" << endl;

    ret.translada(-3, 4);

    cout << "Área do retângulo: " << ret.getArea()
         << " (após a translação)" << endl;

    Ponto cm;
    cm.setXY(1.5, 2.0);
    ret.rotaciona(cm, 30);

    cout << "Área do retângulo: " << ret.getArea()
         << " (após a translação e rotação)" << endl;

    return 0;
}

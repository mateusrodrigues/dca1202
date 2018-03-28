#ifndef VEICULO_H
#define VEICULO_H

class Veiculo
{
private:
    char fabricante[41];
    int rodas, massa, velocidade, velocidadeMaxima;

public:
    Veiculo(int _velocidadeMaxima, int _massa, int _rodas);
    int getVelocidade();
    int getVelocidadeMaxima();
    void setValocidadeMaxima(int _velocidadeMaxima);
    char* getFabricante();
    void setFabricante(const char *_fabricante);
    void acelerar();
    void frear();
};

#endif // VEICULO_H

#include "veiculo.h"
#include <cstdlib>
#include <cstring>

Veiculo::Veiculo(int _velocidadeMaxima, int _massa, int _rodas)
{
    velocidade = 0;
    velocidadeMaxima = _velocidadeMaxima;
    massa = _massa;
    rodas = _rodas;
}

int Veiculo::getVelocidade()
{
    return velocidade;
}

int Veiculo::getVelocidadeMaxima()
{
    return velocidadeMaxima;
}

void Veiculo::setValocidadeMaxima(int _velocidadeMaxima)
{
    velocidadeMaxima = _velocidadeMaxima;
}

char* Veiculo::getFabricante()
{
    return fabricante;
}

void Veiculo::setFabricante(const char *_fabricante)
{
    if (strlen(_fabricante) < 41)
        strcpy(fabricante, _fabricante);
}

void Veiculo::acelerar()
{
    if ((velocidade + 5) > velocidadeMaxima)
        velocidade = velocidadeMaxima;
    else
        velocidade += 5;
}

void Veiculo::frear()
{
    if ((velocidade - 5) < 0)
        velocidade = 0;
    else
        velocidade -= 5;
}

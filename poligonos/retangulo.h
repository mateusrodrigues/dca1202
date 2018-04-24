#ifndef RETANGULO_H
#define RETANGULO_H

#include "poligono.h"

class Retangulo : public Poligono
{
public:
    /**
     * @brief Retangulo é o construtor da classe
     * @param x é o ponto x da origem do retângulo
     * @param y é o ponto y da origem do retângulo
     * @param largura é a largura do retângulo
     * @param altura é a altura do retângulo
     */
    Retangulo(float x, float y, float largura, float altura);
};

#endif // RETANGULO_H

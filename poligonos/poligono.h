#ifndef POLIGONO_H
#define POLIGONO_H

#include "ponto.h"

class Poligono
{
private:
    int nVertices;
    Ponto vertices[100];
public:
    Poligono();
    /**
     * @brief addVertice adiciona um vértice ao polígono
     * @details Adiciona um vértice em formato de Ponto ao polígono.
     * @param p1 é o ponto referente ao vértice a ser adicionado
     */
    void addVertice(Ponto p1);
    /**
     * @brief getNumeroVertices retorna o número de vértices do polígono
     * @return número de vértices do polígono
     */
    int getNumeroVertices();
    /**
     * @brief getArea calcula a área do polígono inserido utilizando o algoritmo Shoelace
     * @return área do polígono
     */
    float getArea();
    /**
     * @brief translada translada o polígono de +a e +b
     * @param a valor de translação em x
     * @param b valor de translação em y
     */
    void translada(float a, float b);
    /**
     * @brief rotaciona rotaciona o polígono em 'graus' graus ao redor de um ponto 'origem'
     * @param origem é o ponto ao redor do qual o polígono será rotacionado
     * @param graus é a quantidade de graus a rotacionar o polígono
     */
    void rotaciona(Ponto origem, float graus);
    /**
     * @brief imprime imprime o polígono armazenado
     */
    void imprime();
};

#endif // POLIGONO_H

#ifndef PONTO_H
#define PONTO_H


class Ponto
{
private:
    float x, y;
public:
    /**
     * @brief Ponto é o construtor da classe. Não recebe parâmetros.
     */
    Ponto();
    /**
     * @brief setX define o valor da coordenada x do ponto
     * @param _x é o valor da coordenada x
     */
    void setX(float _x);
    /**
     * @brief setY define o valor da coordenada y do ponto
     * @param _y é o valor da coordenada y
     */
    void setY(float _y);
    /**
     * @brief setXY define ambas as coordenadas x e y
     * @details Define, em uma mesma função, os valores da coordenadas x e y do ponto.
     * @param _x é o valor da coordenada x
     * @param _y é o valor da coordenada y
     */
    void setXY(float _x, float _y);
    /**
     * @brief getX recupera o valor da coordenada x do ponto
     * @return o valor da coordenada x do ponto
     */
    float getX(void);
    /**
     * @brief getY recupera o valor da coordenada y do ponto
     * @return o valor da coordenada y do ponto
     */
    float getY(void);
    /**
     * @brief add adiciona as coordenadas (x, y) com as de um ponto P1
     * @details Adiciona as coordenadas (x, y) do ponto com as coordenadas de
     * um ponto P1(x1, y1) fornecido, armazenando o resultado (x + x1, y + y1) nas
     * coordenadas de um novo ponto, que deve ser retornado
     * @param p1 é o ponto com os parâmetros a serem adicionados
     * @return o novo ponto com o resultado da operação
     */
    Ponto add(Ponto p1);
    /**
     * @brief sub subtrai as coordenadas (x, y) com as de um ponto P1
     * @details Subtrai as coordenadas (x, y) do ponto com as coordenadas de
     * um ponto P1(x1, y1) fornecido, armazenando o resultado (x - x1, y - y1) nas
     * coordenadas de um novo ponto, que deve ser retornado
     * @param p1 é o ponto com os parâmetros a serem subtraídos
     * @return o novo ponto com o resultado da operação
     */
    Ponto sub(Ponto p1);
    /**
     * @brief norma calcula a distância do ponto para a origem do sistema de coordenadas
     * @return o valor da norma do ponto
     */
    float norma(void);
    /**
     * @brief translada translada o ponto (x, y) de (+a, +b)
     * @details Translada o ponto (x, y) de (+a, +b) de modo que, após a
     * execução do método, as coordenadas do ponto serão (x + a, y + b)
     * @param a valor de translação para o ponto x
     * @param b valor de translação para o ponto y
     */
    void translada(float a, float b);
    /**
     * @brief imprime imprime o ponto na forma (x, y)
     */
    void imprime(void);
};

#endif // PONTO_H

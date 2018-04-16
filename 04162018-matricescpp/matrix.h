#ifndef MATRIX_H
#define MATRIX_H


class Matrix
{
private:
    int nl, nc;
    float** x;
public:
    Matrix(unsigned int _nl = 0, unsigned int _nc = 0);
    ~Matrix();
    float& operator()(unsigned int i, unsigned int j);
    void random();
    void print();
};

#endif // MATRIX_H

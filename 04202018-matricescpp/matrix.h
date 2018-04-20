#ifndef MATRIX_H
#define MATRIX_H

/**
 * @brief The Matrix class does mathematical operations
 * between matrices of type float.
 */
class Matrix
{
    // no de linhas e colunas da matriz
    int nl, nc;
    float** x;
public:
    /**
     * @brief Matrix is a class constructor.
     * @details It allocates dynamically a two-dimensional array
     * that stores the matrix to be processed.
     * @param _nl is the amount of lines of the array
     * @param _nc is the amount of columns of the array
     * <ul>
     * <li> If _nl or _nc is zero, the matrix will have all its
     * dimensions defined to zero. </li>
     * <li> If the dimensions are negative, the program will be
     * terminated. </li>
     * </ul>
     * @author Mateus Rodrigues de Morais
     */
    Matrix(int _nl=0, int _nc=0);
    ~Matrix();
    Matrix(Matrix& m);
    /**
     * @brief operator = copies the state of the given matrix to
     * the current object
     * @details dynamic memory allocation processes are executed to create
     * a matrix with the same dimensions as the one given and, only then, that
     * matrix is copied over to the current object
     * \f[ \int_a^b f(x) dx \f]
     * @param m is the matrix whose state will be copied over
     * @return a matrix that can be used in a chained attribution context
     * @author Mateus Rodrigues de Morais
     */
    Matrix operator=(Matrix& m);
    Matrix operator+(Matrix& m);
    float& operator()(int i, int j);
    void random();
    void print();
};

#endif // MATRIX_H

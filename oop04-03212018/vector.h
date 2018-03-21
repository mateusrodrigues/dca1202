#ifndef VECTOR_H
#define VECTOR_H


class Vector
{
private:
    float x, y;

public:
//    Vector();
    Vector(float _x = 0, float _y = 0);
    Vector(Vector &v);
    ~Vector();
    void setX(float _x);
    void setY(float _y);
    float getX(void);
    float getY(void);
    float norm(void);
    float theta(void);
    void print(void);
    void invert(void);
    void invert(int mode);
    Vector add(Vector &v);
    Vector subtract(Vector v);
    Vector multiply(float scalar);
    Vector multiply(Vector v);
};

#endif // VECTOR_H

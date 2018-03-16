#ifndef VECTOR_H // ignore this file if it has already been compiled by
                 // checking whether the VECTOR_H symbol has been defined before.
#define VECTOR_H

class Vector
{
private:
    float x, y;

public:
    Vector();
    void setX(float _x);
    void setY(float _y);
    float getX(void);
    float getY(void);
    float norm(void);
    float theta(void);
    void print(void);
    void invert(void);
    void invert(int mode);
};

#endif // VECTOR_H

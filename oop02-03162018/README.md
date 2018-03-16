# Object-Oriented Programming
## 3/16/18

### How to separate classes in separate files

Each class will be separated into two files:
- **SomeClass.h**: will consist of method prototypes and properties only, called a header file.
- **SomeClass.cpp**: will contain the actual implementation of the class.

Your **main** file will have to contain an include directive to bring on your new class to the program, like this:

```C
#include "SomeClass.h"
```

The process of compilation consists of the following:

Considering the class **Vector.cpp**:
1. vector.cpp &#8594; g++ &#8594; vector.o
2. main.cpp &#8594; g++ &#8594; main.o
3. vector.o + main.o = Vector (executable)

### Bulding a class with multiple files

#### The header file _(vector.h)_

```C
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
};
```

#### The implementation file _(vector.cpp)_

```C
#include "vector.h"

void Vector::setX(float _x)
{
    x = _x;
}

void Vector::setY(float _y)
{
    y = _y;
}

float Vector::getX(void)
{
    return x;
}

float Vector::getY(void)
{
    return y;
}
```
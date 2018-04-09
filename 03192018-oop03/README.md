# OOP
## 3/19/2018

### Constructors and Destructors

- **Constuctors** are methods that have the same name as the class itself. They execute a piece of code at the moment of instantiation.
- **Destructors** are methods executed right before the object is finalized.

#### Example:

```C
// vector.h
class Vector
{
private:
    float x, y;

public:
    // Constructor without arguments
    Vector();
    // Constructor with arguments
    Vector(float _x, float _y);
    // Destructor
    ~Vector();
};
```

```C
// vector.cpp
#include "vector.h"

Vector::Vector()
{
    x = y = 0;
}

Vector::Vector(float _x, float _y)
{
    x = _x; y = _y;
}

Vector::~Vector()
{
    cout << "Class destructor!" << endl;
}
```

```C
// main.cpp
#include "vector.h"

int main()
{
    Vector v1(3, 4), v2(-1, 10), v3;

    return 0;
}
```
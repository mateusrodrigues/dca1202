# Object-Oriented Programming
## 3/14/18

In order to do OOP, we should use **C++**. It has some differences from C, including:

|     C     |     C++    |
|-----------|------------|
|  stdio.h  |  iostream  |
|  scanf    |  cin       |
|  printf   |  cout      |

- The `<<` operator is called the **insertion operator**
- The `>>` operator is called the **extraction operator**
- The `::` operator is called the **scope operator**, and it serves to access members of a certain namespace

### Classes

Class names should have their first letter capitalized. Classes store variables and methods/member functions. Variables store state and methods read from or alter these states.

There are two ways to declare these variables/methods: using **public** or **private** instructions, which mean:

- **private** variables or methods are only accessible by methods beloging to the class itself.
- **public** variables or methods are also accessible outside the class.

As an example, to declare a class representing a mathematical vector, one should do:

```C
class Vector
{
private:
    float x, y;

public:
    void setX(float _x)
    {
        x = _x;
    }

    void setY(float _y)
    {
        y = _y;
    }

    float getX(void)
    {
        return x;
    }

    float getY(void)
    {
        return y;
    }

    float norm(void)
    {
        return sqrt(x*x + y*y);
    }

    float theta(void)
    {
        return atan(y/x) * 180.0/M_PI;
    }

    void print(void)
    {
        printf("(%.2f, %.2f)\n", x, y);
    }
};
```


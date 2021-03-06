# OOP Inheritance in C++
## 04/09/2018

Inheritance means to have a class that inherits characteristics from another. Usually, these classes model entities from the real world, such as a Beetle is a Car, an Engine is an Equipment, and so on.

One can implement inheritance in this way (only headers):

##### Equipment.h

```C++
class Equipment
{
    char name[100];
    char make[100];
    float price;
public:
    Equipment();
    void setName(const char *_name);
    void setMake(const char *_make);
    void setPrice(float _price);
    char *getName(void);
    char *getMake(void);
    float getPrice(void);
};
```

##### Engine.h

```C++
#include "equipment.h"

class Engine : public Equipment
{
    float power;
    float speed;
public:
    Engine();
    void setPower(float _power);
    void setSpeed(float _speed);
    float getPower(void);
    float getSpeed(void);
};
```

### Access Modifiers

- **public**: the member can be access from anywhere, including the outside of the class.
- **private**: the member can only be accessed from within the class.
- **protected**: the member can only be accessed from within its class or any other class that inherits from it.

### Variable Attribution

If variable `a` belongs to class **A** and another variable `b` to class **B**, the attribution `a = b` is possible if, and only if, **B** is a subclass of **A**.
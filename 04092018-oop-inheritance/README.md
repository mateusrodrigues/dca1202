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
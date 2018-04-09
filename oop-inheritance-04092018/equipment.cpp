#include <cstring>
#include "equipment.h"

Equipment::Equipment()
{

}

void Equipment::setName(const char *_name)
{
    strcpy(name, _name);
}

void Equipment::setMake(const char *_make)
{
    strcpy(make, _make);
}

void Equipment::setPrice(float _price)
{
    price = _price;
}

char *Equipment::getName()
{
    return name;
}

char *Equipment::getMake()
{
    return make;
}

float Equipment::getPrice()
{
    return price;
}

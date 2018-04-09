#ifndef EQUIPMENT_H
#define EQUIPMENT_H

class Equipment
{
    char name[100];
    char make[100];
    float price;
public:
    Equipment();
    ~Equipment();
    void setName(const char *_name);
    void setMake(const char *_make);
    void setPrice(float _price);
    char *getName(void);
    char *getMake(void);
    float getPrice(void);
};

#endif // EQUIPMENT_H

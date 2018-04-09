#ifndef ENGINE_H
#define ENGINE_H

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

#endif // ENGINE_H

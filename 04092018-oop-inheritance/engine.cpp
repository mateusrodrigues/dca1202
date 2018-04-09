#include <iostream>
#include "engine.h"

using namespace std;

Engine::Engine()
{
    cout << "engine constructor" << endl;
}

Engine::~Engine()
{
    cout << "engine destructor" << endl;
}

void Engine::setPrice(float _price)
{
    cout << "setPrice overload" << endl;
    this->Equipment::setPrice(_price);
}

void Engine::setPower(float _power)
{
    power = _power;
}

void Engine::setSpeed(float _speed)
{
    speed = _speed;
}

float Engine::getPower()
{
    return power;
}

float Engine::getSpeed()
{
    return speed;
}

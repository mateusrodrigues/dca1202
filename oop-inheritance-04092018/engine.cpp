#include "engine.h"

Engine::Engine()
{

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

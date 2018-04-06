#include <iostream>
#include "test.h"

Test::Test()
{
    x = 0;
    std::cout << "Defaut constructor!" << std::endl;
}

Test::Test(int a)
{
    x = a;
    std::cout << "Constructor with arguments!" << std::endl;
}

Test::~Test()
{
    std::cout << "Default destructor!" << std::endl;
}

void Test::hello()
{
    std::cout << "Hello, World!" << std::endl;
}

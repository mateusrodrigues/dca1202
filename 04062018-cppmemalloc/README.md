# C++ Dynamic Memory Allocation
## 04/06/2018

Just like `malloc` and `free` in C, C++ has its own operators to perform the same routines.

|     C     |        C++        |
|-----------|-------------------|
|  malloc() | new, new[]        |
|  free()   | delete, delete[]  |


### Examples:

```C++
#include <iostream>
#include "test.h"

using namespace std;

int main()
{    
    int *x;         // This is a primitive type
    Test *t;        // This is a custom class

    t = new Test;   // Allocating the custom class
    t->hello();     // Accessing class member using the -> operator
    delete t;       // Deallocating the custom class

    x = new int;    // Allocating the primitive type
    *x = 5;         // Assigning a new value to x
    x[0] = 8;       // Same thing as last line, different syntax

    cout << "*x = " << *x << endl;
    cout << "x[0] = " << x[0] << endl;
    delete x;

    x = new int[5]; // Allocating primitive type as array of 5 elements
    x[0] = 8; 
    x[1] = -9;
    delete [] x;    // Deallocating the array

    return 0;
}

```

**OBS.:** When allocating a single custom class with `new`, one can call a custom constructor, like: `t = new Test(1)`. But, when allocating with `new[]`, only the **default constructor** can be called.
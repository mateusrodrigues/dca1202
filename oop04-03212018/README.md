# Object-Oriented Programming (C++)
## 3/21/2018

There are three ways to pass parameters:

1. Passing by **value**:
```C++
int f(int x);   // x is an integer
```

2. Passing by **address**:
```C++
int f(int *x);  // x is a pointer to int
```

3. Passing by **reference**:
```C++
int f(int &x);  // x is an integer
```

### Copy Constructors

A copy constructor is yet another type of class constructor that C++ supports. It passes values to the object by reference, like:

```C++
// vector.h
Vector(Vector &v);

// vector.cpp
Vector::Vector(Vector &v)
{
    // something
}
```

Just like the default constructor, it is also **required** to be created with a class -- and also gets a default implementation when not explicitly declared.

### Default Values

When creating a constructor with arguments, one can define default values:

```C++
// vector.h
Vector(float _x = 0, float _y = 0);

// v1       -> x = 0; y = 0
// v1(1)    -> x = 1; y = 0
// v1(4, 5) -> x = 4; y = 5
```

**Important:** The default values are only specified in the HEADER FILE.

The method of declaring default values can also be used in other methods other than constructors.
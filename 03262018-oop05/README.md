# Object-Oriented Programming
## 3/23/18


### Operation Overloading

Operation overloading allows the redefinition of C++ operations to custom classes (such as +, -, +=, %, and so on).

#### Example:

```C++
// vector.h
...
Vector operator + (Vector v);
Vector operator - (Vector v);
Vector operator * (Vector v);
Vector operator * (float scalar);
...
```

```C++
// vector.cpp
...
Vector Vector::operator +(Vector v)
{
    Vector ret;
    ret.x = x + v.x;
    ret.y = y + v.y;

    return ret;
}

Vector Vector::operator -(Vector v)
{
    Vector ret;
    ret.x = x - v.x;
    ret.y = y - v.y;

    return ret;
}

Vector Vector::operator *(Vector v)
{
    Vector ret;
    ret.x = x * v.x;
    ret.y = y * v.y;

    return ret;
}

Vector Vector::operator *(float scalar)
{
    Vector ret;
    ret.x = scalar * x;
    ret.y = scalar * y;

    return ret;
}
...
```

In case of the operation *, you want the **first parameter** to be a scalar, one should do:

```C++
// vector.h
...
};  // outside of the class scope

Vector operator *(float scalar, Vector v);
```

```C++
// vector.cpp
...
Vector operator *(float scalar, Vector v)
{
    Vector ret;
    ret.setX(v.getX() * scalar);
    ret.setY(v.getY() * scalar);

    return ret;
}
...
```

Now you can write something like `v3 = 4 * v1`.

> In terms of performance, executing that number of functions may have an unecessary and undesirable overhead. In that case, a function can be declared as **friend**, so it may have access to private members of the operand class.

#### Example:

```C++
// vector.h
...
// Inside the scope of the class
friend Vector operator *(float scalar, Vector v);
...
```

```C++
// vector.cpp
...
Vector operator *(float scalar, Vector v)
{
    Vector ret;

    ret.x = v.x * scalar;   // Access to private members
    ret.y = v.y * scalar;   // Access to private members

    return ret;
}
...
```
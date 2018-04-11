# C++ Templates
## 04/11/2018

Templates in C++ are ways to create generic functions and do generic programming in the language. As an example, one may have a function that calculates an arithmetic average, such as:

```C++
float average(float a, float b)
{
    return (a + b) / 2.0;
}
```

But this function **only works with type float**. In order to generalize it, one may do:

```C++
template <typename T>
T average(T a, T b)
{
    T ret;
    ret = (a + b) / 2;
    return ret;
}
```

and to call this function, one does:

```C++
float a, b = 10;
int c, d = 2;
float result = average<float>(a, b);
// assumes int:
int another = average(c, d);

// but this is not possible, due to
// different types:
float result = average(a, c);
```

**Important:** if a certain operator used in the template function is not implemented in the desired type, a **compile-time** error occurs.

It is also possible to pass parameters into template definitions, such as:

```
template <typename T, int n = 10>
T average(T a, T b)
{
    T x[n];
    T ret;
    ret = (a + b) / 2;
    return ret;
}
```
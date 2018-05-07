# Exceptions
## 5/7/2018

In order to handle exceptions in C++, inside the function the can throw an exception, one shoudl write:

```C++
float geometrica(float a, float b) {
    if (a*b >0)
        return sqrt(a*b);
    else
        throw "a*b < 0";    // If throws this exception, return const char* data type
}
```

Then, inside the code that calls the function, one should embrace the line of code with a try/catch block:

```C++
try
{
    cout << "geometrica = " << geometrica(x, y) << endl;
}
catch (const char* e)   // catch C-string error message
{
    cout << "ERRO: " << e << endl;
}
catch (...)             // catch an unknown type
{
    cout << "ERRO desconhecido" << endl;
}
```
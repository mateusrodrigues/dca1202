# Pointers
## 3/12/18

### Function Pointers

A pointer can also point to a function. It can be declared in the following manner:

```
return_type (* function_name)(arg_type arg1, arg_type arg2, ...);
```

Example:

```C
#include <stdio.h>

int sum(int a, int b)
{
    return (a + b);
}

int main()
{
    // declaring a function pointer that takes two
    // integer arguments and returns another integer
    int (* pf)(int a, int b);
    // assigning the function 'sum' to the pointer
    pf = sum; // or pf = &sum
    
    printf("result = %d\n", pf(3, 4));

    return 0;
}
```

### Understanding the usage of the function _qsort_

The _qsort_ function in _stdlib.h_ utilizes the concept of function pointers. For example:

```C
#include <stdio.h>
#include <stdlib.h>

int values[] = { 40, 10, 100, 90, 20, 25 };

int compare(const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

int main()
{
    int n;
    // qsort(
    //    address of first element of array,
    //    number of elements in array,
    //    size of the array element type,
    //    function to be used for comparison
    // )
    qsort(values, 6, sizeof(int), compare);

    for (n = 0; n < 6; n++)
        printf("%d ", values[n]);
    printf("\n");

    return 0;
}
```
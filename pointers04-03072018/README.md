# Pointers
## 3/7/18

### Matrix allocation

When declaring a matrix with dynamic allocation, one should use _second-level pointers_:

```C
int** p;
```

They mean there are **two** arrays:
- One to store the actual _int_ values;
- Another to store the addresses of each one of these first arrays.

In order to allocate, one should do:

```C
int nr, nc, i, j;
nr = 3; nc = 4;

// Auxiliary array to store int* pointers
x = (int**) malloc(nr*sizeof(int*));
for (i = 0; i < nr; i++)
{
    // Allocate lines
    x[i] = (int*) malloc(nc*sizeof(int));
}
```
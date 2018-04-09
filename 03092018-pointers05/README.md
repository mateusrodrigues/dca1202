# Pointers
## 3/9/18

In order to work with matrices more efficiently, one should allocate it as a single row vector:

```C
int **x;
int nr, nc;

nr = 3;
nc = 4;

// Allocating the vector to save each row address
x = (int**) malloc(nr * sizeof(int*));
// Allocating the whole matrix as a single row
x[0] = (int*) malloc(nr * nc * sizeof(int));

// Iterating the address vector and incrementing
// the address to the first position by the number of columns
// So that each row has its own address
for (i = 1; i < nr; i++)
{
    x[i] = x[i - 1] + nc;
}
```
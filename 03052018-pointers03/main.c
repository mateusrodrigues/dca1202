#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

void allocateArray();
void allocateArray2();

int main()
{
    // allocateArray();
    allocateArray2();

    printf("%d\n", CLOCKS_PER_SEC);
    clock_t t = clock();
    printf("%d\n", t);
    return 0;
}

void allocateArray()
{
    int *x;
    int n, i;
    n = 4;

    // allocates memory amount equal to n times
    // the size of int in the platform.
    x = (int*)malloc(n*sizeof(int));

    x[0] = 5;
    x[1] = 3;
    x[2] = -1;
    x[3] = 0;

    for (i = 0; i < n; i++)
    {
        printf("%d, ", x[i]);
    }
    printf("\n");

    // free the memory allocated in line 12.
    free(x);
}

void allocateArray2()
{
    int *x, *y;
    int n, i;
    n = 4;

    x = (int*)malloc(n*sizeof(int));
    y = (int*)malloc(n*sizeof(int));

    x[0] = 1;
    x[1] = 2;
    x[2] = 3;
    x[3] = 4;

    for (i = 0; i < n; i++)
    {
        printf("%d, ", x[i]);
    }
    printf("\n");

    // for (i = 0; i < n; i++)
    // {
    //      y[i] = x[i];
    // }

    memcpy(y, x, n*sizeof(int));

    free(x);

    for (i = 0; i < n; i++)
    {
        printf("%d, ", y[i]);
    }
    printf("\n");

    free(y);
}

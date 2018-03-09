#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void singleVectorMatrixAllocation();
void resize(int** srcAddr, int length, int newLength);

int main()
{
    return 0;
}

void singleVectorMatrixAllocation()
{
    int **x;
    int nr, nc, i, j;

    nr = 3;
    nc = 4;

    x = (int**) malloc(nr * sizeof(int*));
    x[0] = (int*) malloc(nr * nc * sizeof(int));
    for (i = 1; i < nr; i++)
    {
        x[i] = x[i - 1] + nc;
    }

    for (i = 0; i < nr; i++)
    {
        for (j = 0; j < nc; j++)
        {
            x[i][j] = i*(nr + 1) + j + 1;
        }
    }

    for (i = 0; i < nr; i++)
    {
        for (j = 0; j < nc; j++)
        {
            printf("%2d ", x[i][j]);
        }
        printf("\n");
    }

    free(x[0]);
    free(x);
}

void resize(int** srcAddr, int length, int newLength)
{

}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void transposeMatrix(int nr, int nc, int** x, int** xt);

int main()
{
    int** x;
    int** xt;

    int nr, nc, i, j;
    nr = 3; nc = 4;
    srand(time(0));

    // Auxiliary array to store int* pointers
    x = (int**) malloc(nr*sizeof(int*));
    for (i = 0; i < nr; i++)
    {
        // Allocate lines
        x[i] = (int*) malloc(nc*sizeof(int));
    }

    for (i = 0; i < nr; i++)
    {
        for (j = 0; j < nc; j++)
        {
            x[i][j] = 3 + rand() % 18;
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    transposeMatrix(nr, nc, x, xt);

    for (i = 0; i < nr; i++)
    {
        free(x[i]);
    }
    free(x);

    return 0;
}

void transposeMatrix(int nr, int nc, int** x, int** xt)
{
    int i, j;
    xt = (int**) malloc(nc*sizeof(int*));
    for (i = 0; i < nc; i++)
    {
        xt[i] = (int*) malloc(nr*sizeof(int));
    }

    for (i = 0; i < nc; i++)
    {
        for (j = 0; j < nr; j++)
        {
            xt[i][j] = x[j][i];
        }
    }

    for (i = 0; i < nc; i++)
    {
        for (j = 0; j < nr; j++)
        {
            printf("%d ", xt[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (i = 0; i < nc; i++)
    {
        free(xt[i]);
    }
    free(xt);
}

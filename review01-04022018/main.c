#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int *p, i, ncol = 4;
    p = (int*)malloc(ncol * sizeof(int));

    for (i = 0; i < ncol; i++)
    {
        *(p + i) = 'a';
        printf("%d ", *(p + i));
    }
}

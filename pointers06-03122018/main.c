#include <stdio.h>
#include <stdlib.h>

int values[] = { 40, 10, 100, 90, 20, 25 };

int sum(int a, int b)
{
    return (a + b);
}

int compare(const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

int main()
{
    int n;
    qsort(values, 6, sizeof(int), compare);

    for (n = 0; n < 6; n++)
        printf("%d ", values[n]);
    printf("\n");

    int (* pf)(int a, int b);
    pf = sum; // or pf = &sum
    printf("result = %d\n", pf(3, 4));
    printf("size = %d\n", sizeof(struct test));

    return 0;
}

#include <stdio.h>

void swap(int a, int b);

int main()
{
    int x, y;
    x = 3; y = 4;

    // px is a pointer to x; py is a pointer to y
    int *px, *py;
    px = &x;
    py = &y;
    printf("the address of x = %p\n", px);
    printf("the address of y = %p\n\n", py);

    printf("the content of x = %d\n", *px);
    printf("the content of y = %d\n\n", *py);

    printf("main: x = %d; y = %d\n", x, y);
    swap(x, y);
    printf("main: x = %d; y = %d\n", x, y);
    return 0;
}

void swap(int a, int b)
{
    int tmp;
    printf("swap: a = %d; b = %d\n", a, b);
    tmp = a;
    a = b;
    b = tmp;
    printf("swap: a = %d; b = %d\n", a, b);
}

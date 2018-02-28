#include <stdio.h>

void pointerExperiments();
void arrayExperiments();
void ledPanel();

int main()
{
    pointerExperiments();
    arrayExperiments();
    ledPanel();
}

void pointerExperiments()
{
    int x = 1;
    int *px;
    px = &x;

    printf("address of px = %ld\n", &px);
    printf("value of   px = %ld\n\n", px);

    printf("x = %d\n", x);
    x = x + 1;
    printf("x = %d\n", x);

    px = px + 1;
    printf("value of   px = %ld\n\n", px);

    char y;
    char *py;
    py = &y;

    printf("value of   py = %ld\n", py);
    py = py + 1;
    printf("value of   py = %ld\n\n", py);

    printf("pointer size = %ld\n", sizeof(px));
    printf("-----------------------------------\n\n");
}

void arrayExperiments()
{
    int *pz;
    int z[5] = { 1, 2, 9, -3, 8 };
    printf("size of array = %ld\n\n", sizeof(z));

    // Accessing using bracket notation
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", z[i]);
    }
    printf("\n");

    // Accessing using pointer notation
    pz = z;
    for (int i = 0; i < 5; i++)
    {
        // printf("%d ", *pz[i]);
        printf("%d ", *(pz + i));
    }
    printf("\n");

    // Utilizing pointer increments to access values
    pz = z;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *pz);
        pz += 1;    // Increments by 4 bytes
    }
    printf("\n");
    printf("-----------------------------------\n\n");
}

void ledPanel()
{
    unsigned char x, i, bits;
    unsigned int result;

    x = 45;
    bits = 1;

    for (i = 0; i <= 8; i++)
    {
        if ((x & bits) > 0)
        {
            printf("bit [%d] = 1\n", i);
        }
        else
        {
            printf("bit [%d] = 0\n", i);
        }
        bits = bits << 1;
    }
}

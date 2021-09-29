#include <stdio.h>
#include <stdlib.h>
#define ARRAYSIZE 10

int main()
{
    int a[ARRAYSIZE];
    printf("%ld\n", sizeof(a[0]));
    printf("%ld\n", sizeof(a));
    for (int i = 0; i < ARRAYSIZE; i++)
        printf("%p\n", &(a[i]));

    system("pause");
    return 0;
}
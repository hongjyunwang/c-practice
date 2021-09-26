#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    scanf("%d", &i);
    int k = i / 10; // /10可得被除數的十位數
    printf("%d\n", k);
    k = i % 10;
    printf("%d\n", k); // %10可得被除數的個位數

    system("pause");
    return 0;
}
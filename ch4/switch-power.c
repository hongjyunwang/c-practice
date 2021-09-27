#include <stdio.h>
#include <stdlib.h>

int main()
{
    int power, base, exponent;
    scanf("%d%d", &base, &exponent);
    switch (exponent)
    {
    case 1:
        power = base;
        break;
    case 2:
        power = base * base;
        break;
    case 3:
        power = base * base * base;
        break;
    default:
        power = 0;
    }
    printf("%d\n", power);

    system("pause");
    return 0;
}
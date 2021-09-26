#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    bool valid = (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a);
    printf("%d\n", valid);

    system("pause");
    return 0;
}
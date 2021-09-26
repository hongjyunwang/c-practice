#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    bool doubleRoot =
        (b * b - 4 * a * c == 0);
    printf("%d\n", doubleRoot);

    system("pause");
    return 0;
}
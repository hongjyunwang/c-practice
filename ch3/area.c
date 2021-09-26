#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    int area = (c - a) * (d - b);
    int perimeter = 2 * ((c - a) + (d - b));

    printf("%d\n", area);
    printf("%d\n", perimeter);

    system("pause");
    return 0;
}
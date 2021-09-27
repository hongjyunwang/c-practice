#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int width, height;
    if (c > a)
        width = c - a;
    else
        width = a - c;
    if (d > b)
        height = d - b;
    else
        height = b - d;
    int area = width * height;
    int perimeter = 2 * (width + height);
    printf("%d\n", area);
    printf("%d\n", perimeter);

    system("pause");
    return 0;
}
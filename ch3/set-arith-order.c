#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    scanf("%d%d", &i, &j);
    int k = i + 4 * j;
    printf("%d\n", k);
    k = (i + 4) * j;
    printf("%d\n", k);

    system("pause");
    return 0;
}
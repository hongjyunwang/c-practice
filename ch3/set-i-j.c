#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    scanf("%d%d", &i, &j);
    printf("%d\n", i);
    i = j;
    printf("%d\n", i);

    system("pause");
    return 0;
}
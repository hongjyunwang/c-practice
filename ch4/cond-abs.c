#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    scanf("%d", &i);
    int k = (i > 0) ? i : -i;
    printf("%d\n", k);

    system("pause");
    return 0;
}
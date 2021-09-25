//整數的除法沒有小數，若答案有小數一律捨去。
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    scanf("%d%d", &i, &j);
    int k = i / j;
    printf("%d\n", k);

    scanf("%d%d", &i, &j);
    k = i / j;
    printf("%d\n", k);

    system("pause");
    return 0;
}
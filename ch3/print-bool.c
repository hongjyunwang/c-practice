#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //  要引入stdbool.h標頭檔才能使用bool資料型態

int main()
{
    int i, j;
    scanf("%d%d", &i, &j);
    bool k = (i == 3);
    printf("%d\n", k);
    k = (i == j);
    printf("%d\n", k);

    system("pause");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    while (scanf("%d", &i) != EOF) //  在windows可以鍵入ctrl+z，在UNIX鍵入ctrl+d，讓程式知道已經沒有輸入了。
        printf("%d\n", i);

    system("pause");
    return 0;
}
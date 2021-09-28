#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);
    bool prime = true;
    for (int i = 2; ((i * i) <= n) && prime; i++) //  利用旗標(flag)取代break，使迴圈只有一個出口，能增加可讀性。
    {
        if (n % i == 0)
            prime = false;
    }
    printf("%d\n", prime);

    system("pause");
    return 0;
}
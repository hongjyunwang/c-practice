#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);
    bool prime = true;
    for (int i = 2; (i * i) <= n; i++) //  若n為合數，則必定至少有一個小於等於根號n的因數。
    {
        if (n % i == 0)
        {
            prime = false;
            break;
        }
    }
    printf("%d\n", prime);

    system("pause");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#define ARRAYSIZE 1000

int main()
{
    int n, column;
    scanf("%d%d", &n, &column);
    assert(n < ARRAYSIZE && column > 0);

    bool prime[ARRAYSIZE];
    for (int i = 2; i <= n; i++)
        prime[i] = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (!prime[i])
            continue;
        for (int j = 2 * i; j <= n; j += i)
            prime[j] = false;
    }
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == true)
        {
            if (count % column == (column - 1))
                printf("%3d\n", i);
            else
                printf("%3d ", i);
            count++;
        }
    }
    printf("\n");

    system("pause");
    return 0;
}
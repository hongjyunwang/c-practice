//  目的：印出n以內的質數
//  作法：使用一個旗標陣列，陣列元素個數為ARRAYSIZE，
//  從2到n，每個陣列註標對應的bool值設為true(因為質數從2開始)，
//  再用另一個註標j，從2到根號n，將j所有倍數(2倍以上)對應的bool值皆設為false，
//  最後將bool值仍為true的註標印出。

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#define ARRAYSIZE 101

int main()
{
    int n;
    scanf("%d", &n);
    assert(n >= 2 && n < ARRAYSIZE);
    bool prime[ARRAYSIZE];
    for (int i = 2; i <= n; i++)
        prime[i] = true;

    for (int j = 2; j * j <= n; j++)
    {
        if (!prime[j])
            continue;
        for (int k = 2 * j; k <= n; k += j)
            prime[k] = false;
    }

    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
            printf("%d\n", i);
    }

    system("pause");
    return 0;
}
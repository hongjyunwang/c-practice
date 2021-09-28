#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define FIBARRAYSIZE 100

int main()
{
    int n;
    scanf("%d", &n);
    assert(n >= 1 && n <= FIBARRAYSIZE);

    int fib[FIBARRAYSIZE];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < n; i++)
        fib[i] = fib[i - 1] + fib[i - 2];
    for (int i = 0; i < n; i++)
        printf("%d\n", fib[i]);

    system("pause");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int digit;
    int evenSum = 0, oddSum = 0;
    int count = 0;
    while (scanf("%d", &digit) != EOF)
    {
        if (count % 2 == 0)
            evenSum += digit;
        else
            oddSum += digit;
        count++;
    }
    int diff = evenSum - oddSum;
    if (diff < 0)
        diff = -diff;
    printf("%d\n", diff % 11 == 0);

    system("pause");
    return 0;
}
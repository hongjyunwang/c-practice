//  長除法模擬(已假設除數為k，1<=k<=9)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k;
    scanf("%d", &k);

    int digit;
    int toPrint;
    int prev = 0, count = 0;

    while (scanf("%d", &digit) != EOF)
    {
        int value = 10 * prev + digit;
        toPrint = value / k;
        if (!(count == 0 && toPrint == 0))
            printf("%d\n", toPrint);
        prev = value % k;
        count++;
    }
    if (count == 1 && toPrint == 0)
        printf("%d\n", toPrint);

    system("pause");
    return 0;
}
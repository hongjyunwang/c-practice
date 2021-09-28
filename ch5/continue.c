#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int sum = 0;
    for (int count = 0; count < n; count++)
    {
        int i;
        scanf("%d", &i);
        //  不需要處理的條件，用continue略過。
        if (i <= 0)
            continue;
        sum += i;
    }
    printf("%d\n", sum);

    system("pause");
    return 0;
}